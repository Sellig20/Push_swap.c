/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:42:06 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/11 11:01:07 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_4(t_bidule **a_list, t_bidule **b_list)
{
	t_bidule	*f;
	t_bidule	*s;
	t_bidule	*t;
	t_bidule	*f_b;

	ft_pb(a_list, b_list);
	ft_sort_3(a_list);
	f = *a_list;
	s = (*a_list)->next;
	t = (*a_list)->next->next;
	f_b = (*b_list);
	if ((f_b->x < f->x) && (f_b->x < s->x) && (f_b->x < t->x))
		ft_pa(b_list, a_list);
	else if ((f_b->x > f->x) && (f_b->x < s->x) && (f_b->x < t->x))
		ft_action_for_fb_is_2(a_list, b_list);
	else if ((f_b->x > f->x) && (f_b->x > s->x) && f_b->x < t->x)
		ft_action_for_fb_is_3(a_list, b_list);
	else if ((f_b->x > f->x) && (f_b->x > s->x) && (f_b->x > t->x))
		ft_action_for_fb_is_4(a_list, b_list);
}

void	ft_action_for_fb_is_2(t_bidule **a_list, t_bidule **b_list)
{
	ft_pa(b_list, a_list);
	ft_sa(a_list);
}

void	ft_action_for_fb_is_3(t_bidule **a_list, t_bidule **b_list)
{
	ft_rra(a_list);
	ft_pa(b_list, a_list);
	ft_rra(a_list);
	ft_rra(a_list);
}

void	ft_action_for_fb_is_4(t_bidule **a_list, t_bidule **b_list)
{
	ft_pa(b_list, a_list);
	ft_ra(a_list);
}
