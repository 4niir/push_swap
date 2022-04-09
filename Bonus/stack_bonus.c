/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:56:16 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/09 03:21:39 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap_bonus.h"

static int	check_double(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		if (ft_atoi(av[i]) > 2147483647 || ft_atoi(av[i]) < -2147483648)
			return (0);
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[j]) == ft_atoi(av[i]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	stack(int ac, char **av, t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	j;

	if (!check_double(av))
		exit_error(stack_a, stack_b);
	i = 0;
	stack_b->top = -1;
	stack_a->array = malloc((ac - 1) * sizeof(int));
	if (!stack_a->array)
		exit(1);
	stack_b->array = malloc((ac - 1) * sizeof(int));
	if (!stack_b->array)
		exit(1);
	j = 1;
	while ((ac - j) > 0)
		stack_a->array[i++] = ft_atoi(av[ac - j++]);
	stack_a->top = j - 2;
}
