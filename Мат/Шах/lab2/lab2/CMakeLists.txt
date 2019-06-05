# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("lb2")
add_executable (lb2 "lb2.c" "task1.c" "task2.c")
# Включите подпроекты.

