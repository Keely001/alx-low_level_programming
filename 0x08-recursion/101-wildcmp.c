#include "main.h"
int new_wildcmp(char *s1, int i,char *s2, int j);
int wildcmp(char *s1, char *s2)
{
	if ((*s1 == *s2) && *s1 == "")
	{
		return (0);
	return (new_wildcmp(s1, 0, s2, 0));
}

int new_wildcmp(char *s1, int i,char *s2, int j)
{
	if (*(s1 + i) == *(s2 + j) && *(s1 + i) != '\0')
		return (new_wildcmp(*s1, i + 1, *s2, j + 1));
	if (*(s2 + j) == '*' && )
		return (new_wildcmp(*s1, i, *s2, j + 1));
	if(*(s2 + j) == 

