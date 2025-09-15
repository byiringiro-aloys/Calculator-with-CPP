# Project: Qt C++ Calculator (Widgets)

This is a minimal, ready-to-build Qt Widgets calculator written in modern C++ (C++17). It provides a simple GUI with a display and buttons for digits, operators, parentheses, clear, backspace and equals. It uses a small shunting-yard + RPN evaluator so it doesn't rely on scripting engines.

Files included:
- CMakeLists.txt
- README.md
- src/main.cpp
- src/calculator.h
- src/calculator.cpp

# Qt C++ Calculator

## Requirements
- C++ compiler with C++17 support (g++ or clang)
- CMake >= 3.16
- Qt 6 (preferred) or Qt 5

On Debian/Ubuntu/Kali you can install Qt packages with:

```bash
sudo apt update
# For Qt6
sudo apt install -y qt6-base-dev cmake g++
# Or, if Qt6 packages aren't available, use Qt5
sudo apt install -y qtbase5-dev cmake g++
```

## Build
```bash
mkdir build && cd build
cmake ..
cmake --build . -- -j$(nproc)
# run
./calculator
```

If `cmake` fails to find Qt6 but you have Qt installed in a custom location, pass `-DCMAKE_PREFIX_PATH=/path/to/Qt/lib/cmake` to cmake.

## Notes
- This is a small educational project. The evaluator supports +, -, *, /, parentheses and unary minus.