/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 20:09:31 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/16 17:20:52 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_small_sort(t_bidule **a_list, t_bidule **b_list)
{
	int	size;

	size = ft_lstsize(a_list);
	if ((ft_is_sorted(a_list) == 0) && size == 5)
		ft_sort_5(a_list, b_list);
	else if ((ft_is_sorted(a_list) == 0) && size == 4)
		ft_sort_4(a_list, b_list);
	else if ((ft_is_sorted(a_list) == 0) && size == 3)
		ft_sort_3(a_list);
	else if ((ft_is_sorted(a_list) == 0) && size == 2)
		ft_sort_2(a_list);
}
