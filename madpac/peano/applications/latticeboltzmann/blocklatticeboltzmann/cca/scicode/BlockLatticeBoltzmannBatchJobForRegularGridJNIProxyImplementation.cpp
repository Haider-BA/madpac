#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/cca/scicode/BlockLatticeBoltzmannBatchJobForRegularGridJNIProxyImplementation.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/cca/BlockLatticeBoltzmannBatchJobForRegularGridImplementation.h"
#include "peano/integration/cca/ports/LogToJNIPortImplementation.h"
#include "peano/integration/cca/ports/grid/VisualisationToJNIPortImplementation.h"
#include "peano/integration/cca/ports/grid/StatisticsToJNIPortImplementation.h"
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_createInstance(JNIEnv *env, jobject obj){
  peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation *ref=new peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation;
  jfieldID id =env->GetFieldID(env->GetObjectClass(obj), "_ref", "J");
  env->SetLongField(obj, id, (jlong)ref);
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_free(JNIEnv *env, jobject obj,jlong ref){
  delete ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref);
  //end of free
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
int peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGrid_getNumberOfFunctions(){
  return 22;
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
const char* peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGrid_getFunctionName(int fId){
  switch(fId){
    case 0: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_createInstance";
    case 1: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_free";
    case 2: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_switchToRegularBlockSolverAdapter";
    case 3: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_switchToBlockVTKOutputAdapter";
    case 4: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_switchToRegularBlockSolverAndVTKOutputAdapter";
    case 5: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_iterate";
    case 6: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfInnerVertices";
    case 7: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfBoundaryVertices";
    case 8: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfOuterVertices";
    case 9: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfInnerCells";
    case 10: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfOuterCells";
    case 11: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getMaximumMeshWidth";
    case 12: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getMinimumMeshWidth";
    case 13: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getSimulationOutline";
    case 14: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getScopes";
    case 15: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getData";
    case 16: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_connect_10";
    case 17: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_connect_11";
    case 18: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_connect_12";
    case 19: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_disconnect";
    
  }
  return NULL;
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
const char* peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGrid_getFunctionSignatur(int fId){
  switch(fId){
    case 0: return "()V";
    case 1: return "(J)V";
    case 2: return "(J)V";
    case 3: return "(J)V";
    case 4: return "(J)V";
    case 5: return "(J)V";
    case 6: return "([DJ)V";
    case 7: return "([DJ)V";
    case 8: return "([DJ)V";
    case 9: return "([DJ)V";
    case 10: return "([DJ)V";
    case 11: return "(J[DJ)V";
    case 12: return "(J[DJ)V";
    case 13: return "([J[D[DJ)V";
    case 14: return "([J[J[Ljava/lang/String;J)V";
    case 15: return "(J[D[D[J[DJ)V";
    case 16:return "(J)V";
    case 17:return "(J)V";
    case 18:return "(J)V";
    case 19:return "(JJ)V";
    
  }
  return NULL;
}
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_disconnect(JNIEnv *env, jobject obj,jlong ref,jlong portid){
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForRegularGrid*)ref)->disconnect((long long&)portid);
  //End of disconnect
}
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_connect_10(JNIEnv *env, jobject obj,jlong ref){
  JavaVM* jvm;
  env->GetJavaVM(&jvm);
  jobject self=env->NewGlobalRef(obj);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForRegularGrid*)ref)->connect(new peano::integration::cca::ports::LogToJNIPortImplementation(jvm,self,"Log"));
  
}
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_connect_11(JNIEnv *env, jobject obj,jlong ref){
  JavaVM* jvm;
  env->GetJavaVM(&jvm);
  jobject self=env->NewGlobalRef(obj);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForRegularGrid*)ref)->connect(new peano::integration::cca::ports::grid::VisualisationToJNIPortImplementation(jvm,self,"GridVisualisation"));
  
}
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForRegularGrid_connect_12(JNIEnv *env, jobject obj,jlong ref){
  JavaVM* jvm;
  env->GetJavaVM(&jvm);
  jobject self=env->NewGlobalRef(obj);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForRegularGrid*)ref)->connect(new peano::integration::cca::ports::grid::StatisticsToJNIPortImplementation(jvm,self,"GridStatistics"));
  
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_switchToRegularBlockSolverAdapter(JNIEnv *env, jobject obj ,jlong ref){
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref)->
  switchToRegularBlockSolverAdapter();
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_switchToBlockVTKOutputAdapter(JNIEnv *env, jobject obj ,jlong ref){
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref)->
  switchToBlockVTKOutputAdapter();
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_switchToRegularBlockSolverAndVTKOutputAdapter(JNIEnv *env, jobject obj ,jlong ref){
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref)->
  switchToRegularBlockSolverAndVTKOutputAdapter();
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_iterate(JNIEnv *env, jobject obj ,jlong ref){
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref)->
  iterate();
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfInnerVertices(JNIEnv *env, jobject obj , jdoubleArray vertices,jlong ref){
  jdouble* vertices_jni=env->GetDoubleArrayElements(vertices,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref)->
  getNumberOfInnerVertices((double&)vertices_jni[0]);
  env->ReleaseDoubleArrayElements(vertices,vertices_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfBoundaryVertices(JNIEnv *env, jobject obj , jdoubleArray vertices,jlong ref){
  jdouble* vertices_jni=env->GetDoubleArrayElements(vertices,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref)->
  getNumberOfBoundaryVertices((double&)vertices_jni[0]);
  env->ReleaseDoubleArrayElements(vertices,vertices_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfOuterVertices(JNIEnv *env, jobject obj , jdoubleArray vertices,jlong ref){
  jdouble* vertices_jni=env->GetDoubleArrayElements(vertices,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref)->
  getNumberOfOuterVertices((double&)vertices_jni[0]);
  env->ReleaseDoubleArrayElements(vertices,vertices_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfInnerCells(JNIEnv *env, jobject obj , jdoubleArray cells,jlong ref){
  jdouble* cells_jni=env->GetDoubleArrayElements(cells,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref)->
  getNumberOfInnerCells((double&)cells_jni[0]);
  env->ReleaseDoubleArrayElements(cells,cells_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getNumberOfOuterCells(JNIEnv *env, jobject obj , jdoubleArray cells,jlong ref){
  jdouble* cells_jni=env->GetDoubleArrayElements(cells,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref)->
  getNumberOfOuterCells((double&)cells_jni[0]);
  env->ReleaseDoubleArrayElements(cells,cells_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getMaximumMeshWidth(JNIEnv *env, jobject obj , jlong dimension, jdoubleArray h,jlong ref){
  jdouble* h_jni=env->GetDoubleArrayElements(h,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref)->
  getMaximumMeshWidth(dimension,(double&)h_jni[0]);
  env->ReleaseDoubleArrayElements(h,h_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getMinimumMeshWidth(JNIEnv *env, jobject obj , jlong dimension, jdoubleArray h,jlong ref){
  jdouble* h_jni=env->GetDoubleArrayElements(h,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref)->
  getMinimumMeshWidth(dimension,(double&)h_jni[0]);
  env->ReleaseDoubleArrayElements(h,h_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getSimulationOutline(JNIEnv *env, jobject obj , jlongArray dimension, jdoubleArray boundingBoxOffset, jdoubleArray boundingBox,jlong ref){
  jlong* dimension_jni=env->GetLongArrayElements(dimension,0);
  jdouble* boundingBoxOffset_jni=env->GetDoubleArrayElements(boundingBoxOffset,0);
  jdouble* boundingBox_jni=env->GetDoubleArrayElements(boundingBox,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref)->
  getSimulationOutline((long long&)dimension_jni[0],(double*&)boundingBoxOffset_jni,(long)env->GetArrayLength(boundingBoxOffset),(double*&)boundingBox_jni,(long)env->GetArrayLength(boundingBox));
  env->ReleaseLongArrayElements(dimension,dimension_jni,0);
  env->ReleaseDoubleArrayElements(boundingBoxOffset,boundingBoxOffset_jni,0);
  env->ReleaseDoubleArrayElements(boundingBox,boundingBox_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getScopes(JNIEnv *env, jobject obj , jlongArray numberOfScopes, jlongArray scopeCardinality, jobjectArray descriptionOfScope,jlong ref){
  jlong* numberOfScopes_jni=env->GetLongArrayElements(numberOfScopes,0);
  jlong* scopeCardinality_jni=env->GetLongArrayElements(scopeCardinality,0);
  std::string* descriptionOfScope_jni = new std::string[env->GetArrayLength(descriptionOfScope)];
  for(int i=0;i<env->GetArrayLength(descriptionOfScope);i++)
    descriptionOfScope_jni[i]=std::string(env->GetStringUTFChars((jstring)env->GetObjectArrayElement(descriptionOfScope,i),0));
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref)->
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
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForRegularGridImplementation_getData(JNIEnv *env, jobject obj , jlong scope, jdoubleArray boundingBoxOffset, jdoubleArray boundingBox, jlongArray resolution, jdoubleArray data,jlong ref){
  const jdouble* boundingBoxOffset_jni=env->GetDoubleArrayElements(boundingBoxOffset,0);
  const jdouble* boundingBox_jni=env->GetDoubleArrayElements(boundingBox,0);
  const jlong* resolution_jni=env->GetLongArrayElements(resolution,0);
  jdouble* data_jni=env->GetDoubleArrayElements(data,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForRegularGridImplementation*)ref)->
  getData(scope,(const double*&)boundingBoxOffset_jni,(long)env->GetArrayLength(boundingBoxOffset),(const double*&)boundingBox_jni,(long)env->GetArrayLength(boundingBox),(const long long*&)resolution_jni,(long)env->GetArrayLength(resolution),(double*&)data_jni,(long)env->GetArrayLength(data));
  env->ReleaseDoubleArrayElements(data,data_jni,0);
  }
