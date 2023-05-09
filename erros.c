
#include "push_swap.h"

void	error_msg(t_data *data)
{
	ft_putstr_fd("Error\n", 1);
	free(data);
	exit(1);
}

void	p_arg(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->orded.a.size)
	{
		printf("A:%d\n", data->orded.a.stack[i]);
		i++;
	}
}

void	p_argb(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->orded.a.size)
	{
		printf("B:%d\n", data->orded.a.stack[i]);
		i++;
	}
}