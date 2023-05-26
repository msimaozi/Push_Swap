/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:22:17 by msimaozi          #+#    #+#             */
/*   Updated: 2023/05/09 11:22:17 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//pa, envia o primeiro do b para o primeiro do a

void	pa(t_data *data)
{
	int	i;
	int	j;

	data->original.a.size++;
	j = data->original.a.size - 1;
	while (j > 0)
	{
		data->original.a.stack[j] = data->original.a.stack[j - 1];
		j--;
	}
	data->original.a.stack[0] = data->original.b.stack[0];
	i = 0;
	while (i < data->original.b.size - 1)
	{
		data->original.b.stack[i] = data->original.b.stack[i + 1];
		i++;
	}
	data->original.b.size--;
	ft_putstr_fd("pa\n", 1);
}

//pb, envia o primeiro do a para o primeiro do b

void	pb(t_data *data)
{
	int	i;
	int	j;

	data->original.b.size++;
	j = data->original.b.size - 1;
	while (j > 0)
	{
		data->original.b.stack[j] = data->original.b.stack[j - 1];
		j--;
	}
	data->original.b.stack[0] = data->original.a.stack[0];
	i = 0;
	while (i < data->original.a.size - 1)
	{
		data->original.a.stack[i] = data->original.a.stack[i + 1];
		i++;
	}
	data->original.a.size--;
	ft_putstr_fd("pb\n", 1);
}
