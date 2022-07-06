#include <stdio.h>
#include <stdlib.h>
/**
* op_add - Entry point
* Description - Addition operator
* *@a: the function accepts an input saved into a
* *@b: the function accepts an input saved into b
* Return: Success (0)
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - Entry point
* Description - Subtraction operator
* *@a: the function accepts an input saved into a
* *@b: the function accepts an input saved into b
* Return: Success (0)
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - Entry point
* Description - Multiplication operator
* *@a: the function accepts an input saved into a
* *@b: the function accepts an input saved into b
* Return: Success (0)
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - Entry point
* Description - Division operator
* *@a: the function accepts an input saved into a
* *@b: the function accepts an input saved into b
* Return: Success (0)
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
* op_mod - Entry point
* Description - Remainder operator
* *@a: the function accepts an input saved into a
* *@b: the function accepts an input saved into b
* Return: Success (0)
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
