/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:55:05 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/07 00:26:27 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static void	index(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	number;
	int	*index;

	i = 0;
	index = malloc((a->top + 1) * sizeof(int));
	if (!index)
		exit_error(a, b);
	while (i <= a->top)
	{
		j = 0;
		number = 0;
		while (j <= a->top)
		{
			if (a->array[i] > a->array[j])
				number++;
			j++;
		}
		index[i] = number;
		i++;
	}
	free(a->array);
	a->array = index;
}

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (ac > 2)
	{
		check_digit(ac, av, &stack_a, &stack_a);
		stack(ac, av, &stack_a, &stack_b);
		index(&stack_a, &stack_b);
		algo(&stack_a, &stack_b);
	}
	return (0);
}
