/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:25:09 by msimaozi          #+#    #+#             */
/*   Updated: 2023/06/01 19:31:49 by marvin           ###   ########.fr       */
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
		i = 0;
		while (i < data->original.a.size)
		{
			printf("A:%d\n", data->original.a.stack[i]);
			i++;
		}
		i = 0;
		while (i < data->original.a.size)
		{
			printf("B:%d\n", data->copy.a.stack[i]);
			i++;
		}
		i = 0;
		while (i < data->original.a.size)
		{
			printf("C:%d\n", data->orded.a.stack[i]);
			i++;
		}
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
