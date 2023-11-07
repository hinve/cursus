int	main(void)
{
	int	count;
	int	countp;
	int	a;

	a = -3;
	countp = 0;
	count = 0;
	count += ft_printf(" %p \n", &a);
	ft_printf("Los carácteres que hay son: %d\n", count);
	countp += printf(" %p \n", &a);
	printf("Los carácteres que hay son: %d", countp);
}
