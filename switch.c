/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:23:54 by msimaozi          #+#    #+#             */
/*   Updated: 2023/05/09 11:23:54 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa, troca o primeiro e segundo membros do stack a

void	sa(t_data *data)
{
	int	temp;

	temp = data->original.a.stack[0];
	data->original.a.stack[0] = data->original.a.stack[1];
	data->original.a.stack[1] = temp;
	ft_putstr_fd("sa\n", 1);
}

//sb, troca o primeiro e segundo membros do stack b

void	sb(t_data *data)
{
	int	temp;

	temp = data->original.b.stack[0];
	data->original.b.stack[0] = data->original.b.stack[1];
	data->original.b.stack[1] = temp;
	ft_putstr_fd("sb\n", 1);
}

//ss, faz sa e sb

void	ss(t_data *data)
{
	sa(data);
	sb(data);
	ft_putstr_fd("ss", 1);
}
