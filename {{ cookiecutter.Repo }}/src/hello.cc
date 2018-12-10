/*
 * Copyright (c) {{ cookiecutter.Year }}-present, {{ cookiecutter.Copyright_holder }}.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "hello.h"
#include <iostream>

const std::string hello_string::HELLO = "Hello from C++ lib!!";

hello_string::hello_string(){};

const std::string hello_string::get_string() { return (HELLO); }
