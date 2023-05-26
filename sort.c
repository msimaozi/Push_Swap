/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:23:47 by msimaozi          #+#    #+#             */
/*   Updated: 2023/05/09 11:23:48 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_data *data, int argc)
{
	if (argc == 2)
		if (data->original.a.stack[0] > data->original.a.stack[1])
			sa(data);
	if (argc == 3)
		sort_3(data);
	if (argc == 5)
		sort_5(data);
	if (argc > 5)
	{
		organize(data, argc);
		get_nums_radix(data);
		sort_big(data);
	}
}

void	sort_3(t_data *data)
{
	int	*s;

	s = data->original.a.stack;
	if (sorted(data) == 0)
	{
		if (s[0] > s[1] && s[1] < s[2] && s[2] > s[0])
			sa(data);
		else if (s[0] > s[1] && s[1] < s[2] && s[2] < s[0])
			ra(data);
		else if (s[0] > s[1] && s[1] > s[2] && s[2] < s[0])
		{
			sa(data);
			rra(data);
		}
		else if (s[0] < s[1] && s[1] > s[2] && s[2] > s[0])
		{
			sa(data);
			ra(data);
		}
		else if (s[0] < s[1] && s[1] > s[2] && s[2] < s[0])
			rra(data);
	}
}

void	sort_5(t_data *data)
{
	int	*a;
	int	i;
	int	max;
	int	min;

	a = data->original.a.stack;
	i = 0;
	max = find_max(data);
	min = find_min(data);
	while (i < data->original.a.size + 1)
	{
		if (a[0] == min)
			pb(data);
		else if (a[0] == max)
			pb(data);
		else
			ra(data);
		i++;
	}
	sort_3(data);
	if (data->original.b.stack[0] < max)
		sb(data);
	pa(data);
	ra(data);
	pa(data);
}
