/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimaozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:23:10 by msimaozi          #+#    #+#             */
/*   Updated: 2023/05/09 11:23:11 by msimaozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct t_stack
{
	int	*stack;
	int	size;
}	t_stack;

typedef struct s_colums
{
	t_stack	a;
	t_stack	b;
}	t_colums;

typedef struct s_data
{
	t_colums	original;
	t_colums	copy;
	t_colums	orded;
}	t_data;

//Inicia a stack e envia os argumentos
void	send(t_data *data, int argc, char **argv);
void	init(t_data *data, int argc);

//Verifica se tem letras e duplicados
void	checknum(t_data *data, char *str);
void	verify_dup(t_data *data, int argc, char **argv);
int		verify(char *str1, char *str2);

//Encontra o maximo e minimo no stack
int		find_max(t_data *data);
int		find_min(t_data *data);

//Operações
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	rab(t_data *data);
void	pab(t_data *data);
void	pbb(t_data *data);

//Organiza a stack
void	sort(t_data *data, int argc);
void	sort_3(t_data *data);
void	sort_5(t_data *data);
void	sort_big(t_data *data);
void	organize(t_data *data, int argc);
void	get_nums_radix(t_data *data);

//Organizado?, printa e ultimo
void	p_arg(t_data *data);
void	p_argb(t_data *data);
int		sorted(t_data *data);

//Mensagem de erro
void	error_msg(t_data *data);
void	free_all(t_data *data);

#endif
