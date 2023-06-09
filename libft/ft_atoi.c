/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:30:25 by msimaozi          #+#    #+#             */
/*   Updated: 2023/04/21 22:55:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<limits.h>
#include"libft.h"

ssize_t	ft_atoi(char *str)
{
	int			x;
	ssize_t		y;
	int			z;

	x = 0;
	y = 0;
	z = 1;
	while (str[x] == 32 || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-')
		z = z * -1;
	if (str[x] == '-' || str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		y = (y * 10) + (str[x] - '0');
		x++;
	}
	y = y * z;
	return (y);
}

/*int	 main(void)
{
	char	str[] = "-123THERE IS A NYANCAT UNDER YOUR BED";
	
	printf("%d", ft_atoi(str));
}*/
