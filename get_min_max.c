/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:29:48 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/11 15:30:16 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <limits.h>

int	ft_get_min(t_bidule **a_list)
{
	t_bidule	*a;
	int			tmp;

	a = *a_list;
	tmp = INT_MAX;
	while (a)
	{
		if (tmp > a->x)
			tmp = a->x;
		a = a->next;
	}
	return (tmp);
}

int	ft_get_max(t_bidule **a_list)
{
	t_bidule	*a;
	int			tmp;

	a = *a_list;
	tmp = INT_MIN;
	while (a)
	{
		if (tmp < a->x)
			tmp = a->x;
		a = a->next;
	}
	return (tmp);
}
