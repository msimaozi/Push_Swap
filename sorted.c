/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:23:40 by msimaozi          #+#    #+#             */
/*   Updated: 2023/05/09 11:23:42 by msimaozi         ###   ########.fr       */
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
