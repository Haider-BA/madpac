#ifndef PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_CCA_DEISA_PEANOSOLVER_JNI_PROXY_IMPLEMENTATION
#define PEANO_APPLICATIONS_NAVIERSTOKES_PROTOTYPE1_CCA_DEISA_PEANOSOLVER_JNI_PROXY_IMPLEMENTATION
#ifdef __cplusplus
extern "C" {
#endif

#include "jni.h"

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_navierstokes_prototype1_cca_deisa_AbstractPeanoSolver_disconnect(JNIEnv *env, jobject obj,jlong ref,jlong portid);
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_navierstokes_prototype1_cca_deisa_AbstractPeanoSolver_connect_10(JNIEnv *env, jobject obj,jlong ref);
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_navierstokes_prototype1_cca_deisa_AbstractPeanoSolver_createInstance(JNIEnv *env, jobject obj);
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_navierstokes_prototype1_cca_deisa_AbstractPeanoSolver_free(JNIEnv *env, jobject obj,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolverImplementation_getSimulationOutline(JNIEnv *env, jobject obj , jlongArray dimension, jdoubleArray boundingBoxOffset, jdoubleArray boundingBox,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolverImplementation_getScopes(JNIEnv *env, jobject obj , jlongArray numberOfScopes, jlongArray scopeCardinality, jobjectArray descriptionOfScope,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolverImplementation_getData(JNIEnv *env, jobject obj , jlong scope, jdoubleArray boundingBoxOffset, jdoubleArray boundingBox, jlongArray resolution, jdoubleArray data,jlong ref);

#ifdef _WIN32
  __declspec(dllexport)
#endif
int peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolver_getNumberOfFunctions();
#ifdef _WIN32
  __declspec(dllexport)
#endif
const char* peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolver_getFunctionName(int);
#ifdef _WIN32
  __declspec(dllexport)
#endif
const char* peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolver_getFunctionSignatur(int);
#ifdef __cplusplus
}
#endif 
#endif 
