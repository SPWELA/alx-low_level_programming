#include "function_pointers.h"
/**
* array_iterator - Entry point
* Description - A function that executes a function given
* as a parameter on each element of an array
* *@array: the function accepts an input saved into array
* *@size: the function accepts an input saved into size
* *@action: the function accepts an input saved into action
* Return: Success(0)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
action(array[i]);
}
