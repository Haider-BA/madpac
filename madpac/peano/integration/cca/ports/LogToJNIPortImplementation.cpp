#include "peano/integration/cca/ports/LogToJNIPortImplementation.h"

peano::integration::cca::ports::LogToJNIPortImplementation::LogToJNIPortImplementation(JavaVM* jvm,jobject& obj,const std::string& portIdentifier):
  _jvm(jvm),
  _obj(obj),
  _portIdentifier(portIdentifier){
  
}

peano::integration::cca::ports::LogToJNIPortImplementation::~LogToJNIPortImplementation() {
  
}


void peano::integration::cca::ports::LogToJNIPortImplementation::debug(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/Log;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/integration/cca/ports/Log;");
  jmethodID mid = env->GetMethodID(cls,"debug",
  "(JJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  if(mid){
    jlong indentLevel_jni=indentLevel;
    jlong timeStamp_jni=timeStamp;
    jstring timeStampHumanReadable_jni=env->NewStringUTF(timeStampHumanReadable.c_str());
    jstring machine_jni=env->NewStringUTF(machine.c_str());
    jstring trace_jni=env->NewStringUTF(trace.c_str());
    jstring message_jni=env->NewStringUTF(message.c_str());
    env->CallVoidMethod(obj,mid,indentLevel_jni,timeStamp_jni,timeStampHumanReadable_jni,machine_jni,trace_jni,message_jni);
    }
  }
void peano::integration::cca::ports::LogToJNIPortImplementation::info(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/Log;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/integration/cca/ports/Log;");
  jmethodID mid = env->GetMethodID(cls,"info",
  "(JJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  if(mid){
    jlong indentLevel_jni=indentLevel;
    jlong timeStamp_jni=timeStamp;
    jstring timeStampHumanReadable_jni=env->NewStringUTF(timeStampHumanReadable.c_str());
    jstring machine_jni=env->NewStringUTF(machine.c_str());
    jstring trace_jni=env->NewStringUTF(trace.c_str());
    jstring message_jni=env->NewStringUTF(message.c_str());
    env->CallVoidMethod(obj,mid,indentLevel_jni,timeStamp_jni,timeStampHumanReadable_jni,machine_jni,trace_jni,message_jni);
    }
  }
void peano::integration::cca::ports::LogToJNIPortImplementation::warning(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/Log;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/integration/cca/ports/Log;");
  jmethodID mid = env->GetMethodID(cls,"warning",
  "(JJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  if(mid){
    jlong indentLevel_jni=indentLevel;
    jlong timeStamp_jni=timeStamp;
    jstring timeStampHumanReadable_jni=env->NewStringUTF(timeStampHumanReadable.c_str());
    jstring machine_jni=env->NewStringUTF(machine.c_str());
    jstring trace_jni=env->NewStringUTF(trace.c_str());
    jstring message_jni=env->NewStringUTF(message.c_str());
    env->CallVoidMethod(obj,mid,indentLevel_jni,timeStamp_jni,timeStampHumanReadable_jni,machine_jni,trace_jni,message_jni);
    }
  }
void peano::integration::cca::ports::LogToJNIPortImplementation::error(const long long& indentLevel, const long long& timeStamp, const std::string& timeStampHumanReadable, const std::string& machine, const std::string& trace, const std::string& message){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/integration/cca/ports/Log;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/integration/cca/ports/Log;");
  jmethodID mid = env->GetMethodID(cls,"error",
  "(JJLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
  if(mid){
    jlong indentLevel_jni=indentLevel;
    jlong timeStamp_jni=timeStamp;
    jstring timeStampHumanReadable_jni=env->NewStringUTF(timeStampHumanReadable.c_str());
    jstring machine_jni=env->NewStringUTF(machine.c_str());
    jstring trace_jni=env->NewStringUTF(trace.c_str());
    jstring message_jni=env->NewStringUTF(message.c_str());
    env->CallVoidMethod(obj,mid,indentLevel_jni,timeStamp_jni,timeStampHumanReadable_jni,machine_jni,trace_jni,message_jni);
    }
  }
