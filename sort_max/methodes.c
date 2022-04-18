/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methodes.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:32:10 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/16 00:56:43 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_methode1(int index_a, int index_b)
{
	if (index_a >= index_b)
		return (index_a);
	return (index_b);
}

int	ft_methode2(int index_a, int index_b, t_bidule **a_list,
		t_bidule **b_list)
{
	t_bidule	*a;
	t_bidule	*b;
	int			rindex_a;
	int			rindex_b;

	a = *a_list;
	b = *b_list;
	rindex_a = 0;
	rindex_b = 0;
	if (index_a)
		rindex_a = ft_lstsize(&a) - index_a;
	if (index_b)
		rindex_b = ft_lstsize(&b) - index_b;
	if (rindex_a >= rindex_b)
		return (rindex_a);
	return (rindex_b);
}

int	ft_methode3(int index_a, int index_b, t_bidule **a_list,
		t_bidule **b_list)
{
	t_bidule	*b;
	int			rindex_b;

	(void)a_list;
	rindex_b = 0;
	b = *b_list;
	if (index_b)
		rindex_b = ft_lstsize(&b) - index_b;
	return (index_a + rindex_b);
}

int	ft_methode4(int index_a, int index_b, t_bidule **a_list,
		t_bidule **b_list)
{
	t_bidule	*a;
	int			rindex_a;

	(void)b_list;
	a = *a_list;
	rindex_a = 0;
	if (index_a)
		rindex_a = ft_lstsize(&a) - index_a;
	return (index_b + rindex_a);
}
