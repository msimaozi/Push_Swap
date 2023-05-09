
#include "push_swap.h"

void	paB(t_data *data)
{
	int	i;
	int	j;

	data->orded.a.size++;	
	j = data->orded.a.size - 1;
	while (data->orded.a.size != 1 && j >= 0)
	{
		data->orded.a.stack[j] = data->orded.a.stack[j - 1];
		j--;
	}
	data->orded.a.stack[0] = data->orded.b.stack[0];
	i = 0;
	while (i < data->orded.b.size - 1)
	{
		data->orded.b.stack[i] = data->orded.b.stack[i + 1];
		i++;
	}
	data->orded.b.size--;
	ft_putstr_fd("pa\n", 1);
}

void	pbB(t_data *data)
{
	int	i;
	int	j;

	data->orded.b.size++;	
	j = data->orded.b.size - 1;
	while (data->orded.b.size != 1 && j >= 0)
	{
		data->orded.b.stack[j] = data->orded.b.stack[j - 1];
		j--;
	}
	data->orded.b.stack[0] = data->orded.a.stack[0];
	i = 0;
	while (i < data->orded.a.size - 1)
	{
		data->orded.a.stack[i] = data->orded.a.stack[i + 1];
		i++;
	}
	data->orded.a.size--;
	ft_putstr_fd("pb\n", 1);
}

void	raB(t_data *data)
{
	int	i;
	int	temp;

	i = 0;
	temp = data->orded.a.stack[0];
	while (i < data->orded.a.size - 1)
	{
		data->orded.a.stack[i] = data->orded.a.stack[i + 1];
		i++;
	}
	data->orded.a.stack[data->orded.a.size - 1] = temp;
	ft_putstr_fd("ra\n", 1);
}