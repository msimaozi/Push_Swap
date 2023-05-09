
#include "push_swap.h"

void	sort_BIG(t_data *data)
{
	int	max_bits;
	int	num;
	int	i;
	int	j;
	int	k;
    
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
			k = data->orded.a.stack[0];
			if (((k >> i) & 1) == 1)
				raB(data);
			else
				pbB(data);
			j++;
		}
		while (data->orded.b.size != 0)
			paB(data);
		i++;
	}
}

// void	sort_radix(t_data *data)
// {
// 	int	max;
// 	int	exp;

//	max = find_max(data);
// 	exp = 1;
// 	while (max / exp > 0)
// 	{
// 		countsort(data, exp);
// 		exp *= 10;
// 	}
// }

// void	countsort(t_data *data, int exp)//da certo
// {
// 	int	i;
// 	int	count[10] = {0};
// 	int	output[data->orded.a.size];

// 	i = 0;
// 	while (i < data->orded.a.size)
// 	{
// 		count[(data->orded.a.stack[i] / exp) % 10]++;
// 		i++;
// 	}
// 	i = 1;
// 	while (i < 10)
// 	{
// 		count[i] += count[i - 1];
// 		i++;
// 	}
// 	countsort2(data, exp, i, count, output);
// }

// void	countsort2(t_data *data, int exp, int i, int *count, int *output)
// {	
// 	i = data->orded.a.size - 1;
// 	while (i >= 0)
// 	{
// 		output[count[(data->orded.a.stack[i] / exp) % 10] - 1] = data->orded.a.stack[i];
// 		count[(data->orded.a.stack[i] / exp) % 10]--;
// 		i--;
// 	}
// 	i = 0;
// 	while (i < data->orded.a.size)
// 	{
// 		data->orded.a.stack[i] = output[i];
// 		i++;
// 	}
// }

// void	sort_BIG(t_data *data)
// {
// 	int	i;
// 	int	j;
// 	int	min;

// 	i = 0;
// 	j = 0;
// 	while (i < data->orded.a.size)
// 	{
// 		min = find_min(data);
// 		while (data->orded.a.stack[0] != min)
// 			ra(data);
// 		pb(data);
// 		i++;	
// 	}
// 	i = 0;
// 	while (i < data->orded.b.size)
// 	{
// 		pa(data);
// 		i++;
// 	}
// }
