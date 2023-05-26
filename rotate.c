/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:23:24 by msimaozi          #+#    #+#             */
/*   Updated: 2023/05/09 11:23:25 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//ra, coloca o primeiro numero em ultimo no stack a

void	ra(t_data *data)
{
	int	i;
	int	temp;

	i = 0;
	temp = data->original.a.stack[0];
	while (i < data->original.a.size - 1)
	{
		data->original.a.stack[i] = data->original.a.stack[i + 1];
		i++;
	}
	data->original.a.stack[data->original.a.size - 1] = temp;
	ft_putstr_fd("ra\n", 1);
}

//rb, coloca o primeiro numero em ultimo no stack b

void	rb(t_data *data)
{
	int	i;
	int	temp;

	i = 0;
	temp = data->original.b.stack[0];
	while (i < data->original.a.size - 1)
	{
		data->original.b.stack[i] = data->original.b.stack[i + 1];
		i++;
	}
	data->original.b.stack[data->original.a.size] = temp;
	ft_putstr_fd("rb\n", 1);
}

//rr, faz ra e rb

void	rr(t_data *data)
{
	ra(data);
	rb(data);
	ft_putstr_fd("rr\n", 1);
}
