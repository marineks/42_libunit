/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabwat <msabwat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:17:02 by msabwat           #+#    #+#             */
/*   Updated: 2022/01/09 19:22:03 by msabwat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

t_stack	*ft_stacknew(size_t size)
{
	t_stack	*stack;
	int		i;

	i = 0;
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = -1;
	stack->items = (int *)malloc(sizeof(int) * (size + 1));
	if (!(stack->items))
		return (0);
	stack->flags = (int *)malloc(sizeof(int) * (size + 1));
	if (!(stack->flags))
		return (0);
	stack->items[size] = 0;
	stack->flags[size] = 0;
	while (i < (int)size)
	{
		stack->items[i] = 0;
		stack->flags[i] = 0;
		i++;
	}
	stack->size = size;
	stack->r_size = 0;
	return (stack);
}

void	ft_stackpush(t_stack *stack, int elem)
{
	if (stack == NULL)
		return ;
	if (stack->top == (int)(stack->size - 1))
		return ;
	stack->top = stack->top + 1;
	stack->items[stack->top] = elem;
	stack->flags[stack->top] = 1;
	stack->r_size += 1;
}

int	ft_stackpeek(t_stack *stack)
{
	if (stack->top == -1)
		return (-1);
	return (stack->items[stack->top]);
}

int	ft_stackpop(t_stack *stack)
{
	if (stack->top == -1)
		return (-1);
	stack->flags[stack->top] = 0;
	stack->r_size -= 1;
	return (stack->items[stack->top--]);
}

void	ft_stackdel(t_stack *stack)
{
	if (!stack)
		return ;
	if (stack->items)
		free(stack->items);
	stack->items = NULL;
	if (stack->flags)
		free(stack->flags);
	stack->flags = NULL;
	if (stack)
		free(stack);
	stack = NULL;
}
