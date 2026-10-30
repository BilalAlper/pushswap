/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balper <balper@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:52:29 by balper            #+#    #+#             */
/*   Updated: 2026/10/30 19:13:14 by balper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*head;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	temp = *stack;
	head = *stack;
	while (temp->next->next)
		temp = temp->next;
	*stack = temp->next;
	temp->next->next = head;
	temp->next = NULL;
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
}
