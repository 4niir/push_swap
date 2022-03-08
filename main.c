/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:55:05 by aboudoun          #+#    #+#             */
/*   Updated: 2022/03/08 19:36:14 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (ac < 2)
		exit_eroor(&stack_a, &stack_b);
	if (!check_digit(ac, av))
		exit_eroor(&stack_a, &stack_b);
	if (!stack(ac, av, &stack_a, &stack_b))
		exit_eroor(&stack_a, &stack_b);
	//stack(ac, av, &stack_a, &stack_b);
	printf("top a %d\n", stack_a.top);
	printf("tab[0] %d\n", stack_a.array[0]);
	printf("tab[1] %d\n", stack_a.array[1]);
	printf("tab[2] %d\n", stack_a.array[2]);
	printf("tab[3] %d\n", stack_a.array[3]);
	printf("tab[4] %d\n", stack_a.array[4]);
	printf("malloc %d\n", ac - 1);
	return (0);
}
