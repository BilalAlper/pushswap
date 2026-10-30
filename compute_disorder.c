/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_disorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balper <balper@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:30:31 by balper            #+#    #+#             */
/*   Updated: 2026/10/30 19:20:02 by balper           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

double	ft_compute_disorder(t_stack *my_stack)
{
	int		mistakes;
	double	total_pairs;
	t_stack	*a;
	t_stack	*b;

	if (!my_stack)
		return (0);
	mistakes = 0;
	total_pairs = 0;
	a = my_stack;
	while (a)
	{
		b = a->next;
		while (b)
		{
			total_pairs++;
			if (a->top > b->top)
				mistakes++;
			b = b->next;
		}
		a = a->next;
	}
	if (total_pairs == 0)
		return (0);
	return (mistakes / total_pairs);
}
