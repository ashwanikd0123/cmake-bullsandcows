# CMAKE: Simple Bulls And Cows Game 
## Dir structure
```
\include
    \bullsandcows.h
    \utils.h
\main
    \main.cpp
\utils
    \utils.cpp
    \bullsandcows.cpp
CMakeLists.txt
```

## Steps to build

### 1. Create a new folder build
```
mkdir build
cd build
```

### 2. Run CMake
```
cmake ..
```

### 3. Build the final solution
```
cmake --build .
```

### 4. Run Built file (/build/Debug)
```
./Debug/BullsAndCows.exe
```