/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:56:16 by aboudoun          #+#    #+#             */
/*   Updated: 2022/03/09 13:59:34 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	check_double(int ac, char **av)
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

int	stack(int ac, char **av, t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	j;

	if (!check_double(ac, av))
		return (0);
	i = 0;
	stack_b->top = ac - 1;
	stack_a->array = malloc((ac - 1) * sizeof(int));
	stack_b->array = malloc((ac - 1) * sizeof(int));
	j = 1;
	while ((ac - j) > 0)
		stack_a->array[i++] = ft_atoi(av[ac - j++]);
	stack_a->top = j - 2;
	return (1);
}
