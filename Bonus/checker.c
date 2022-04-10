/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:55:05 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/09 22:13:08 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap_bonus.h"

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

void	check_digit(int ac, char **av, t_stack *a, t_stack *b)
{
	int	i;
	int	j;

	if (ac == 0)
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

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (ac > 2)
	{
		check_digit(ac, av, &stack_a, &stack_a);
		stack(ac, av, &stack_a, &stack_b);
		index(&stack_a, &stack_b);
		ft_instructions(&stack_a, &stack_b);
		check_sort(&stack_a, &stack_b);
	}
	return (0);
}
