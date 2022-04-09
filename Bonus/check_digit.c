/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:54:08 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/08 23:46:35 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap_bonus.h"

void	check_digit(int ac, char **av, t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		if (av[i][0] == '-' || av[i][0] == '+')
			j++;
		if (!av[i][j])
			exit_error(a, b);
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
				exit_error(a, b);
			j++;
		}
		i++;
	}
}