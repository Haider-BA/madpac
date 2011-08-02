#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/cca/scicode/BlockLatticeBoltzmannBatchJobForSpacetreeGridJNIProxyImplementation.h"
#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/cca/BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation.h"
#include "peano/integration/cca/ports/LogToJNIPortImplementation.h"
#include "peano/integration/cca/ports/grid/VisualisationToJNIPortImplementation.h"
#include "peano/integration/cca/ports/grid/StatisticsToJNIPortImplementation.h"
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_createInstance(JNIEnv *env, jobject obj){
  peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation *ref=new peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation;
  jfieldID id =env->GetFieldID(env->GetObjectClass(obj), "_ref", "J");
  env->SetLongField(obj, id, (jlong)ref);
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_free(JNIEnv *env, jobject obj,jlong ref){
  delete ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation*)ref);
  //end of free
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
int peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGrid_getNumberOfFunctions(){
  return 19;
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
const char* peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGrid_getFunctionName(int fId){
  switch(fId){
    case 0: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_createInstance";
    case 1: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_free";
    case 2: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_switchToRegularBlockSolverAdapter";
    case 3: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_switchToBlockVTKOutputAdapter";
    case 4: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_switchToRegularBlockSolverAndVTKOutputAdapter";
    case 5: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_iterate";
    case 6: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfInnerVertices";
    case 7: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfBoundaryVertices";
    case 8: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfOuterVertices";
    case 9: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfInnerCells";
    case 10: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfOuterCells";
    case 11: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getMaximumMeshWidth";
    case 12: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getMinimumMeshWidth";
    case 13: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_connect_10";
    case 14: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_connect_11";
    case 15: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_connect_12";
    case 16: return "Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_disconnect";
    
  }
  return NULL;
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
const char* peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGrid_getFunctionSignatur(int fId){
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
    case 13:return "(J)V";
    case 14:return "(J)V";
    case 15:return "(J)V";
    case 16:return "(JJ)V";
    
  }
  return NULL;
}
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_disconnect(JNIEnv *env, jobject obj,jlong ref,jlong portid){
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid*)ref)->disconnect((long long&)portid);
  //End of disconnect
}
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_connect_10(JNIEnv *env, jobject obj,jlong ref){
  JavaVM* jvm;
  env->GetJavaVM(&jvm);
  jobject self=env->NewGlobalRef(obj);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid*)ref)->connect(new peano::integration::cca::ports::LogToJNIPortImplementation(jvm,self,"Log"));
  
}
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_connect_11(JNIEnv *env, jobject obj,jlong ref){
  JavaVM* jvm;
  env->GetJavaVM(&jvm);
  jobject self=env->NewGlobalRef(obj);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid*)ref)->connect(new peano::integration::cca::ports::grid::VisualisationToJNIPortImplementation(jvm,self,"GridVisualisation"));
  
}
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid_connect_12(JNIEnv *env, jobject obj,jlong ref){
  JavaVM* jvm;
  env->GetJavaVM(&jvm);
  jobject self=env->NewGlobalRef(obj);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::AbstractBlockLatticeBoltzmannBatchJobForSpacetreeGrid*)ref)->connect(new peano::integration::cca::ports::grid::StatisticsToJNIPortImplementation(jvm,self,"GridStatistics"));
  
}
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_switchToRegularBlockSolverAdapter(JNIEnv *env, jobject obj ,jlong ref){
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation*)ref)->
  switchToRegularBlockSolverAdapter();
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_switchToBlockVTKOutputAdapter(JNIEnv *env, jobject obj ,jlong ref){
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation*)ref)->
  switchToBlockVTKOutputAdapter();
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_switchToRegularBlockSolverAndVTKOutputAdapter(JNIEnv *env, jobject obj ,jlong ref){
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation*)ref)->
  switchToRegularBlockSolverAndVTKOutputAdapter();
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_iterate(JNIEnv *env, jobject obj ,jlong ref){
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation*)ref)->
  iterate();
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfInnerVertices(JNIEnv *env, jobject obj , jdoubleArray vertices,jlong ref){
  jdouble* vertices_jni=env->GetDoubleArrayElements(vertices,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation*)ref)->
  getNumberOfInnerVertices((double&)vertices_jni[0]);
  env->ReleaseDoubleArrayElements(vertices,vertices_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfBoundaryVertices(JNIEnv *env, jobject obj , jdoubleArray vertices,jlong ref){
  jdouble* vertices_jni=env->GetDoubleArrayElements(vertices,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation*)ref)->
  getNumberOfBoundaryVertices((double&)vertices_jni[0]);
  env->ReleaseDoubleArrayElements(vertices,vertices_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfOuterVertices(JNIEnv *env, jobject obj , jdoubleArray vertices,jlong ref){
  jdouble* vertices_jni=env->GetDoubleArrayElements(vertices,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation*)ref)->
  getNumberOfOuterVertices((double&)vertices_jni[0]);
  env->ReleaseDoubleArrayElements(vertices,vertices_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfInnerCells(JNIEnv *env, jobject obj , jdoubleArray cells,jlong ref){
  jdouble* cells_jni=env->GetDoubleArrayElements(cells,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation*)ref)->
  getNumberOfInnerCells((double&)cells_jni[0]);
  env->ReleaseDoubleArrayElements(cells,cells_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getNumberOfOuterCells(JNIEnv *env, jobject obj , jdoubleArray cells,jlong ref){
  jdouble* cells_jni=env->GetDoubleArrayElements(cells,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation*)ref)->
  getNumberOfOuterCells((double&)cells_jni[0]);
  env->ReleaseDoubleArrayElements(cells,cells_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getMaximumMeshWidth(JNIEnv *env, jobject obj , jlong dimension, jdoubleArray h,jlong ref){
  jdouble* h_jni=env->GetDoubleArrayElements(h,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation*)ref)->
  getMaximumMeshWidth(dimension,(double&)h_jni[0]);
  env->ReleaseDoubleArrayElements(h,h_jni,0);
  }
#ifdef _WIN32
  __declspec(dllexport)
#endif
JNIEXPORT void JNICALL Java_peano_applications_latticeboltzmann_blocklatticeboltzmann_cca_BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation_getMinimumMeshWidth(JNIEnv *env, jobject obj , jlong dimension, jdoubleArray h,jlong ref){
  jdouble* h_jni=env->GetDoubleArrayElements(h,0);
  ((peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::BlockLatticeBoltzmannBatchJobForSpacetreeGridImplementation*)ref)->
  getMinimumMeshWidth(dimension,(double&)h_jni[0]);
  env->ReleaseDoubleArrayElements(h,h_jni,0);
  }
