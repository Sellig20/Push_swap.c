/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:31:05 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/05 13:57:24 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../push_swap.h"

t_bidule	*ft_lstadd_front(t_bidule *liste, int value)
{
	t_bidule	*new;

	new = malloc(sizeof(t_bidule));
	if (!liste)
	{
		return (NULL);
	}
	new->next = liste;
	new->x = value;
	return (new);
}
