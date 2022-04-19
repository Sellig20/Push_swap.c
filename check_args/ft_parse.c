/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:39:09 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/18 19:10:26 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_doublons(t_bidule **liste)
{
	t_bidule	*save1;
	t_bidule	*save2;

	save1 = *liste;
	while (save1)
	{
		save2 = save1->next;
		while (save2)
		{
			if (save1->x == save2->x)
				return (0);
			save2 = save2->next;
		}
		save1 = save1->next;
	}
	return (1);
}

t_bidule	*av_to_a_list(int ac, char **av)
{
	t_bidule	*a_list;
	int			i;
	char		**args;

	a_list = NULL;
	i = 0;
	if (ac == 2)
	{
		i = 1;
		args = ft_split(av[i], ' ');
		i = 0;
		while (args[i])
		{
			a_list = ft_add_back(a_list, ft_atoi(args[i]));
			i++;
		}
		free_args(args);
	}
	else
	{
		while (++i < ac)
			a_list = ft_add_back(a_list, ft_atoi(av[i]));
	}
	return (a_list);
}

int	ft_parsing(int ac, char **av, int i)
{
	(void)ac;
	while (av[i])
	{
		if (av[i] == NULL)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		else if (ft_atoi_max(av[i]) < INT_MIN
			|| ft_atoi_max(av[i]) > INT_MAX)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		else if (!ft_isnum(av[i]) || ft_strlen(av[i]) == 0)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_parsing_ac_split(int ac, char **av, int i)
{
	char	**args;

	i = 1;
	args = ft_split(av[i], ' ');
	i = 0;
	if (args[i] == NULL)
	{
		write(2, "Error\n", 6);
		free_args(args);
		exit(1);
	}
	if (ft_parsing(ac, args, i) == 1)
	{
		free_args(args);
		return (1);
	}
	free_args(args);
	return (0);
}

void	ac_exit(int ac, char **av, int i)
{
	if (ac > 2)
	{
		if (ft_parsing(ac, av, i) == 1)
			exit(1);
	}
	else if (ac < 2)
		exit(0);
	else if (ac == 2)
	{
		if (ft_parsing_ac_split(ac, av, i) == 1)
			exit(1);
	}
}
