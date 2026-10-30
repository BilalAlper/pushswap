/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balper <balper@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:45:52 by balper            #+#    #+#             */
/*   Updated: 2026/10/30 19:32:03 by balper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (!a || !b || !(*b))
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = *a;
	*a = temp;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (!a || !(*a) || !b)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = *b;
	*b = temp;
	write(1, "pb\n", 3);
}
