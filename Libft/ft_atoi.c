/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:21:31 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/12 20:16:25 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

long int	ft_atoi(const char *str)
{
	int		i;
	int		s;
	long	n;

	s = 1;
	i = 0;
	n = 0;
	while (str[i] == ' ' || str[i] == '\t' || str [i] == '\f'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	while (ft_isdigit(str[i]) == 1 && str[i])
	{
		n = n * 10 + ((int)str[i] - '0');
		if (n * s > 2147483647 || n * s < -2147483648)
			return (2147483650);
		i++;
	}
	return (n * s);
}
