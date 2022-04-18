/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_sup_med.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:25:23 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/12 21:25:27 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_sup_med(t_bidule **listeA, t_bidule **listeB, int med)
{
	t_bidule	*head;
	t_bidule	*liste2;
	int			min;
	int			max;

	head = *listeA;
	liste2 = *listeB;
	min = ft_get_min(&head);
	max = ft_get_max(&head);
	if ((head->x != med) && (head->x != min) && (head->x != max))
		ft_pb(&head, &liste2);
	else
		ft_ra(&head);
	*listeA = head;
	*listeB = liste2;
}
