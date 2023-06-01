/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:23:40 by msimaozi          #+#    #+#             */
/*   Updated: 2023/06/01 19:28:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->original.a.size)
	{
		if (data->original.a.stack[i] > data->original.a.stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}
