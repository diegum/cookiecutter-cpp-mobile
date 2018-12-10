/*
 * Copyright (c) {{ cookiecutter.Year }}-present, {{ cookiecutter.Copyright_holder }}.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "{{ cookiecutter.Library_name }}/hello.h"
#include <iostream>

int main() {
  hello_string hello;
  std::cout << hello.get_string() << std::endl;

  return (0);
}
