#include "peano/integration/cca/ports/grid/GridToJNIPortImplementation.h"

peano::integration::cca::ports::grid::GridToJNIPortImplementation::GridToJNIPortImplementation(JavaVM* jvm,jobject& obj,const std::string& portIdentifier):
  _jvm(jvm),
  _obj(obj),
  _portIdentifier(portIdentifier){
  
}

peano::integration::cca::ports::grid::GridToJNIPortImplementation::~GridToJNIPortImplementation() {
  
}


void peano::integration::cca::ports::grid::GridToJNIPortImplementation::getNumberOfInnerVertices(double& vertices){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/grid/Grid;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/integration/cca/ports/grid/Grid;");
  jmethodID mid = env->GetMethodID(cls,"getNumberOfInnerVertices",
  "([D)V");
  if(mid){
    jdoubleArray vertices_jni=env->NewDoubleArray(1);
    jdouble vertices_temp[1];
    vertices_temp[0]=vertices;
    env->SetDoubleArrayRegion(vertices_jni,0,1,vertices_temp);
    env->CallVoidMethod(obj,mid,vertices_jni);
    vertices= env->GetDoubleArrayElements(vertices_jni,0)[0];
    }
  }
void peano::integration::cca::ports::grid::GridToJNIPortImplementation::getNumberOfBoundaryVertices(double& vertices){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/grid/Grid;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/integration/cca/ports/grid/Grid;");
  jmethodID mid = env->GetMethodID(cls,"getNumberOfBoundaryVertices",
  "([D)V");
  if(mid){
    jdoubleArray vertices_jni=env->NewDoubleArray(1);
    jdouble vertices_temp[1];
    vertices_temp[0]=vertices;
    env->SetDoubleArrayRegion(vertices_jni,0,1,vertices_temp);
    env->CallVoidMethod(obj,mid,vertices_jni);
    vertices= env->GetDoubleArrayElements(vertices_jni,0)[0];
    }
  }
void peano::integration::cca::ports::grid::GridToJNIPortImplementation::getNumberOfOuterVertices(double& vertices){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/grid/Grid;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/integration/cca/ports/grid/Grid;");
  jmethodID mid = env->GetMethodID(cls,"getNumberOfOuterVertices",
  "([D)V");
  if(mid){
    jdoubleArray vertices_jni=env->NewDoubleArray(1);
    jdouble vertices_temp[1];
    vertices_temp[0]=vertices;
    env->SetDoubleArrayRegion(vertices_jni,0,1,vertices_temp);
    env->CallVoidMethod(obj,mid,vertices_jni);
    vertices= env->GetDoubleArrayElements(vertices_jni,0)[0];
    }
  }
void peano::integration::cca::ports::grid::GridToJNIPortImplementation::getNumberOfInnerCells(double& cells){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/grid/Grid;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/integration/cca/ports/grid/Grid;");
  jmethodID mid = env->GetMethodID(cls,"getNumberOfInnerCells",
  "([D)V");
  if(mid){
    jdoubleArray cells_jni=env->NewDoubleArray(1);
    jdouble cells_temp[1];
    cells_temp[0]=cells;
    env->SetDoubleArrayRegion(cells_jni,0,1,cells_temp);
    env->CallVoidMethod(obj,mid,cells_jni);
    cells= env->GetDoubleArrayElements(cells_jni,0)[0];
    }
  }
void peano::integration::cca::ports::grid::GridToJNIPortImplementation::getNumberOfOuterCells(double& cells){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/grid/Grid;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/integration/cca/ports/grid/Grid;");
  jmethodID mid = env->GetMethodID(cls,"getNumberOfOuterCells",
  "([D)V");
  if(mid){
    jdoubleArray cells_jni=env->NewDoubleArray(1);
    jdouble cells_temp[1];
    cells_temp[0]=cells;
    env->SetDoubleArrayRegion(cells_jni,0,1,cells_temp);
    env->CallVoidMethod(obj,mid,cells_jni);
    cells= env->GetDoubleArrayElements(cells_jni,0)[0];
    }
  }
void peano::integration::cca::ports::grid::GridToJNIPortImplementation::getMaximumMeshWidth(const long long& dimension, double& h){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/grid/Grid;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/integration/cca/ports/grid/Grid;");
  jmethodID mid = env->GetMethodID(cls,"getMaximumMeshWidth",
  "(J[D)V");
  if(mid){
    jlong dimension_jni=dimension;
    jdoubleArray h_jni=env->NewDoubleArray(1);
    jdouble h_temp[1];
    h_temp[0]=h;
    env->SetDoubleArrayRegion(h_jni,0,1,h_temp);
    env->CallVoidMethod(obj,mid,dimension_jni,h_jni);
    h= env->GetDoubleArrayElements(h_jni,0)[0];
    }
  }
void peano::integration::cca::ports::grid::GridToJNIPortImplementation::getMinimumMeshWidth(const long long& dimension, double& h){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/grid/Grid;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/integration/cca/ports/grid/Grid;");
  jmethodID mid = env->GetMethodID(cls,"getMinimumMeshWidth",
  "(J[D)V");
  if(mid){
    jlong dimension_jni=dimension;
    jdoubleArray h_jni=env->NewDoubleArray(1);
    jdouble h_temp[1];
    h_temp[0]=h;
    env->SetDoubleArrayRegion(h_jni,0,1,h_temp);
    env->CallVoidMethod(obj,mid,dimension_jni,h_jni);
    h= env->GetDoubleArrayElements(h_jni,0)[0];
    }
  }
