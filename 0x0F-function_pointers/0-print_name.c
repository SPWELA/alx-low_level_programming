#include "function_pointers.h"
/**
* print_name - Entry point
* Description - A function that prints a name
* *@name: the function accepts an input saved into name
* *@f: the function accepts an input saved into f
* Return: Success(0)
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
