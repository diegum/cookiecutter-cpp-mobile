#!/bin/sh
# Copyright (c) {{ cookiecutter.Year }}-present, {{ cookiecutter.Copyright_holder }}.
# All rights reserved.

cppcheck --language=c++ --std=c++14 --enable=all --inline-suppr src
