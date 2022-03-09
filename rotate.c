/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:00:30 by aboudoun          #+#    #+#             */
/*   Updated: 2022/03/09 15:00:53 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ra(t_stack *stack_a)
{
	int	top;
	int	temp;

	top = stack_a->top;
	temp = stack_a->array[top];
	while (top--)
		stack_a->array[top + 1] = stack_a->array[top];
	stack_a->array[0] = temp;
}

void	rb(t_stack *stack_b)
{
	int	top;
	int	temp;

	top = stack_b->top;
	temp = stack_b->array[top];
	while (top--)
		stack_b->array[top + 1] = stack_b->array[top];
	stack_b->array[0] = temp;
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
