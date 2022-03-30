/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:47:17 by aboudoun          #+#    #+#             */
/*   Updated: 2022/03/30 13:13:31 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	algo(t_stack *stack_a, t_stack *stack_b)
{
	int i;
	
	check_sort(stack_a, stack_b);
	i = 0;
	while (stack_a->top + 1)
	{
		while (stack_a->array[stack_a->top] < stack_a->array[i])
			i++;
		if (i == stack_a->top)
		{
			pb(stack_a, stack_b);
			i = 0;
		}
		else
		{
			rra(stack_a);
			i = 0;
		}
	}
	while (stack_b->top + 1)
	{
		pa(stack_a, stack_b);
	}
	check_sort(stack_a, stack_b);
}
