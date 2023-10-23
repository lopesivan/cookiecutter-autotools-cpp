#!/usr/bin/env sh

aclocal && autoconf && automake --{{ cookiecutter.feature_method }}-missing

exit 0
