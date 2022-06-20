#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: character pointer
 * @needle: character argument
 * Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *ret = strstr(haystack, needle);

	return (ret);
}
