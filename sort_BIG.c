/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_BIG.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:23:32 by msimaozi          #+#    #+#             */
/*   Updated: 2023/05/09 11:23:33 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big(t_data *data)
{
	int	max_bits;
	int	num;
	int	i;
	int	j;

	max_bits = 0;
	num = data->orded.a.size;
	while ((num >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < num)
		{
			if (((data->orded.a.stack[0] >> i) & 1) == 1)
				rab(data);
			else
				pbb(data);
			j++;
		}
		while (data->orded.b.size != 0)
			pab(data);
		i++;
	}
}
