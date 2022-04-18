/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:41:27 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/12 19:49:54 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_3(t_bidule **a_list)
{
	t_bidule	*f;
	t_bidule	*s;
	t_bidule	*t;

	f = *a_list;
	s = (*a_list)->next;
	t = (*a_list)->next->next;
	if ((f->x > s->x) && (s->x > t->x) && (t->x < f->x))
	{
		ft_ra(a_list);
		ft_sa(a_list);
	}
	else if ((f->x > s->x) && (s->x < t->x) && (t->x < f->x))
		ft_ra(a_list);
	else if ((f->x > s->x) && (s->x < t->x) && (t->x > f->x))
		ft_sa(a_list);
	else if ((f->x < s->x) && (s->x > t->x) && (t->x < f->x))
		ft_rra(a_list);
	else if ((f->x < s->x) && (s->x > t->x) && (t->x > f->x))
	{
		ft_rra(a_list);
		ft_sa(a_list);
	}
}
