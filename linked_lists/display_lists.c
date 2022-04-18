/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_lists.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:29:31 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/15 22:02:53 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../push_swap.h"

void	ft_display(t_bidule **liste)
{
	t_bidule	*tmp;

	tmp = *liste;
	while (tmp != NULL)
	{
		printf("%d", tmp->x);
		tmp = tmp->next;
		if (!(tmp == NULL))
			printf(", ");
		else
			printf(".\n");
	}
}
