
#include "push_swap.h"

void	organize(t_data *data, int argc)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < argc)
    {
        j = i + 1;
        while (j < argc - 1)
        {
            if (data->copy.a.stack[i] > data->copy.a.stack[j])
            { 
                temp = data->copy.a.stack[i];
                data->copy.a.stack[i] = data->copy.a.stack[j];
                data->copy.a.stack[j] = temp;
            }
            j++;
        }
        i++;
    }
}

void    get_nums_radix(t_data *data)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < data->original.a.size)
    {
        if (data->original.a.stack[i] == data->copy.a.stack[j])
            data->orded.a.stack[i] = j + 1;
        j = 0;
        while (data->original.a.stack[i] != data->copy.a.stack[j])
            j++;
        i++;
    }
}
    // int i;
    // int j;
    // int k;

    // k = 0;
    // j = 0;
    // while (j < data->copy.a.size)
    // {
    //     i = 0;
    //     while (data->copy.a.stack[k] != data->original.a.stack[i])
    //         i++;
    //     k++;
    //     data->orded.a.stack[j] = i + 1;
	    
    //     j++;
    // }
    // i = -1;
    // while (data->original.a.stack[++i])
	//     printf("o = %d\n", data->original.a.stack[i]);
    // i = -1;
    // while (data->orded.a.stack[++i])
	//     printf("o2 = %d\n", data->orded.a.stack[i]);
