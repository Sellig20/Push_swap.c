/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution_methodes.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:28:39 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/16 17:13:02 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#define A 0
#define B 1
#define R 2

void	ft_execmove(int *tab, t_bidule **a_list, t_bidule **b_list)
{
	int	rinda;

	rinda = 0;
	if (tab[2] == 1)
		ft_exec1(tab, a_list, b_list);
	else if (tab[2] == 2)
		ft_exec2(tab, a_list, b_list, rinda);
	else if (tab[2] == 3)
		ft_exec3(tab, a_list, b_list);
	else if (tab[2] == 4)
		ft_exec4(tab, a_list, b_list);
}

void	ft_exec1(int *tab, t_bidule **a_list, t_bidule **b_list)
{
	int	rr;
	int	ra;
	int	rb;

	ra = 0;
	rb = 0;
	if (tab[0] <= tab[1])
	{
		rr = tab[0];
		if (tab[0] != tab[1])
			rb = tab[1] - rr;
	}
	else
	{
		rr = tab[1];
		ra = tab[0] - rr;
	}
	while (rr)
	{
		ft_rr(a_list, b_list);
		rr--;
	}
	ft_execution1(a_list, b_list, ra, rb);
}

void	ft_exec2(int *tab, t_bidule **a_list, t_bidule **b_list, int rinda)
{
	int	rrr[3];
	int	rindex_b;

	rrr[A] = 0;
	rrr[B] = 0;
	rrr[R] = 0;
	rinda = 0;
	rindex_b = 0;
	if (tab[0])
		rinda = ft_lstsize(a_list) - tab[0];
	if (tab[1])
		rindex_b = ft_lstsize(b_list) - tab[1];
	if (rinda <= rindex_b)
	{
		rrr[R] = rinda;
		if (rinda != rindex_b)
			rrr[B] = rindex_b - rrr[R];
	}
	else
	{
		rrr[R] = rindex_b;
		rrr[A] = rinda - rrr[R];
	}
	ft_execution2(a_list, b_list, rrr);
	ft_execution3(a_list, b_list, rrr);
}

void	ft_exec3(int *tab, t_bidule **a_list, t_bidule **b_list)
{
	int	rindex_b;

	rindex_b = 0;
	if (tab[1])
		rindex_b = ft_lstsize(b_list) - tab[1];
	while (tab[0])
	{
		ft_ra(a_list);
		tab[0]--;
	}
	while (rindex_b)
	{
		ft_rrb(b_list);
		rindex_b--;
	}
}

void	ft_exec4(int *tab, t_bidule **a_list, t_bidule **b_list)
{
	int	rindex_a;

	rindex_a = 0;
	if (tab[0])
		rindex_a = ft_lstsize(a_list) - tab[0];
	while (tab[1])
	{
		ft_rb(b_list);
		tab[1]--;
	}
	while (rindex_a)
	{
		ft_rra(a_list);
		rindex_a--;
	}
}
