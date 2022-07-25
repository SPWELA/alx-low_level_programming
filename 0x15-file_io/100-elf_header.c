#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include "elfhead.h"

/**
 * main - Main entry
 * Description: A program that copies the content of a file to another file
 * @argc: The arguments count
 * @argv: The list of arguments
 * Return: 0 as success
 */

int main(int argc, char **argv)
{
	int elf_header,elf_filename, to_write, close_from, close_to;
	int length = 1024;
	char buf[1024];

	if (file == ELF)
	{
		dprintf(STDERR_FILENO, "%s\n", "stderr");
		exit(98);
	}

	elf_filename= open(argv[1], O_RDONLY);
	elf_header = open(argv[2], O_RDONLY);
	print_error(file_from, file_to, argv);


