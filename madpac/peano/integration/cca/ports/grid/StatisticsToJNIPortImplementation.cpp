#include "peano/integration/cca/ports/grid/StatisticsToJNIPortImplementation.h"

peano::integration::cca::ports::grid::StatisticsToJNIPortImplementation::StatisticsToJNIPortImplementation(JavaVM* jvm,jobject& obj,const std::string& portIdentifier):
  _jvm(jvm),
  _obj(obj),
  _portIdentifier(portIdentifier){
  
}

peano::integration::cca::ports::grid::StatisticsToJNIPortImplementation::~StatisticsToJNIPortImplementation() {
  
}


void peano::integration::cca::ports::grid::StatisticsToJNIPortImplementation::addAdapterRuntime(const std::string& adapterName, const long long& numberOfAdapterRuns, const double& CPUTime, const double& calendarTime){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/grid/Statistics;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/integration/cca/ports/grid/Statistics;");
  jmethodID mid = env->GetMethodID(cls,"addAdapterRuntime",
  "(Ljava/lang/String;JDD)V");
  if(mid){
    jstring adapterName_jni=env->NewStringUTF(adapterName.c_str());
    jlong numberOfAdapterRuns_jni=numberOfAdapterRuns;
    jdouble CPUTime_jni=CPUTime;
    jdouble calendarTime_jni=calendarTime;
    env->CallVoidMethod(obj,mid,adapterName_jni,numberOfAdapterRuns_jni,CPUTime_jni,calendarTime_jni);
    }
  }
void peano::integration::cca::ports::grid::StatisticsToJNIPortImplementation::setMemoryFootprint(const long long& bytesPerCell, const long long& bytesPerVertex, const long long& bytesPerPersistentCell, const long long& bytesPerPersistentVertex, const long long& bytesPerState){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/grid/Statistics;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/integration/cca/ports/grid/Statistics;");
  jmethodID mid = env->GetMethodID(cls,"setMemoryFootprint",
  "(JJJJJ)V");
  if(mid){
    jlong bytesPerCell_jni=bytesPerCell;
    jlong bytesPerVertex_jni=bytesPerVertex;
    jlong bytesPerPersistentCell_jni=bytesPerPersistentCell;
    jlong bytesPerPersistentVertex_jni=bytesPerPersistentVertex;
    jlong bytesPerState_jni=bytesPerState;
    env->CallVoidMethod(obj,mid,bytesPerCell_jni,bytesPerVertex_jni,bytesPerPersistentCell_jni,bytesPerPersistentVertex_jni,bytesPerState_jni);
    }
  }
