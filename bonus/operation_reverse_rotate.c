/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:17:41 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/18 19:01:35 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra_bonus(t_bidule **a_list)
{
	t_bidule	*tmp;
	t_bidule	*last;
	t_bidule	*a;

	if (!*a_list)
		return ;
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
}

void	ft_rrb_bonus(t_bidule **b_list)
{
	t_bidule	*tmp;
	t_bidule	*last;
	t_bidule	*b;

	if (!*b_list)
		return ;
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
}

void	ft_rrr_bonus(t_bidule **a_list, t_bidule **b_list)
{
	t_bidule	*tmpa;
	t_bidule	*lasta;
	t_bidule	*a;

	if (!*a_list || !*b_list)
		return ;
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
	ft_rrb_bonus(&(*b_list));
}
