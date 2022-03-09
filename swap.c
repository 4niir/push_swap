/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:01:10 by aboudoun          #+#    #+#             */
/*   Updated: 2022/03/09 15:01:26 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a, t_stack *stack_b)
{
	int	temp;
	int	top;

	top = stack_a->top;
	temp = stack_a->array[top];
	stack_a->array[top] = stack_a->array[top - 1];
	stack_a->array[top - 1] = temp;
}

void	sb(t_stack *stack_a, t_stack *stack_b)
{
	int	temp;
	int	top;

	top = stack_b->top;
	temp = stack_b->array[top];
	stack_b->array[top] = stack_b->array[top - 1];
	stack_b->array[top - 1] = temp;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a, stack_b);
	sb(stack_a, stack_b);
}
