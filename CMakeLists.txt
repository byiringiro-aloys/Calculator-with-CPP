cmake_minimum_required(VERSION 3.16)
project(QtCalculator LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Prefer Qt6 if available, fall back to Qt5
find_package(Qt6 COMPONENTS Widgets OPTIONAL_COMPONENTS)
set(CMAKE_AUTOMOC ON)
if (Qt6_FOUND)
  message(STATUS "Using Qt6")
  set(QT_LIBS Qt6::Widgets)
else()
  find_package(Qt5 COMPONENTS Widgets REQUIRED)
  message(STATUS "Using Qt5")
  set(QT_LIBS Qt5::Widgets)
endif()

add_executable(calculator
    src/main.cpp
    src/calculator.cpp
)

target_include_directories(calculator PRIVATE src)
target_link_libraries(calculator PRIVATE ${QT_LIBS})