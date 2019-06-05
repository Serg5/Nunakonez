# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("do_while")

# Включите подпроекты.
add_executable (do_while "do_while.c" "nom1.c" "nom2.c" "nom3.c" "nom4.c" "nom5.c")
