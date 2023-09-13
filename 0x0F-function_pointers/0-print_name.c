
/**
 * print_name - what's my name
 * @name: input string
 * @f: function pointer
 * Description: print the @name using the passed function @f
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
