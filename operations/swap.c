/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:36:29 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/15 22:22:33 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../push_swap.h"

void	ft_sa(t_bidule **a_list)
{
	int			tmp;
	t_bidule	*a;

	a = *a_list;
	tmp = a->x;
	a->x = a->next->x;
	a->next->x = tmp;
	printf("sa\n");
}

void	ft_sb(t_bidule **b_list)
{
	int			tmp;
	t_bidule	*b;

	b = *b_list;
	tmp = b->x;
	b->x = b->next->x;
	b->next->x = tmp;
	printf("sb\n");
}

void	ft_ss(t_bidule **a_list, t_bidule **b_list)
{
	int			tmpa;
	int			tmpb;
	t_bidule	*a;
	t_bidule	*b;

	a = *a_list;
	b = *b_list;
	tmpa = a->x;
	tmpb = b->x;
	a->x = a->next->x;
	b->x = b->next->x;
	a->next->x = tmpa;
	b->next->x = tmpb;
	printf("ss\n");
}
