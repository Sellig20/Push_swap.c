/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:15:11 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/18 19:02:45 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra_bonus(t_bidule **listea)
{
	t_bidule	*tmp;
	t_bidule	*liste_a;
	t_bidule	*follow;

	if (!*listea)
		return ;
	liste_a = *listea;
	tmp = *listea;
	follow = liste_a->next;
	while (liste_a->next)
		liste_a = liste_a->next;
	liste_a->next = tmp;
	tmp->next = NULL;
	*listea = follow;
}

void	ft_rb_bonus(t_bidule **listeb)
{
	t_bidule	*tmp;
	t_bidule	*liste_b;
	t_bidule	*follow;

	if (!*listeb)
		return ;
	liste_b = *listeb;
	tmp = *listeb;
	follow = liste_b->next;
	while (liste_b->next)
		liste_b = liste_b->next;
	liste_b->next = tmp;
	tmp->next = NULL;
	*listeb = follow;
}

void	ft_rr_bonus(t_bidule **listea, t_bidule **listeb)
{
	t_bidule	*liste_a;
	t_bidule	*follow_a;
	t_bidule	*tmpa;

	if (!*listea || !*listeb)
		return ;
	liste_a = *listea;
	tmpa = *listea;
	follow_a = liste_a->next;
	while (liste_a->next)
		liste_a = liste_a->next;
	liste_a->next = tmpa;
	tmpa->next = NULL;
	*listea = follow_a;
	ft_rb_bonus(&(*listeb));
}
