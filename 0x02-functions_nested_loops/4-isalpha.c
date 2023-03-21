/*
 *Auth : BC Rachoshi
 *
 * 4-isalpha.c
 */

/*
 * _isalpha - checks for alphabetic character.
 *
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || 
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
