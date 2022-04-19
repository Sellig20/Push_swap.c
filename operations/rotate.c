/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:37:07 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/18 15:42:46 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../push_swap.h"

void	ft_ra(t_bidule **a_list)
{
	t_bidule	*tmp;
	t_bidule	*a;
	t_bidule	*follow;

	a = *a_list;
	tmp = *a_list;
	follow = a->next;
	while (a->next)
		a = a->next;
	a->next = tmp;
	tmp->next = NULL;
	*a_list = follow;
	write(1, "ra\n", 3);
}

void	ft_rb(t_bidule **b_list)
{
	t_bidule	*tmp;
	t_bidule	*b;
	t_bidule	*follow;

	b = *b_list;
	tmp = *b_list;
	follow = b->next;
	while (b->next)
		b = b->next;
	b->next = tmp;
	tmp->next = NULL;
	*b_list = follow;
	write(1, "rb\n", 3);
}

void	ft_rr(t_bidule **a_list, t_bidule **b_list)
{
	t_bidule	*a;
	t_bidule	*follow_a;
	t_bidule	*tmpa;

	a = *a_list;
	tmpa = *a_list;
	follow_a = a->next;
	while (a->next)
		a = a->next;
	a->next = tmpa;
	tmpa->next = NULL;
	*a_list = follow_a;
	ft_rotate_b(&(*b_list));
	write(1, "rr\n", 3);
}

void	ft_rotate_b(t_bidule **b_list)
{
	t_bidule	*b;
	t_bidule	*follow_b;
	t_bidule	*tmpb;

	b = *b_list;
	tmpb = *b_list;
	follow_b = b->next;
	while (b->next)
		b = b->next;
	b->next = tmpb;
	tmpb->next = NULL;
	*b_list = follow_b;
}
