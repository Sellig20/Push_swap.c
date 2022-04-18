/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:48:54 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/16 01:25:43 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_recup_mediane(t_bidule **a_list)
{
	t_bidule	*head;
	int			med_index;
	int			med_val;

	head = *a_list;
	med_val = 0;
	ft_index(a_list);
	if (ft_lstsize(a_list) % 2 == 0)
		med_index = ft_lstsize(a_list) / 2;
	else
		med_index = ft_lstsize(a_list) / 2 + 1;
	while (head)
	{
		if (head->count == med_index)
			med_val = head->x;
		head = head->next;
	}
	return (med_val);
}

void	ft_index(t_bidule **a_list)
{
	t_bidule		*i;
	t_bidule		*j;

	i = *a_list;
	while (i)
	{
		j = *a_list;
		while (j)
		{
			if (j->x < i->x)
				i->count++;
			j = j->next;
		}
		i = i->next;
	}
}

int	ft_index_to_be_in_a(t_bidule **a_list, t_bidule **b_list, int index_a)
{
	t_bidule	*a;
	t_bidule	*b;

	a = *a_list;
	b = *b_list;
	index_a = 0;
	a = *a_list;
	while (a && a->x > b->x)
	{
		index_a++;
		a = a->next;
	}
	if (a && a->x < b->x)
	{
		while (a && a->x < b->x)
		{
			index_a++;
			a = a->next;
		}
	}
	else
		index_a = 0;
	return (index_a);
}
