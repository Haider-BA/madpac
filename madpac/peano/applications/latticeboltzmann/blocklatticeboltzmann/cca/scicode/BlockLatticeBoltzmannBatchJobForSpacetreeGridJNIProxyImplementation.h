#ifndef PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_BLOCKLATTICEBOLTZMANNBATCHJOBFORSPACETREEGRID_JNI_PROXY_IMPLEMENTATION
#define PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_BLOCKLATTICEBOLTZMANNBATCHJOBFORSPACETREEGRID_JNI_PROXY_IMPLEMENTATION
#ifdef __cplusplus
extern "C" {
#endif

#include "jni.h"

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_disconnect(JNIEnv *env, jobject obj,jlong ref,jlong portid);
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_connect_10(JNIEnv *env, jobject obj,jlong ref);
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_connect_11(JNIEnv *env, jobject obj,jlong ref);
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_connect_12(JNIEnv *env, jobject obj,jlong ref);
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_createInstance(JNIEnv *env, jobject obj);
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_free(JNIEnv *env, jobject obj,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_switchToRegularBlockSolverAdapter(JNIEnv *env, jobject obj ,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_switchToBlockVTKOutputAdapter(JNIEnv *env, jobject obj ,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_switchToRegularBlockSolverAndVTKOutputAdapter(JNIEnv *env, jobject obj ,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_iterate(JNIEnv *env, jobject obj ,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfInnerVertices(JNIEnv *env, jobject obj , jdoubleArray vertices,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfBoundaryVertices(JNIEnv *env, jobject obj , jdoubleArray vertices,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfOuterVertices(JNIEnv *env, jobject obj , jdoubleArray vertices,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfInnerCells(JNIEnv *env, jobject obj , jdoubleArray cells,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfOuterCells(JNIEnv *env, jobject obj , jdoubleArray cells,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getMaximumMeshWidth(JNIEnv *env, jobject obj , jlong dimension, jdoubleArray h,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getMinimumMeshWidth(JNIEnv *env, jobject obj , jlong dimension, jdoubleArray h,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
int peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGrid_getNumberOfFunctions();
#ifdef _WIN32
  __declspec(dllexport)
#endif
const char* peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGrid_getFunctionName(int);
#ifdef _WIN32
  __declspec(dllexport)
#endif
const char* peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGrid_getFunctionSignatur(int);
#ifdef __cplusplus
}
#endif 
#endif 
