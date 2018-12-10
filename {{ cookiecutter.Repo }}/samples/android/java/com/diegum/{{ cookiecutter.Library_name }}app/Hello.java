/*
 * Copyright (c) {{ cookiecutter.Year }}-present, {{ cookiecutter.Copyright_holder }}.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

package com.diegum.{{ cookiecutter.Library_name }}app;

public class Hello {
  public Hello() {
    System.loadLibrary("{{ cookiecutter.Library_name }}jni");
  }
  public native String getHelloString();
}
