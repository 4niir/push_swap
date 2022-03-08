/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:56:16 by aboudoun          #+#    #+#             */
/*   Updated: 2022/03/08 19:39:42 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	check_double(t_stack *stack_a)
{
	int	i;
	int	j;

	i = 0;
	while (i <= stack_a->top)
	{
		j = i + 1;
		while (j <= stack_a->top)
		{
			if (stack_a->array[i] == stack_a->array[j])
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

	// exit_error(stack_a, stack_b);
	i = 0;
	stack_b->top = 0;
	stack_a->array = malloc((ac - 1) * sizeof(int));
	stack_b->array = malloc((ac - 1) * sizeof(int));
	j = 1;
	while (av[j])
		stack_a->array[i++] = ft_atoi(av[j++]);
	stack_a->top = j - 2;
	if (!check_double(stack_a))
		return (0);
	return (1);
}
