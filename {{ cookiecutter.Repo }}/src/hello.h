/*
 * Copyright (c) {{ cookiecutter.Year }}-present, {{ cookiecutter.Copyright_holder }}.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <string>

class hello_string {

private:
  static const std::string HELLO;

public:
  hello_string();

  const std::string get_string();
};
