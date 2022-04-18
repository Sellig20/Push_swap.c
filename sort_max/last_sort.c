/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:30:41 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/16 17:19:53 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_loop_ls(t_bidule **a_list, int min, int i)
{
	t_bidule	*a;

	a = *a_list;
	i = 0;
	while (a && a->x != min)
	{
		i++;
		a = a->next;
	}
	return (i);
}

void	ft_last_sort(t_bidule **a_list, int min)
{
	t_bidule	*a;
	int			i;
	int			j;

	a = *a_list;
	i = 0;
	i = ft_loop_ls(&a, min, i);
	j = ft_lstsize(a_list) - i;
	if (i < j)
	{
		while (i)
		{
			ft_ra(a_list);
			i--;
		}
	}
	else
	{
		while (j)
		{
			ft_rra(a_list);
			j--;
		}
	}
}
