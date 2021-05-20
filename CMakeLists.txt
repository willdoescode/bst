cmake_minimum_required(VERSION 3.20.2)

project(bst C)

aux_source_directory(src/ SRC_LIST)
add_executable(bst ${SRC_LIST})
