#include <stdio.h>

/*
 * Progrma to print th following:
 * Programming is like building a multilingual puzzle
 *
 */

int main(void)
{
	/*
	 * This function calls puts function
	 * to desplay a string value held in pointer text
	 *
	 */

	char *text = "\"Programming is like building a multilingual puzzle\0";

	puts(text);
	return (0);
}
