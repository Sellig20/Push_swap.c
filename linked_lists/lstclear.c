/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:31:55 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/15 16:24:30 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../push_swap.h"

void	ft_lstclear(t_bidule **liste)
{
	t_bidule	*tmp;

	tmp = *liste;
	while (*liste)
	{
		tmp = (*liste)->next;
		free(*liste);
		*liste = tmp;
	}
}
