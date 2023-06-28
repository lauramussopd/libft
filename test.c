void	ft_change(int *p)
{
	*p = 7;
}

int main(void)
{
	int	i;

	i = 5;
	ft_change(&i);
	printf("%d\n", i);
}
