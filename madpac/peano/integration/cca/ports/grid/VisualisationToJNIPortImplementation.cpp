#include "peano/integration/cca/ports/grid/VisualisationToJNIPortImplementation.h"

peano::integration::cca::ports::grid::VisualisationToJNIPortImplementation::VisualisationToJNIPortImplementation(JavaVM* jvm,jobject& obj,const std::string& portIdentifier):
  _jvm(jvm),
  _obj(obj),
  _portIdentifier(portIdentifier){
  
}

peano::integration::cca::ports::grid::VisualisationToJNIPortImplementation::~VisualisationToJNIPortImplementation() {
  
}


void peano::integration::cca::ports::grid::VisualisationToJNIPortImplementation::addGridCell(const long long& dimension, const double* x,long x_len, const double* h,long h_len, const long long& level){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/grid/Visualisation;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/integration/cca/ports/grid/Visualisation;");
  jmethodID mid = env->GetMethodID(cls,"addGridCell",
  "(J[D[DJ)V");
  if(mid){
    jlong dimension_jni=dimension;
    jdoubleArray x_jni=env->NewDoubleArray(x_len);
    env->SetDoubleArrayRegion(x_jni,0,x_len,(jdouble*)x);
  jdoubleArray h_jni=env->NewDoubleArray(h_len);
  env->SetDoubleArrayRegion(h_jni,0,h_len,(jdouble*)h);
jlong level_jni=level;
env->CallVoidMethod(obj,mid,dimension_jni,x_jni,h_jni,level_jni);
}
}
void peano::integration::cca::ports::grid::VisualisationToJNIPortImplementation::addGridVertex(const long long& dimension, const double* x,long x_len, const long long& level){
JNIEnv* env;
_jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/grid/Visualisation;");
jobject obj= env->GetObjectField(_obj,pid);
jclass cls = env->FindClass("Lpeano/integration/cca/ports/grid/Visualisation;");
jmethodID mid = env->GetMethodID(cls,"addGridVertex",
"(J[DJ)V");
if(mid){
jlong dimension_jni=dimension;
jdoubleArray x_jni=env->NewDoubleArray(x_len);
env->SetDoubleArrayRegion(x_jni,0,x_len,(jdouble*)x);
jlong level_jni=level;
env->CallVoidMethod(obj,mid,dimension_jni,x_jni,level_jni);
}
}
