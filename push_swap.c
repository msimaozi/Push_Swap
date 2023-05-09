/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:26:58 by msimaozi          #+#    #+#             */
/*   Updated: 2023/04/23 01:58:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;
	int	i;

	i = 1;
	if (argc < 2)
		return (0);
	else
	{
		data = malloc(sizeof(t_data));
		init(data, argc - 1);
		while (i < argc)
		{
			checknum(data, argv[i]);
			i++;
		}
		verify_dup(data, argc - 1, argv);
		send(data, argc - 1, argv);
		if (sorted(data) == 1)
			return (0);
		sort(data, argc - 1);
	}
}