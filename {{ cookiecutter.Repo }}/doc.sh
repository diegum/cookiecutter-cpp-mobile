#!/bin/sh
# Copyright (c) {{ cookiecutter.Year }}-present, {{ cookiecutter.Copyright_holder }}.
# All rights reserved.

doxygen docs/doxygen.cfg

if [[ $? -eq 0 ]]
then
    echo "\nOpen docs/html/index.html to see the results."
fi
