#!/usr/bin/python3
from ctypes
import random
so_file = "./100-operations.so"
my_functions = ctypes.CDLL(so_file)

print(type(my_functions))
print(my_functions.square(10)
print("Done")
