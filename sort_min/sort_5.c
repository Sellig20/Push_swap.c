/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:47:47 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/12 19:38:33 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_5(t_bidule **a_list, t_bidule **b_list)
{
	t_bidule	*f;
	t_bidule	*s;
	t_bidule	*t;
	t_bidule	*fo;
	t_bidule	*fi;

	f = (*a_list);
	s = (*a_list)->next;
	t = (*a_list)->next->next;
	fo = (*a_list)->next->next->next;
	fi = (*a_list)->next->next->next->next;
	if ((f->x < s->x) && (f->x < t->x) && (f->x < fo->x) && (f->x < fi->x))
		ft_pb(a_list, b_list);
	else if ((f->x > s->x) && (s->x < t->x) && (s->x < fo->x) && (s->x < fi->x))
		ft_action_for_1_is_s(a_list, b_list);
	else if ((f->x > t->x) && (s->x > t->x) && (t->x < fo->x) && (t->x < fi->x))
		ft_action_for_1_is_t(a_list, b_list);
	else if ((f->x > fo->x) && (s->x > fo->x)
		&& (t->x > fo->x) && (fo->x < fi->x))
		ft_action_for_1_is_fo(a_list, b_list);
	else if ((f->x > fi->x) && (s->x > fi->x)
		&& (t->x > fi->x) && (fo->x > fi->x))
		ft_action_for_1_is_fi(a_list, b_list);
	ft_exit_sec_min(a_list, b_list);
}

void	ft_action_for_1_is_s(t_bidule **a_list, t_bidule **b_list)
{
	ft_sa(a_list);
	ft_pb(a_list, b_list);
}

void	ft_action_for_1_is_t(t_bidule **a_list, t_bidule **b_list)
{
	ft_ra(a_list);
	ft_ra(a_list);
	ft_pb(a_list, b_list);
}

void	ft_action_for_1_is_fo(t_bidule **a_list, t_bidule **b_list)
{
	ft_rra(a_list);
	ft_rra(a_list);
	ft_pb(a_list, b_list);
}

void	ft_action_for_1_is_fi(t_bidule **a_list, t_bidule **b_list)
{
	ft_rra(a_list);
	ft_pb(a_list, b_list);
}
