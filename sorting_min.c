#include"push_swap.h"

void	min_algo(t_stack *stack_a, t_stack *stack_b)
{
	int i;
	int top_half;

	if (stack_a -> top == 2)
		sorting_3(stack_a);
	else
	{
		check_sort(stack_a, stack_b);
		i = 0;
		while (stack_a->top + 1)
		{
			while (stack_a->array[stack_a->top] < stack_a->array[i])
				i++;
			top_half = (stack_a->top / 2);
			if	(i < top_half)
			{
				rra(stack_a);
				i = 0;
			}
			else if (i == stack_a->top || stack_a->top == 0)
			{
				pb(stack_a, stack_b);
				i = 0;
			}
			else
			{
				ra(stack_a);
				i = 0;
			}
		}
		while (stack_b->top + 1)
			pa(stack_a, stack_b);
		check_sort(stack_a, stack_b);
	}
}