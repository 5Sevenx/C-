cmake_minimum_required(VERSION 3.30)
project(PriorityOperations)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_SOURCE_DIR})

add_executable(PriorityOperations main.cpp
        Methods/C1/Factorial.h
        Methods/C1/OwnStrLen.h
        Methods/C1/ArrayCount.h
        Methods/C1/Swap.h
        Methods/C2/PointerArray.h
        Methods/C2/DynamicArray.h
        Methods/C2/ArrayCopy.h
        Methods/C3/Struct.h
        Methods/C3/ElementCounter.h
        Head/Class/Rectangle.h
        Head/ExectFunction/ExecutionFunction.h
        Methods/C4/SwapT&.h
        Head/Class/StackT.h
        Methods/C4/ExceptionStak.h
        Methods/C4/Stack.h
        Service/stack_input.h
        Service/touppercase.h
)
