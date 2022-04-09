/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:47:17 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/09 17:59:50 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	find_max(t_stack *b)
{
	int	i;
	int	position;

	i = 0;
	position = 1;
	while (i <= b->top)
	{
		if (b->array[i] > b->array[position])
			position = i;
		i++;
	}
	return (position);
}

static void	push_a(t_stack *a, t_stack *b)
{
	int	max;

	while (b->top >= 0)
	{
		max = find_max(b);
		if (max == b->top || b->top == 0)
			pa(a, b);
		else if (max == b->top - 1)
			sb(b);
		else if (max <= b->top / 2)
			rrb(b);
		else if (max > b->top / 2)
			rb(b);
	}
}

static void	push_b(t_stack *stack_a, t_stack *stack_b, int chunck, int not)
{
	int	scan;
	int	min;
	int	max;

	min = 0;
	max = chunck;
	while (stack_a->top != 2)
	{
		scan = ft_scan(stack_a, min, max, not);
		if (scan == -1)
		{
			min = min + chunck;
			max = max + chunck;
			scan = ft_scan(stack_a, min, max, not);
		}
		ra_rra(stack_a, scan);
		scan = ft_scan(stack_a, min, max, not);
		if (scan == stack_a->top)
			check_before_pb(stack_a, stack_b);
	}
}

void	algo(t_stack *stack_a, t_stack *stack_b)
{
	int	chunck;
	int	not;

	if (stack_a->top <= 1000)
		chunck = stack_a->top / 13;
	if (stack_a->top <= 510)
		chunck = stack_a->top / 13;
	if (stack_a->top <= 110)
		chunck = stack_a->top / 5;
	if (stack_a->top <= 31)
		chunck = stack_a->top / 3;
	if (stack_a->top <= 20)
		chunck = stack_a->top;
	not = stack_a->top - 3;
	push_b(stack_a, stack_b, chunck, not);
	sorting_3(stack_a);
	push_a(stack_a, stack_b);
	check_sort(stack_a, stack_b);
}
