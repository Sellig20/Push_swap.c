/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:38:09 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/18 15:41:08 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../push_swap.h"

void	ft_pa(t_bidule **b_list, t_bidule **a_list)
{
	t_bidule	*tmp;

	tmp = *b_list;
	*b_list = (*b_list)->next;
	tmp->next = *a_list;
	*a_list = tmp;
	write(1, "pa\n", 3);
}

void	ft_pb(t_bidule **a_list, t_bidule **b_list)
{
	t_bidule	*tmp;

	tmp = *a_list;
	*a_list = (*a_list)->next;
	tmp->next = *b_list;
	*b_list = tmp;
	write(1, "pb\n", 3);
}
