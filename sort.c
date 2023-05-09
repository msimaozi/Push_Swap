
#include "push_swap.h"

void	sort(t_data *data, int argc)
{
	//int	i;
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
		// i = 0;
		// while (i < data->copy.a.size)
		// {
		// 	printf("A:%d\n", data->copy.a.stack[i]);
		// 	i++;
		// }
		// printf("\n\n");
		get_nums_radix(data);
		// i = 0;
		// while (i < data->orded.a.size)
		// {
		// 	printf("A:%d\n", data->orded.a.stack[i]);
		// 	i++;
		// }
		sort_BIG(data);
		// printf("\n\n");
		// i = 0;
		// while (i < data->orded.a.size)
		// {
		// 	printf("A:%d\n", data->orded.a.stack[i]);
		// 	i++;
		// }
	}
}

void	sort_3(t_data *data)
{
	int *s;

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
