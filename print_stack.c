#include"push_swap.h"

void	print_stack(t_stack *s)
{
	int i;

	i = 0;
	while (i <= s->top)
	{
		printf("tab %d: %d\n", i, s->array[i]);
		i++;
	}
}