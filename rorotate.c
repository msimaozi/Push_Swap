/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rorotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:22:51 by msimaozi          #+#    #+#             */
/*   Updated: 2023/05/09 11:22:55 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//rra, o ultimo numero vai para primeiro lugar no stack a

void	rra(t_data *data)
{
	int	temp;
	int	i;

	temp = data->original.a.stack[data->original.a.size - 1];
	i = data->original.a.size;
	while (i >= 0)
	{
		data->original.a.stack[i] = data->original.a.stack[i - 1];
		i--;
	}
	data->original.a.stack[0] = temp;
	ft_putstr_fd("rra\n", 1);
}

//rrb, o ultimo numero vai para primeiro lugar no stack b

void	rrb(t_data *data)
{
	int	temp;
	int	i;

	temp = data->original.b.stack[data->original.a.size - 1];
	i = data->original.b.size;
	while (i >= 0)
	{
		data->original.b.stack[i] = data->original.b.stack[i - 1];
		i--;
	}
	data->original.b.stack[0] = temp;
	ft_putstr_fd("rrb\n", 1);
}

//rrr faz o rra e o rrb

void	rrr(t_data *data)
{
	rra(data);
	rrb(data);
	ft_putstr_fd("rrr\n", 1);
}
