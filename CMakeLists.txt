cmake_minimum_required(VERSION 3.30)
project(PriorityOperations)

set(CMAKE_CXX_STANDARD 20)

add_executable(PriorityOperations main.cpp
        Head/C1/Factorial.h
        Head/C1/OwnStrLen.h
        Head/C1/ArrayCount.h
        Head/C1/Swap.h
        Head/C2/PointerArray.h
        Head/C2/DynamicArray.h
        Head/C2/ArrayCopy.h
        Head/C3/Struct.h
        Head/Class/Rectangle.h
        Head/C3/ElementCounter.h
        Head/ExectFunction/ExecutionFunction.h
        Head/ExectFunction/SideMethods/Case1.h
        Head/ExectFunction/SideMethods/Case4.h
        Head/ExectFunction/SideMethods/Case5.h
        Head/ExectFunction/SideMethods/Case7.h
        Head/ExectFunction/SideMethods/Case9.h
)
