/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:39:37 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/16 14:29:00 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_bidule	*a_list;
	t_bidule	*b_list;
	int			i;
	int			size;

	size = 0;
	i = 1;
	a_list = NULL;
	b_list = NULL;
	ac_exit(ac, av, i);
	a_list = av_to_a_list(ac, av);
	if (check_doublons(&a_list) == 0)
	{
		write(2, "Error\n", 6);
		return (ft_lstclear(&a_list), 0);
	}
	size = ft_lstsize(&a_list);
	if (ft_is_sorted(&a_list))
		return (ft_lstclear(&a_list), 0);
	else if (size <= 5)
		ft_small_sort(&a_list, &b_list);
	else
		ft_big_sort(&a_list, &b_list);
	ft_lstclear(&a_list);
	return (0);
}
