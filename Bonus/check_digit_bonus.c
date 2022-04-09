/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_digit_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:54:08 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/09 18:01:41 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap_bonus.h"

void	check_digit(int ac, char **av, t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	if (ac == 1)
		return ;
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
