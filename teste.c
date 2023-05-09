
#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *str, size_t n)
{
	char		*str1;
	size_t		x;

	x = 0;
	str1 = (char *)str;
	while (x < n)
	{
		str1[x] = '\0';
		x++;
	}
}

void	*ft_calloc(size_t n, size_t s)
{
	char	*ptr;

	ptr = malloc(n * s);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, n * s);
	return (ptr);
}

int	ft_atoi(char *str)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = 0;
	z = 1;
	while (str[x] == 32 || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-')
		z = z * -1;
	if (str[x] == '-' || str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		y = (y * 10) + (str[x] - '0');
		x++;
	}
	return (y * z);
}

int	elementos(int *array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

int	final_position(int *x)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < elementos(x))
	{
		j = 0;
		while (j < elementos(x))
		{
			if (x[j] < x[i])
				k++;
			j++;
		}
		i++;
	}
	return (k);
}
int main(int argc, char **argv)
{
    int *x;
	int	*y;
	int *w;
    int i;
    int j;

    x = ft_calloc(argc, sizeof(int));
    y = ft_calloc(argc, sizeof(int));
	w = ft_calloc(argc, sizeof(int));
    i = 1;
    j = 0;
    while (j < argc && argv[i])
    {
        x[j] = ft_atoi(argv[i]);
        j++;
		i++;
    }
    i = 0;
	while (i < elementos(x))
	{
		w[i] = final_position(x);
		printf("%d\n", w[i]);
		i++;
	}
}