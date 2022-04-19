/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:30:17 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/19 14:19:10 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../push_swap.h"

t_bidule	*ft_add_back(t_bidule *a_list, int value)
{
	t_bidule	*a;
	t_bidule	*tmp;

	a = malloc(sizeof(t_bidule) + 1);
	if (!a)
		return (NULL);
	tmp = NULL;
	tmp = a_list;
	if (a != NULL)
	{
		a->x = value;
		a->count = 0;
		a->next = NULL;
	}
	if (!tmp)
		a_list = a;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = a;
	}
	return (a_list);
}
