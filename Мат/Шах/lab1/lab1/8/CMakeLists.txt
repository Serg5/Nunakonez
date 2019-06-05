# CMakeList.txt: проект CMake для CMakeProject1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("lb1")
# Добавьте источник в исполняемый файл этого проекта.
add_library (lb1_8_lib STATIC "../task7_func.c")
target_include_directories(lb1_8_lib PUBLIC "../task7_func.c")
 
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
