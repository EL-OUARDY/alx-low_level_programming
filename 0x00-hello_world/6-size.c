#include <stdio.h>
/**
* main - the entry point of the program
* @void: we do not have any args
*
* Description: all program logic goes inside main function
* Display the size of various types
* Return: nothing! - 0 as a retcode
*/
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
