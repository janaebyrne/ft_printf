static size_t	print_ptr(unsigned long int num)
{
	size_t	output;

	output = 0;
	if (num == 0)
		return (print_str("(nil)"));
	else
	{
		output += print_str("0x");
		output += print_nbr_hex(num, "0123456789abcdef", 16);
	}
	return (output);
}
