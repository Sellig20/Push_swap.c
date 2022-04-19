/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:38:54 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/18 15:41:56 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_bidule **a_list)
{
	t_bidule	*tmp;
	t_bidule	*last;
	t_bidule	*a;

	a = *a_list;
	while (a->next)
	{
		tmp = a->next;
		last = a;
		a = a->next;
	}
	last->next = NULL;
	tmp->next = *a_list;
	*a_list = tmp;
	write(1, "rra\n", 4);
}

void	ft_rrb(t_bidule **b_list)
{
	t_bidule	*tmp;
	t_bidule	*last;
	t_bidule	*b;

	b = *b_list;
	while (b->next)
	{
		tmp = b->next;
		last = b;
		b = b->next;
	}
	last->next = NULL;
	tmp->next = *b_list;
	*b_list = tmp;
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_bidule **a_list, t_bidule **b_list)
{
	t_bidule	*tmpa;
	t_bidule	*lasta;
	t_bidule	*a;

	a = *a_list;
	while (a->next)
	{
		tmpa = a->next;
		lasta = a;
		a = a->next;
	}
	lasta->next = NULL;
	tmpa->next = *a_list;
	*a_list = tmpa;
	ft_reverse_rotate_b(&(*b_list));
	write(1, "rrr\n", 4);
}

void	ft_reverse_rotate_b(t_bidule **b_list)
{
	t_bidule	*tmpb;
	t_bidule	*lastb;
	t_bidule	*b;

	b = *b_list;
	while (b->next)
	{
		tmpb = b->next;
		lastb = b;
		b = b->next;
	}
	lastb->next = NULL;
	tmpb->next = *b_list;
	*b_list = tmpb;
}
