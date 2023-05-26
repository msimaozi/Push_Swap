/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:25:09 by msimaozi          #+#    #+#             */
/*   Updated: 2023/05/09 11:25:10 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;
	int		i;

	i = 1;
	if (argc < 2)
		return (0);
	else
	{
		data = malloc(sizeof(t_data));
		init(data, argc);
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
		p_arg(data);
		free_all(data);
	}
}

void	free_all(t_data *data)
{
	free(data->original.a.stack);
	free(data->original.b.stack);
	free(data->copy.a.stack);
	free(data->copy.b.stack);
	free(data->orded.a.stack);
	free(data->orded.b.stack);
	free(data);
}
