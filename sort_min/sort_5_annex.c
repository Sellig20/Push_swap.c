/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_annex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:50:28 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/11 13:01:38 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_exit_sec_min(t_bidule **a_list, t_bidule **b_list)
{
	t_bidule	*f;
	t_bidule	*s;
	t_bidule	*t;
	t_bidule	*fo;

	f = (*a_list);
	s = (*a_list)->next;
	t = (*a_list)->next->next;
	fo = (*a_list)->next->next->next;
	if ((f->x < s->x) && (f->x < t->x) && (f->x < fo->x))
		ft_pb(a_list, b_list);
	else if ((f->x > s->x) && (s->x < t->x) && (s->x < fo->x))
		ft_action_for_2_is_s(a_list, b_list);
	else if ((f->x > t->x) && (s->x > t->x) && (t->x < fo->x))
		ft_action_for_2_is_t(a_list, b_list);
	else if ((f->x > fo->x) && (s->x > fo->x) && (t->x > fo->x))
		ft_action_for_2_is_fo(a_list, b_list);
	ft_sort_3(a_list);
	ft_pa(b_list, a_list);
	ft_pa(b_list, a_list);
}

void	ft_action_for_2_is_s(t_bidule **a_list, t_bidule **b_list)
{
	ft_sa(a_list);
	ft_pb(a_list, b_list);
}

void	ft_action_for_2_is_t(t_bidule **a_list, t_bidule **b_list)
{
	ft_ra(a_list);
	ft_ra(a_list);
	ft_pb(a_list, b_list);
}

void	ft_action_for_2_is_fo(t_bidule **a_list, t_bidule **b_list)
{
	ft_rra(a_list);
	ft_pb(a_list, b_list);
}
