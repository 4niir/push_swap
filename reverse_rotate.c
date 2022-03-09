/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:00:01 by aboudoun          #+#    #+#             */
/*   Updated: 2022/03/09 15:00:23 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rra(t_stack *stack_a)
{
	int	top;
	int	temp;
	int	i;

	top = stack_a->top;
	i = top;
	temp = stack_a->array[0];
	while (i++ <= top)
		stack_a->array[i - 1] = stack_a->array[i];
	stack_a->array[0] = temp;
}

void	rrb(t_stack *stack_b)
{
	int	top;
	int	temp;
	int	i;

	top = stack_b->top;
	i = top;
	temp = stack_b->array[0];
	while (i++ <= top)
		stack_b->array[i - 1] = stack_b->array[i];
	stack_b->array[0] = temp;
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
