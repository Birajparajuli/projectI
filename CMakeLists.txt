cmake_minimum_required(VERSION 3.15)
project(projectI C)

set(CMAKE_C_STANDARD 99)

#add_executable(projectI main.c login.c admin.c newbooking.c welcomescreen.c)
#add_executable(projectI newbooking.c)
add_executable(projectI welcomescreen.c)