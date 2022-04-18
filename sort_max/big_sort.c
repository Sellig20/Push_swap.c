/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:30:53 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/16 01:24:37 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_big_sort(t_bidule **a_list, t_bidule **b_list)
{
	int	med;
	int	size;
	int	i;

	i = 0;
	size = ft_lstsize(a_list);
	med = ft_recup_mediane(a_list);
	while (i < size)
	{
		ft_push_sup_med(a_list, b_list, med);
		i++;
	}
	ft_sort_3(a_list);
	ft_btoa(a_list, b_list);
}
