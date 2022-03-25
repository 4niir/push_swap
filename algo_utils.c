#include"push_swap.h"

void	check_sort(t_stack *stack_a, t_stack *stack_b)
{
	int i;

	i = 0;
	while(i < stack_a->top && stack_a->array[i] > stack_a->array[i + 1])
		i++;
	if (i == stack_a->top)
		exit_eroor(stack_a, stack_b);
}