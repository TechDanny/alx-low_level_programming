void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
void print_float(va_list args)
{
        printf("%d", va_arg(args, float));
}

void print_str(va_list args)
{	char *str;

        printf("%s", va_arg(args, char *));
	if (str == NULL)
	{
		printf("(nil)");
	}
}
void print_all(const char * const format, ...)
{
	void *all_print;
	va_list args;

	all_print[p] = {
			{"c", print_char},
			{"i", print_int},
			{"f", print_float},
			{"s", print_str},
			{NULL}
	};
	va_start(args, format);
	while (*format != '



