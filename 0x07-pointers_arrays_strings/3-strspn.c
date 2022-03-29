/**
* _strspn - Gets the length of a prefix substring.
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Length of occurrence.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *m = accept;

	while(*s++)
	{
		while (*accept++)
		{
			if (*(s-1) == *(accept -1))
			{
				n++;
				break;
			}
		}
		if (!(*--accept))
			break;
		accept = m;
	}
	return (n);
}
