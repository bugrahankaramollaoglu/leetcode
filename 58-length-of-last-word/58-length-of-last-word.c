/* int lengthOfLastWord(char *s)
{
	int i = 0;
	int len = 0;
	while (s[len])
		len++;
	len--;
	while (s[len] == ' ')
		len--;
	while (len >= 0 && s[len] != ' ')
	{
		len--;
		i++;
	}
	return i;
} */

int lengthOfLastWord(char *s)
{
	int i = 0;
	int len = strlen(s) - 1;
	while (len >= 0 && s[len] == ' ')
		len--;
	while (len >= 0 && s[len] != ' ')
	{
		len--;
		i++;
	}
	return i;
}