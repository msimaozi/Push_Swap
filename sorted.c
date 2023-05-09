/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:38:30 by msimaozi          #+#    #+#             */
/*   Updated: 2023/04/21 21:33:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->original.a.size - 1)
	{
		if (data->original.a.stack[i] > data->original.a.stack[i + 1])
			return (0);
		else
			i++;
	}
	return (1);
}