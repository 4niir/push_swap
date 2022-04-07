/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:47:23 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/07 00:33:33 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	check_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	i = 0;
	while (i < stack_a->top && stack_a->array[i] > stack_a->array[i + 1])
		i++;
	if (i == stack_a->top && stack_b->top == -1)
	{
		if (stack_a->array)
			free(stack_a->array);
		if (stack_b->array)
			free(stack_b->array);
		exit (0);
	}
}

int	ft_scan(t_stack *a, int min, int max, int not)
{
	int	i;
	int	top;
	int	bott;

	i = 0;
	while (i <= a->top)
	{
		top = a->array[a->top - i];
		bott = a->array[i];
		if (top <= not && top >= min && top <= max)
			return (a->top - i);
		else if (bott <= not && bott >= min && bott <= max)
			return (i);
		i++;
	}
	return (-1);
}

void	ra_rra(t_stack *a, int scan)
{
	int	half;

	half = a->top / 2;
	if (scan < half)
		rra(a);
	else
		ra(a);
}

void	check_before_pb(t_stack *a, t_stack *b)
{
	int	n;

	n = a->array[a->top];
	if (n > b->array[b->top] || b->top == -1)
		pb(a, b);
	else if (n < b->array[b->top] && n > b->array[b->top - 1])
	{
		pb(a, b);
		sb(b);
	}
	else
	{
		pb(a, b);
		rb(b);
	}
}
