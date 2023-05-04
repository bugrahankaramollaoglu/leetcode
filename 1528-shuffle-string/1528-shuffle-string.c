#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *restoreString(char *s, int *indices, int indicesSize)
{
	char *s2 = malloc(sizeof(char) * strlen(s) + 1);
	int i = 0;
	if (!s2)
		return 0;
	for (i = 0; i < strlen(s); i++)
	{
		s2[indices[i]] = s[i];
	}
	s2[i] = '\0';
	return s2;
}