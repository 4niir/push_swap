/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:55:05 by aboudoun          #+#    #+#             */
/*   Updated: 2022/03/08 21:26:25 by aboudoun         ###   ########.fr       */
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
	return (0);
}
