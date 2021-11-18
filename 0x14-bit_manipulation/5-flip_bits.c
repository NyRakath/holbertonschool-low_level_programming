/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: integer
 * @m: integer
 * Return: the number of bits you would need to flip to get from one
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int set_num;
	unsigned int count_acc = 0;

	for (set_num = n ^ m; set_num != 0; set_num = set_num >> 1)
	{
		count_acc += (set_num & 1);
	}
	return (count_acc);
}
