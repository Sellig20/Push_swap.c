/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_lists.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:29:31 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/18 15:48:46 by jecolmou         ###   ########.fr       */
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
		write(1, "%d", tmp->x);
		tmp = tmp->next;
		if (!(tmp == NULL))
			write(1, ", ", 2);
		else
			write(1, ".\n", 2);
	}
}
