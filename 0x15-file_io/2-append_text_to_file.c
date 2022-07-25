#include "main.h"
/**
* append_text_to_file - Entry point
* Description - A function that appends text at the end of a file
* *@createdfile: the function accepts an input saved into filename
* *@text_content: letters is the number of letters it should read and print
* Return: Success (1)
*/

int append_text_to_file(const char *createdfile, char *text_content)
{
	int toOpen, toWrite;
	int contentLen = 0;

	if (createdfile == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[contentLen] != '\0')
			contentLen++;
	}

	/* Opening of the file */
	toOpen = open(createdfile, O_WRONLY | O_APPEND);

	/* To check if there is an error of some sort */
	if (toOpen == -1)
		return (-1);

	/* Writing the already read file */
	toWrite = write(toOpen, text_content, contentLen);

	/* To check if there is an error of some sort */
	if (toWrite == -1)
		return (-1);

	close(toOpen);

	return (1);
}
