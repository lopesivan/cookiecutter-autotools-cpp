# Process this file with autoconf to produce a configure script.
AC_INIT([{{ cookiecutter.package_name }}], [{{ cookiecutter.version }}], [{{ cookiecutter.__bug_report}}],
[{{ cookiecutter.package_name }}], [{{ cookiecutter.__site }}])

# Initialize Automake
AM_INIT_AUTOMAKE

# AM stands for Automake commands, AC stands for Autoconf commands
# We use libraries
AC_PROG_RANLIB
# Let's check for a C++ compiler
AC_LANG(C++)
# Let's set a C++ compiler
AC_PROG_CXX
# Let's specify where the Makefiles should be produced.

# These are the same locations as your Makefile.in's, but named as Makefile only
# We need to do this because both Autoconf and Automake read this file and
# produce Makefiles from this list.
AC_CONFIG_FILES([Makefile
                 {{ cookiecutter.feature }}/Makefile
                 {{ cookiecutter.src }}/Makefile])
# Finally produce "configure" script
AC_OUTPUT
