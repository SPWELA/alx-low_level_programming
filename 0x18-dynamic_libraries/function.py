#!/usr/bin/python3
from ctypes import *
so_file = "/alx-low_level_programming/0x18-dynamic_libraries/100-operations.so"
my_functions = CDLL(so_file)

print(type(my_functions))
print(my_functions.square(10)
        print("Done")
