// Copyright (C) 2009 Technische Universitaet Muenchen
// This file is part of the Peano project. For conditions of distribution and
// use, please see the copyright notice at www5.in.tum.de/peano
#ifndef _PEANO_KERNEL_STACKS_IMPLEMENTATION_FILE_STACK_H_
#define _PEANO_KERNEL_STACKS_IMPLEMENTATION_FILE_STACK_H_

#include "tarch/logging/Log.h"


namespace peano {
  namespace kernel {
    namespace stacks {
      namespace implementation {
        template <class T>
        class FileStack;

        /**
         * Helper function to give the stack files a unique number.
         */
        int getUniqueGlobalStackNumber();
      }
    }
  }
}


/**
 * Stack based upon swap files and a fixed memory cache.
 *
 * Represents on stack based upon arrays and temporary files. The algorithm
 * managed one big array with blocknumber*blocksize and is given blocknumber,
 * blocksize and maximal and minimal fill status. The array is clustered into
 * different blocks of equal blocksize. There is a current block and a bottom
 * block. As soon as the number of entries in the current block becomes smaller
 * minimal fill status, a block from a swap file is read into the block
 * bottom block-1. If the number of entries in the current block exceeds
 * maximal fill status, the current block is written to a swap file. The
 * swap files are enumerated according to their creation time, and the whole
 * buffer is organized as ring buffer.
 *
 * @image html stacks_FileStack.png
 *
 * Per swapped array partition, one temporary file is created. Thus, all the
 * temporary files belonging to one stack have to have exactly the same size.
 * It seems to be very primitive to use a simple blocking binary output
 * mechanism to create the swap files. The idea is to use OpenMP later on to
 * make the io jobs run in parallel to the application. This seems to be
 * sexier than using vendor-specific non-blocking IO operations. Thus, the IO
 * code is really trivial:
 *
 * \code
 *   char buffer[100];
 *   ofstream myFile ("data.bin", ios::out | ios::binary);
 *   myFile.write (buffer, 100);
 * \endcode
 *
 * Each swap file is either read en block or written en block, seeking and
 * mixed read/write access are not required.
 *
 * The swapping mechanism is rather simple: There is a _currentGlobalIndex
 * identifying the first free element on top of the stack and _bottomGlobalIndex
 * identifying the smallest element of the global stack that is still stored
 * within the array. All elements smaller than _bottomGlobalIndex are stored
 * within swap files. There are two variables on can derive using
 * _currentGlobalIndex: The current block using an integer division, and the
 * actual index within the array _array derived using a modulo division.
 *
 * As soon as the maximal fill rate is passed from bottom to up, and the global
 * current index minus the global bottom index is bigger than half the number of
 * entries of the whole array, one block is stored to a swap file. If the
 * minimal fill rate is passed reading entries and the difference between global
 * current index and bottom index is smaller than half the number of available
 * memory places, swap files are read in if there are still swap files
 * available.
 *
 * @author Tobias Weinzierl
 * @version $Revision: 1.17 $
 */
template <class T>
class peano::kernel::stacks::implementation::FileStack {
  private:
    /**
     * Log device.
     */
    static tarch::logging::Log _log;

    /**
     * Stores the complete array en block. The size is
     * _blockSize*_numberOfBlocks.
     */
    T* _array;

    /**
     * Prefix for all the temporary files. This prefix has to be added an
     * unique number returned by getUniqueGlobalStackNumber().
     */
    std::string _uniqueTemporaryFilePrefix;

    /**
     * Size of one block.
     */
    long int _arraySize;

    /**
     * Number of blocks available.
     */
    int _blockSize;

    /**
     * If the number of elements in the current block becomes smaller than this
     * attribute, a swap file has to be loaded into _array.
     */
    long int _minFillFactor;

    /**
     * As soon as the number of elements in the current block becomes greater
     * than this attribute, the lowest block of _array has to be stored into
     * a swap file.
     */
    long int _maxFillFactor;

    /**
     * Holds the number of swap files currently stored on hard disk. This
     * number has to be used whenever the name of a new swap file is
     * determined.
     */
    int _swapFileCounter;

    /**
     * Holds the maximum swap file counter that has occured. If the bool
     * _removeSwapFiles is set, the swap files are deleted immediately after the
     * swap file has been loaded into the array. Otherwise, all the swap files
     * are deleted after program run termination. In the latter case, the
     * attribute _maxSwapFileCounter is used.
     */
    int _maxSwapFileCounter;

    /**
     * Equals the size of the global stack.
     */
    long int _currentGlobalIndex;

    /**
     * Identifies the smallest global element, that is stored within the array
     * but not written to a swap file.
     */
    long int _bottomGlobalIndex;

    long int _maxSize;

    /**
     * Nothing is done, if there is no swap file, i.e. _swapFileCounter equals
     * 0.
     *
     * Precondition: !_swapFileLoadedForCurrentBlock
     */
    void loadSwapFile();

    /**
     * Precondtion: !_swapFileWrittenForCurrentBlock
     */
    void storeSwapFile();

    /**
     * Increments the current counter. The current counter points to the first
     * free storage location. Has to do all the boundary and swapping checks.
     */
    void incCounter();

    /**
     * Decrements the current counter. The current counter points to the first
     * free storage location. Has to do all the boundary and swapping checks.
     */
    void decCounter();

    std::string getSwapFileName( int i ) const;

    void removeSwapFiles();
  public:
    FileStack();

    ~FileStack();

    void init(
      int blockSize,
      int numberOfBlocks,
      int minFillThreshold,
      int maxFillThreshold,
      const std::string& tempFilePrefix
    );

    void clear();

    void push( const T& element );

    T pop();

    long int size() const;

    long int getMaxSize() const;

    void clearMaxSize();

    bool isEmpty() const;
};


#include "peano/kernel/stacks/implementation/FileStack.cpph"

#endif
