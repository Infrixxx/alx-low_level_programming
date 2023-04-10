#include <unistd.h> 
 
/** 
 * _putchar - writes the character c to stdout(1)
 * @c: The character to be printed 
 * 
 * Return: 1 sucess. 
 * error, -1 is returned, and errno is set appropriately. 
 */ 
int _putchar(char c) 
{ 
 return (write(1, &c, 1)); 
} 
