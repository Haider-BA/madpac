#include "peano/applications/navierstokes/prototype1/cca/deisa/scicode/PeanoSolverJNIProxyImplementation.h"
#include "peano/applications/navierstokes/prototype1/cca/deisa/PeanoSolverImplementation.h"
#include "peano/integration/cca/ports/LogToJNIPortImplementation.h"
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_navierstokes_prototype1_cca_deisa_AbstractPeanoSolver_createInstance(JNIEnv *env, jobject obj){
  peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation *ref=new peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation;
  jfieldID id =env->GetFieldID(env->GetObjectClass(obj), "_ref", "J");
  env->SetLongField(obj, id, (jlong)ref);
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_navierstokes_prototype1_cca_deisa_AbstractPeanoSolver_free(JNIEnv *env, jobject obj,jlong ref){
  delete ((peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation*)ref);
  //end of free
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
int peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolver_getNumberOfFunctions(){
  return 7;
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
const char* peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolver_getFunctionName(int fId){
  switch(fId){
    case 0: return "Java_peano_applications_navierstokes_prototype1_cca_deisa_AbstractPeanoSolver_createInstance";
    case 1: return "Java_peano_applications_navierstokes_prototype1_cca_deisa_AbstractPeanoSolver_free";
    case 2: return "Java_peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolverImplementation_getSimulationOutline";
    case 3: return "Java_peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolverImplementation_getScopes";
    case 4: return "Java_peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolverImplementation_getData";
    case 5: return "Java_peano_applications_navierstokes_prototype1_cca_deisa_AbstractPeanoSolver_connect_10";
    case 6: return "Java_peano_applications_navierstokes_prototype1_cca_deisa_AbstractPeanoSolver_disconnect";
    
  }
  return NULL;
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
const char* peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolver_getFunctionSignatur(int fId){
  switch(fId){
    case 0: return "()V";
    case 1: return "(J)V";
    case 2: return "([J[D[DJ)V";
    case 3: return "([J[J[Ljava/lang/String;J)V";
    case 4: return "(J[D[D[J[DJ)V";
    case 5:return "(J)V";
    case 6:return "(JJ)V";
    
  }
  return NULL;
}
JNIEXPORT void JNICALL Java_peano_applications_navierstokes_prototype1_cca_deisa_AbstractPeanoSolver_disconnect(JNIEnv *env, jobject obj,jlong ref,jlong portid){
  ((peano::applications::navierstokes::prototype1::cca::deisa::AbstractPeanoSolver*)ref)->disconnect((long long&)portid);
  //End of disconnect
}
JNIEXPORT void JNICALL Java_peano_applications_navierstokes_prototype1_cca_deisa_AbstractPeanoSolver_connect_10(JNIEnv *env, jobject obj,jlong ref){
  JavaVM* jvm;
  env->GetJavaVM(&jvm);
  jobject self=env->NewGlobalRef(obj);
  ((peano::applications::navierstokes::prototype1::cca::deisa::AbstractPeanoSolver*)ref)->connect(new peano::integration::cca::ports::LogToJNIPortImplementation(jvm,self,"logger"));
  
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolverImplementation_getSimulationOutline(JNIEnv *env, jobject obj , jlongArray dimension, jdoubleArray boundingBoxOffset, jdoubleArray boundingBox,jlong ref){
  jlong* dimension_jni=env->GetLongArrayElements(dimension,0);
  jdouble* boundingBoxOffset_jni=env->GetDoubleArrayElements(boundingBoxOffset,0);
  jdouble* boundingBox_jni=env->GetDoubleArrayElements(boundingBox,0);
  ((peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation*)ref)->
  getSimulationOutline((long long&)dimension_jni[0],(double*&)boundingBoxOffset_jni,(long)env->GetArrayLength(boundingBoxOffset),(double*&)boundingBox_jni,(long)env->GetArrayLength(boundingBox));
  env->ReleaseLongArrayElements(dimension,dimension_jni,0);
  env->ReleaseDoubleArrayElements(boundingBoxOffset,boundingBoxOffset_jni,0);
  env->ReleaseDoubleArrayElements(boundingBox,boundingBox_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolverImplementation_getScopes(JNIEnv *env, jobject obj , jlongArray numberOfScopes, jlongArray scopeCardinality, jobjectArray descriptionOfScope,jlong ref){
  jlong* numberOfScopes_jni=env->GetLongArrayElements(numberOfScopes,0);
  jlong* scopeCardinality_jni=env->GetLongArrayElements(scopeCardinality,0);
  std::string* descriptionOfScope_jni = new std::string[env->GetArrayLength(descriptionOfScope)];
  for(int i=0;i<env->GetArrayLength(descriptionOfScope);i++)
    descriptionOfScope_jni[i]=std::string(env->GetStringUTFChars((jstring)env->GetObjectArrayElement(descriptionOfScope,i),0));
  ((peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation*)ref)->
  getScopes((long long&)numberOfScopes_jni[0],(long long*&)scopeCardinality_jni,(long)env->GetArrayLength(scopeCardinality),descriptionOfScope_jni,(long)env->GetArrayLength(descriptionOfScope));
  env->ReleaseLongArrayElements(numberOfScopes,numberOfScopes_jni,0);
  env->ReleaseLongArrayElements(scopeCardinality,scopeCardinality_jni,0);
  for(int i=0;i<env->GetArrayLength(descriptionOfScope);i++)
     env->SetObjectArrayElement(descriptionOfScope,i,env->NewStringUTF(descriptionOfScope_jni[i].c_str()));
  delete [] descriptionOfScope_jni;
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_navierstokes_prototype1_cca_deisa_PeanoSolverImplementation_getData(JNIEnv *env, jobject obj , jlong scope, jdoubleArray boundingBoxOffset, jdoubleArray boundingBox, jlongArray resolution, jdoubleArray data,jlong ref){
  const jdouble* boundingBoxOffset_jni=env->GetDoubleArrayElements(boundingBoxOffset,0);
  const jdouble* boundingBox_jni=env->GetDoubleArrayElements(boundingBox,0);
  const jlong* resolution_jni=env->GetLongArrayElements(resolution,0);
  jdouble* data_jni=env->GetDoubleArrayElements(data,0);
  ((peano::applications::navierstokes::prototype1::cca::deisa::PeanoSolverImplementation*)ref)->
  getData(scope,(const double*&)boundingBoxOffset_jni,(long)env->GetArrayLength(boundingBoxOffset),(const double*&)boundingBox_jni,(long)env->GetArrayLength(boundingBox),(const long long*&)resolution_jni,(long)env->GetArrayLength(resolution),(double*&)data_jni,(long)env->GetArrayLength(data));
  env->ReleaseDoubleArrayElements(data,data_jni,0);
  }
