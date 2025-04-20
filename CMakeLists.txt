cmake_minimum_required(VERSION 3.30)
project(PriorityOperations)

set(CMAKE_CXX_STANDARD 20)

add_executable(PriorityOperations main.cpp
        Head/C1/Factorial.h
        Head/C1/StrLen.h
        Head/C1/ArrCnt.h
        Head/C1/Swap.h
        Head/C2/ArrPtr.h
        Head/C2/DynArr.h
        Head/C2/CpArrPtr.h
)
