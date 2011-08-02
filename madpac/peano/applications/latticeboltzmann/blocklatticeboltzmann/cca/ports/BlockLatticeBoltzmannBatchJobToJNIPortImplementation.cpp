#include "peano/applications/latticeboltzmann/blocklatticeboltzmann/cca/ports/BlockLatticeBoltzmannBatchJobToJNIPortImplementation.h"

peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToJNIPortImplementation::BlockLatticeBoltzmannBatchJobToJNIPortImplementation(JavaVM* jvm,jobject& obj,const std::string& portIdentifier):
  _jvm(jvm),
  _obj(obj),
  _portIdentifier(portIdentifier){
  
}

peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToJNIPortImplementation::~BlockLatticeBoltzmannBatchJobToJNIPortImplementation() {
  
}


void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToJNIPortImplementation::switchToRegularBlockSolverAdapter(){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/applications/latticeboltzmann/blocklatticeboltzmann/cca/ports/BlockLatticeBoltzmannBatchJob;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/applications/latticeboltzmann/blocklatticeboltzmann/cca/ports/BlockLatticeBoltzmannBatchJob;");
  jmethodID mid = env->GetMethodID(cls,"switchToRegularBlockSolverAdapter",
  "()V");
  if(mid){
    env->CallVoidMethod(obj,mid);
    }
  }
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToJNIPortImplementation::switchToBlockVTKOutputAdapter(){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/applications/latticeboltzmann/blocklatticeboltzmann/cca/ports/BlockLatticeBoltzmannBatchJob;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/applications/latticeboltzmann/blocklatticeboltzmann/cca/ports/BlockLatticeBoltzmannBatchJob;");
  jmethodID mid = env->GetMethodID(cls,"switchToBlockVTKOutputAdapter",
  "()V");
  if(mid){
    env->CallVoidMethod(obj,mid);
    }
  }
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToJNIPortImplementation::switchToRegularBlockSolverAndVTKOutputAdapter(){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/applications/latticeboltzmann/blocklatticeboltzmann/cca/ports/BlockLatticeBoltzmannBatchJob;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/applications/latticeboltzmann/blocklatticeboltzmann/cca/ports/BlockLatticeBoltzmannBatchJob;");
  jmethodID mid = env->GetMethodID(cls,"switchToRegularBlockSolverAndVTKOutputAdapter",
  "()V");
  if(mid){
    env->CallVoidMethod(obj,mid);
    }
  }
void peano::applications::latticeboltzmann::blocklatticeboltzmann::cca::ports::BlockLatticeBoltzmannBatchJobToJNIPortImplementation::iterate(){
  JNIEnv* env;
  _jvm->GetEnv((void**)&env,JNI_VERSION_1_6);
  jfieldID pid =env->GetFieldID(env->GetObjectClass(_obj), _portIdentifier.c_str(), "Lpeano/applications/latticeboltzmann/blocklatticeboltzmann/cca/ports/BlockLatticeBoltzmannBatchJob;");
  jobject obj= env->GetObjectField(_obj,pid);
  jclass cls = env->FindClass("Lpeano/applications/latticeboltzmann/blocklatticeboltzmann/cca/ports/BlockLatticeBoltzmannBatchJob;");
  jmethodID mid = env->GetMethodID(cls,"iterate",
  "()V");
  if(mid){
    env->CallVoidMethod(obj,mid);
    }
  }
