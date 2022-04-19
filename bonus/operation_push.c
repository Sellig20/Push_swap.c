/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:21:33 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/18 18:59:40 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa_bonus(t_bidule **b_list, t_bidule **a_list)
{
	t_bidule	*tmp;

	if (!*b_list)
		return ;
	tmp = *b_list;
	*b_list = (*b_list)->next;
	tmp->next = *a_list;
	*a_list = tmp;
}

void	ft_pb_bonus(t_bidule **a_list, t_bidule **b_list)
{
	t_bidule	*tmp;

	if (!*a_list)
		return ;
	tmp = *a_list;
	*a_list = (*a_list)->next;
	tmp->next = *b_list;
	*b_list = tmp;
}
