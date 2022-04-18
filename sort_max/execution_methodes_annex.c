/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution_methodes_annex.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:04:50 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/16 16:39:04 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#define A 0
#define B 1
#define R 2

void	ft_execution1(t_bidule **a_list, t_bidule **b_list, int ra, int rb)
{
	while (ra)
	{
		ft_ra(a_list);
		ra--;
	}
	while (rb)
	{
		ft_rb(b_list);
		rb--;
	}
}

void	ft_execution2(t_bidule **a_list, t_bidule **b_list, int *rrr)
{
	while (rrr[A])
	{
		ft_rra(a_list);
		rrr[A]--;
	}
	while (rrr[B])
	{
		ft_rrb(b_list);
		rrr[B]--;
	}
}

void	ft_execution3(t_bidule **a_list, t_bidule **b_list, int *rrr)
{
	while (rrr[R])
	{
		ft_rrr(a_list, b_list);
		rrr[R]--;
	}
}
