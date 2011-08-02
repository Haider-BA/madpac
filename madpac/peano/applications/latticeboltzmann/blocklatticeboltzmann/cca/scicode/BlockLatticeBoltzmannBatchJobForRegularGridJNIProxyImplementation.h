#ifndef PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_BLOCKLATTICEBOLTZMANNBATCHJOBFORREGULARGRID_JNI_PROXY_IMPLEMENTATION
#define PEANO_APPLICATIONS_LATTICEBOLTZMANN_BLOCKLATTICEBOLTZMANN_CCA_BLOCKLATTICEBOLTZMANNBATCHJOBFORREGULARGRID_JNI_PROXY_IMPLEMENTATION
#ifdef __cplusplus
extern "C" {
#endif

#include "jni.h"

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_disconnect(JNIEnv *env, jobject obj,jlong ref,jlong portid);
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_connect_10(JNIEnv *env, jobject obj,jlong ref);
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_connect_11(JNIEnv *env, jobject obj,jlong ref);
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_connect_12(JNIEnv *env, jobject obj,jlong ref);
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_createInstance(JNIEnv *env, jobject obj);
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_free(JNIEnv *env, jobject obj,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_switchToRegularBlockSolverAdapter(JNIEnv *env, jobject obj ,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_switchToBlockVTKOutputAdapter(JNIEnv *env, jobject obj ,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_switchToRegularBlockSolverAndVTKOutputAdapter(JNIEnv *env, jobject obj ,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_iterate(JNIEnv *env, jobject obj ,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfInnerVertices(JNIEnv *env, jobject obj , jdoubleArray vertices,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfBoundaryVertices(JNIEnv *env, jobject obj , jdoubleArray vertices,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfOuterVertices(JNIEnv *env, jobject obj , jdoubleArray vertices,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfInnerCells(JNIEnv *env, jobject obj , jdoubleArray cells,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfOuterCells(JNIEnv *env, jobject obj , jdoubleArray cells,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getMaximumMeshWidth(JNIEnv *env, jobject obj , jlong dimension, jdoubleArray h,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getMinimumMeshWidth(JNIEnv *env, jobject obj , jlong dimension, jdoubleArray h,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getSimulationOutline(JNIEnv *env, jobject obj , jlongArray dimension, jdoubleArray boundingBoxOffset, jdoubleArray boundingBox,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getScopes(JNIEnv *env, jobject obj , jlongArray numberOfScopes, jlongArray scopeCardinality, jobjectArray descriptionOfScope,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getData(JNIEnv *env, jobject obj , jlong scope, jdoubleArray boundingBoxOffset, jdoubleArray boundingBox, jlongArray resolution, jdoubleArray data,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
int peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGrid_getNumberOfFunctions();
#ifdef _WIN32
  __declspec(dllexport)
#endif
const char* peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGrid_getFunctionName(int);
#ifdef _WIN32
  __declspec(dllexport)
#endif
const char* peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGrid_getFunctionSignatur(int);
#ifdef __cplusplus
}
#endif 
#endif 
