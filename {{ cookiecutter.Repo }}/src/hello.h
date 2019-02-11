/*
 * Copyright (c) {{ cookiecutter.Year }}-present, {{ cookiecutter.Copyright_holder }}.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifndef HELLO_H
#define HELLO_H

/**
 * @mainpage {{ cookiecutter.Library_name }}
 *
 * Enter your welcome-message and description to this library Javadoc.
 *
 * Something to expand on this notion:
 * {{ cookiecutter.Brief_description }}.
 */

#include <string>

/**
 * This class generates salutation strings.
 */
class hello_string
{

private:
  static const std::string HELLO;

public:
  /**
   * Default constructor.
   */
  hello_string();

  /**
   * Generates a salutation string.
   *
   * @return     A salutation string.
   */
  const std::string get_string() const;
};

#endif // HELLO_H
