﻿# CMakeList.txt: проект CMake для LAB-2 (4); включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("LAB-2 (4)")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeTarget "LAB-2 (4).cpp" "LAB-2 (4).h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
