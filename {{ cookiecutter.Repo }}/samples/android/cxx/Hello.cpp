/*
 * Copyright (c) {{ cookiecutter.Year }}-present, {{ cookiecutter.Copyright_holder }}.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "{{ cookiecutter.Library_name }}/hello.h"
#include <jni.h>
#include <type_traits>

static jstring getHelloString(JNIEnv *env, jobject obj) {
  hello_string hello;
  const std::string str = hello.get_string();
  return env->NewStringUTF(str.c_str());
}

extern "C" JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *reserved) {
  JNIEnv *env(nullptr);
  if (JNI_OK != vm->GetEnv(reinterpret_cast<void **>(&env), JNI_VERSION_1_6)) {
    return JNI_ERR;
  }

  jclass helloClass =
      env->FindClass("com/diegum/{{ cookiecutter.Library_name }}app/Hello");
  JNINativeMethod methods[] = {
      {"getHelloString", "()Ljava/lang/String;", (void *)getHelloString},
  };

  if (JNI_OK != env->RegisterNatives(helloClass, methods,
                                     std::extent<decltype(methods)>::value)) {
    return JNI_ERR;
  }
  return JNI_VERSION_1_6;
}
