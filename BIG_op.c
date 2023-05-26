/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BIG_op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:21:31 by msimaozi          #+#    #+#             */
/*   Updated: 2023/05/09 11:21:34 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pab(t_data *data)
{
	int	i;
	int	j;

	data->orded.a.size++;
	j = data->orded.a.size - 1;
	while (j > 0)
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

void	pbb(t_data *data)
{
	int	i;
	int	j;

	data->orded.b.size++;
	j = data->orded.b.size - 1;
	while (j > 0)
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

void	rab(t_data *data)
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
