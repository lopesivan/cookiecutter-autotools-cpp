# Our binary is produced here
bin_PROGRAMS = {{ cookiecutter.main }}
{{ cookiecutter.main }}_SOURCES = {{ cookiecutter.main }}.cpp
# {{ cookiecutter.main }} binary will be installed into the default directory for "bin"s (hence we used the bin
# prefix
noinst_LIBRARIES = lib{{ cookiecutter.help_file_name }}.a
lib{{ cookiecutter.help_file_name }}_a_SOURCES = {{ cookiecutter.help_file_name }}.cpp
# noinst_ : assures that this library is not installed to the user's computer
# libBLAH.a is a *nix convention. If you noticed, we replaced the . with _ in SOURCES line.
{{ cookiecutter.main }}_LDADD = lib{{ cookiecutter.help_file_name }}.a ../{{ cookiecutter.feature }}/lib{{ cookiecutter.__feature_file_name }}.a
# LDADD specifies which libraries to compile into "{{ cookiecutter.main }}". We have two libraries. 
# lib{{ cookiecutter.help_file_name }} comes from this directory and lib{{ cookiecutter.__feature_file_name }} come from {{ cookiecutter.feature }} directory.
