/*
 * Copyright (c) {{ cookiecutter.Year }}-present, {{ cookiecutter.Copyright_holder }}.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this
                          // in one cpp file

#include "catch.hpp"

#include "{{ cookiecutter.Library_name }}/hello.h"

SCENARIO("Canary test", "[canary]") {
  GIVEN("a brand new mobile, cross-platform C++ library project") {
    hello_string hello;
    REQUIRE(std::string("Hello from C++ lib!!") == hello.get_string());
  }
}
