#include <iostream>
#include "{{ cookiecutter.help_file_name }}.h"
#include "../{{ cookiecutter.feature }}/{{ cookiecutter.feature_file_name }}.h"

int {{ cookiecutter.main }}() {
    {{ cookiecutter.feature_class_name }} {{ cookiecutter.feature_method }}_obj;
    std::cout << "Addition Result:"
              << {{ cookiecutter.feature_method }}_obj.{{ cookiecutter.feature_method }}(1,2)
              << std::endl;

    {{ cookiecutter.help_class_name }} h;
    h.{{ cookiecutter.help_method }}();
}
