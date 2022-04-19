/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:23:09 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/19 19:44:52 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_exec_bonus_a(t_bidule **a_list, char *str)
{
	if (ft_lstsize(a_list) != 0 && ft_lstsize(a_list) != 1)
	{
		if (ft_strcmp(str, "sa\n") == 0)
			ft_sa_bonus(a_list);
		else if (ft_strcmp(str, "ra\n") == 0)
			ft_ra_bonus(a_list);
		else if (ft_strcmp(str, "rra\n") == 0)
			ft_rra_bonus(a_list);
	}
}

void	ft_exec_bonus_b(t_bidule **b_list, char *str)
{
	if (ft_lstsize(b_list) != 0 && ft_lstsize(b_list) != 1)
	{
		if (ft_strcmp(str, "sb\n") == 0)
			ft_sb_bonus(b_list);
		else if (ft_strcmp(str, "rb\n") == 0)
			ft_rb_bonus(b_list);
		else if (ft_strcmp(str, "rrb\n") == 0)
			ft_rrb_bonus(b_list);
	}
}

void	ft_exec_bonus_a_b(t_bidule **a_list, t_bidule **b_list, char *str)
{
	if (ft_strcmp(str, "pa\n") == 0)
		ft_pa_bonus(b_list, a_list);
	else if (ft_strcmp(str, "ss\n") == 0)
		ft_ss_bonus(a_list, b_list);
	else if (ft_strcmp(str, "pb\n") == 0)
		ft_pb_bonus(a_list, b_list);
	else if (ft_strcmp(str, "rr\n") == 0)
		ft_rr_bonus(a_list, b_list);
	else if (ft_strcmp(str, "rrr\n") == 0)
		ft_rrr_bonus(a_list, b_list);
}

void	answer_checker(t_bidule *a_list_bonus, t_bidule *b_list_bonus)
{
	if (b_list_bonus == NULL && (ft_is_sorted(&a_list_bonus) == 1))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int ac, char **av)
{
	t_bidule	*a_list_bonus;
	t_bidule	*b_list_bonus;
	int			i;

	i = 1;
	a_list_bonus = NULL;
	b_list_bonus = NULL;
	ac_exit(ac, av, i);
	a_list_bonus = av_to_a_list(ac, av);
	if (check_doublons(&a_list_bonus) == 0)
	{
		write(2, "Error\n", 6);
		get_next_line(0, 1);
		return (ft_lstclear(&a_list_bonus), 1);
	}
	if (ft_check_op(&a_list_bonus, &b_list_bonus) == 0)
		return (ft_lstclear(&a_list_bonus), 1);
	answer_checker(a_list_bonus, b_list_bonus);
	get_next_line(0, 1);
	ft_lstclear(&a_list_bonus);
	ft_lstclear(&b_list_bonus);
	return (0);
}
