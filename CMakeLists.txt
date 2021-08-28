cmake_minimum_required(VERSION 3.20)
project(Projects C)

set(CMAKE_C_STANDARD 99)

add_library(Projects library.c whats-poppin.c Pointers.c Structures.c bit-fields.c Memory-Management.c System-Calls.c Networking.c Server_From_Scratch.c)
