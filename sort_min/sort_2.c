/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:40:34 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/16 17:21:01 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_2(t_bidule **a_list)
{
	t_bidule	*f;
	t_bidule	*s;

	f = *a_list;
	s = (*a_list)->next;
	if (f->x > s->x)
		ft_sa(a_list);
}
