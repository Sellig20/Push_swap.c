/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 10:22:05 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/16 17:07:40 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_btoa(t_bidule **a_list, t_bidule **b_list)
{
	t_bidule	*b;
	int			min;
	int			index_a;
	int			index_b;

	index_b = 0;
	index_a = 0;
	b = *b_list;
	min = ft_get_min(a_list);
	while (b)
	{
		ft_getnxtmov(a_list, b_list, index_a, index_b);
		b = *b_list;
	}
	ft_last_sort(a_list, min);
}

void	ft_getnxtmov(t_bidule **a_list, t_bidule **b_list, int inda, int indb)
{
	t_bidule	*b;
	t_bidule	*a;
	int			*tmp_tab;
	int			*final_tab;

	b = *b_list;
	a = *a_list;
	final_tab = NULL;
	while (b)
	{
		inda = ft_index_to_be_in_a(&a, &b, indb);
		tmp_tab = ft_opchoice(a_list, b_list, inda, indb);
		if (!final_tab || tmp_tab[3] < final_tab[3])
		{
			free(final_tab);
			final_tab = tmp_tab;
		}
		else
			free(tmp_tab);
		indb++;
		b = b->next;
	}
	ft_execmove(final_tab, a_list, b_list);
	ft_pa(b_list, a_list);
	free(final_tab);
}

int	*ft_opchoice(t_bidule **a_list, t_bidule **b_list, int inda, int indb)
{
	int		*tmp_tab;
	int		nb_coups;

	tmp_tab = malloc(sizeof(int) * 4);
	tmp_tab[0] = inda;
	tmp_tab[1] = indb;
	tmp_tab[2] = 1;
	tmp_tab[3] = ft_methode1(inda, indb);
	nb_coups = ft_methode2(inda, indb, a_list, b_list);
	if (nb_coups < tmp_tab[3])
		ft_opchoice_meth2(tmp_tab, nb_coups);
	nb_coups = ft_methode3(inda, indb, a_list, b_list);
	if (nb_coups < tmp_tab[3])
		ft_opchoice_meth3(tmp_tab, nb_coups);
	nb_coups = ft_methode4(inda, indb, a_list, b_list);
	if (nb_coups < tmp_tab[3])
		ft_opchoice_meth4(tmp_tab, nb_coups);
	return (tmp_tab);
}
