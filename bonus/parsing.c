/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:23:41 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/16 00:26:42 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_op(t_bidule **a_list, t_bidule **b_list)
{
	char	*str;

	str = get_next_line(0, 0);
	while (str)
	{
		if (ft_check2_op(str) == 0)
		{
			free(str);
			write(2, "Error\n", 6);
			get_next_line(0, 1);
			return (0);
		}
		else
		{
			ft_exec_bonus_a(a_list, str);
			ft_exec_bonus_b(b_list, str);
			ft_exec_bonus_a_b(a_list, b_list, str);
		}
		free(str);
		str = get_next_line(0, 0);
	}
	free(str);
	return (1);
}

int	ft_check2_op(char *str)
{
	int	nb;

	nb = 0;
	if ((ft_strcmp(str, "sa\n") == 0)
		|| (ft_strcmp(str, "sb\n") == 0))
		nb = 1;
	else if (ft_strcmp(str, "ss\n") == 0)
		nb = 1;
	else if ((ft_strcmp(str, "pa\n") == 0)
		|| (ft_strcmp(str, "pb\n") == 0))
		nb = 1;
	else if ((ft_strcmp(str, "ra\n") == 0)
		|| (ft_strcmp(str, "rb\n") == 0))
		nb = 1;
	else if (ft_strcmp(str, "rr\n") == 0)
		nb = 1;
	else if ((ft_strcmp(str, "rra\n") == 0)
		|| (ft_strcmp(str, "rrb\n") == 0))
		nb = 1;
	else if (ft_strcmp(str, "rrr\n") == 0)
		nb = 1;
	else
		nb = 0;
	return (nb);
}
