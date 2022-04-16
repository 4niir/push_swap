/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:47:17 by aboudoun          #+#    #+#             */
/*   Updated: 2022/04/15 20:46:00 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static int	find_min_dis(t_stack *b, int pos)
{
	int	dis_from_top;
	int	dis_from_bot;

	dis_from_top = b->top - pos;
	dis_from_bot = pos;
	if (dis_from_top > dis_from_bot)
		return (dis_from_bot);
	return (dis_from_top);
}

static int	find_pos(t_stack *b, int n)
{
	int	i;

	i = 0;
	while (b->array[i] != n)
		i++;
	return (i);
}

static void	push_a(t_stack *a, t_stack *b)
{
	int	big;
	int	nd_big;

	while (b->top > 0)
	{
		big = find_pos(b, b->top);
		nd_big = find_pos(b, b->top - 1);
		if (big == b->top)
			pa(a, b);
		else if (find_min_dis(b, big) < find_min_dis(b, nd_big))
		{
			move_to_top(b, big);
			pa(a, b);
		}
		else
		{
			move_to_top(b, nd_big);
			pa(a, b);
			big = find_pos(b, b->top + 1);
			move_to_top(b, big);
			pa(a, b);
			sa(a);
		}
	}
	pa(a, b);
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

	if (stack_a->top == 1)
		sorting_2(stack_a, stack_b);
	if (stack_a->top <= 1000)
		chunck = stack_a->top / 23;
	if (stack_a->top <= 510)
		chunck = stack_a->top / 12;
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
