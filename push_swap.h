/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:41:20 by jecolmou          #+#    #+#             */
/*   Updated: 2022/04/16 17:31:34 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

//////////STRUCTURE//////////
typedef struct s_bidule	t_bidule;

struct s_bidule
{
	int			x;
	int			count;
	t_bidule	*next;
};

//////////LIBFT//////////
int			ft_strcmp(const char *s1, const char *s2);
int			ft_atoi(char *str);
long long	ft_atoi_max(char *str);
void		ft_swap(int *a, int *b);
char		**ft_split(char *s, char c);
char		**free_split(char **str, int count);
int			ft_isdigit(int c);

//////////LINKED LISTS//////////
void		ft_lstclear(t_bidule **liste);
void		ft_display(t_bidule **liste);
t_bidule	*ft_add_back(t_bidule *liste, int value);
t_bidule	*ft_add_front(t_bidule *liste, int value);
int			ft_lstsize(t_bidule **lst);

//////////OPERATIONS//////////
void		ft_sa(t_bidule **liste);
void		ft_sb(t_bidule **liste);
void		ft_ss(t_bidule **listeA, t_bidule **listeB);
void		ft_pa(t_bidule **listeB, t_bidule **listeA);
void		ft_pb(t_bidule **listeA, t_bidule **listeB);
void		ft_ra(t_bidule **listeA);
void		ft_rb(t_bidule **listeB);
void		ft_rr(t_bidule **listeA, t_bidule **listeB);
void		ft_rotate_b(t_bidule **listeB);
void		ft_rra(t_bidule **listeA);
void		ft_rrb(t_bidule **listeB);
void		ft_rrr(t_bidule **listeA, t_bidule **listeB);
void		ft_reverse_rotate_b(t_bidule **listeB);

//////////SMALL SORT//////////
void		ft_sort_2(t_bidule **a_list);
void		ft_sort_3(t_bidule **a_list);
void		ft_sort_4(t_bidule **a_list, t_bidule **b_list);
void		ft_action_for_fb_is_2(t_bidule **a_list, t_bidule **b_list);
void		ft_action_for_fb_is_3(t_bidule **a_list, t_bidule **b_list);
void		ft_action_for_fb_is_4(t_bidule **a_list, t_bidule **b_list);
void		ft_sort_5(t_bidule **a_list, t_bidule **b_list);
void		ft_action_for_1_is_s(t_bidule **a_list, t_bidule **b_list);
void		ft_action_for_1_is_t(t_bidule **a_list, t_bidule **b_list);
void		ft_action_for_1_is_fo(t_bidule **a_list, t_bidule **b_list);
void		ft_action_for_1_is_fi(t_bidule **a_list, t_bidule **b_list);
void		ft_action_for_2_is_s(t_bidule **a_list, t_bidule **b_list);
void		ft_action_for_2_is_t(t_bidule **a_list, t_bidule **b_list);
void		ft_action_for_2_is_fo(t_bidule **a_list, t_bidule **b_list);
void		ft_exit_sec_min(t_bidule **a_list, t_bidule **b_list);
void		ft_small_sort(t_bidule **a_list, t_bidule **b_list);

//////////PARSING//////////
t_bidule	*av_to_a_list(int ac, char **av);
int			ft_parsing(int ac, char **av, int i);
int			ft_parsing_ac_split(int ac, char **av, int i);
int			check_doublons(t_bidule **liste);
int			ft_is_sorted(t_bidule **a_list);
int			ft_isnum(char *num);
void		ac_exit(int ac, char **av, int i);
void		free_args(char **args);
void		free_str(char *str);

//////////INDEX FOR ALGO//////////
int			ft_get_min(t_bidule **a_list);
int			ft_get_max(t_bidule **a_list);
void		ft_index(t_bidule **a_list);
int			ft_recup_mediane(t_bidule **a_list);
void		ft_push_sup_med(t_bidule **listeA, t_bidule **listeB, int med);
int			ft_index_to_be_in_a(t_bidule **a, t_bidule **b, int index_a);

//////////ALGO//////////
void		ft_btoa(t_bidule **a_list, t_bidule **b_list);
void		ft_last_sort(t_bidule **a_list, int min);
void		ft_getnxtmov(t_bidule **a, t_bidule **b, int inda, int indb);
void		ft_execmove(int *tab, t_bidule **a_list, t_bidule **b_list);
void		ft_exec1(int *tab, t_bidule **a_list, t_bidule **b_list);
void		ft_execution1(t_bidule **a_list, t_bidule **b_list, int ra, int rb);
void		ft_execution2(t_bidule **a_list, t_bidule **b_list, int *rrr);
void		ft_execution3(t_bidule **a_list, t_bidule **b_list, int *rrr);
void		ft_exec2(int *tab, t_bidule **a_list, t_bidule **b_list, int rinda);
void		ft_exec3(int *tab, t_bidule **a_list, t_bidule **b_list);
void		ft_exec4(int *tab, t_bidule **a_list, t_bidule **b_list);
int			*ft_opchoice(t_bidule **a, t_bidule **b, int inda, int indb);
void		ft_opchoice_meth2(int *tmp_tab, int nb_coups);
void		ft_opchoice_meth3(int *tmp_tab, int nb_coups);
void		ft_opchoice_meth4(int *tmp_tab, int nb_coups);
int			ft_methode1(int index_a, int index_b);
int			ft_methode2(int inda, int indb, t_bidule **a, t_bidule **b);
int			ft_methode3(int inda, int indb, t_bidule **a, t_bidule **b);
int			ft_methode4(int inda, int indb, t_bidule **a, t_bidule **b);
void		ft_big_sort(t_bidule **a_list, t_bidule **b_list);

//////////BONUS//////////
void		ft_pa_bonus(t_bidule **a_list, t_bidule **b_list);
void		ft_pb_bonus(t_bidule **a_list, t_bidule **b_list);
void		ft_rra_bonus(t_bidule **a_list);
void		ft_rrb_bonus(t_bidule **b_list);
void		ft_rrr_bonus(t_bidule **a_list, t_bidule **b_list);
void		ft_ra_bonus(t_bidule **a_list);
void		ft_rb_bonus(t_bidule **b_list);
void		ft_rr_bonus(t_bidule **a_list, t_bidule **b_list);
void		ft_sa_bonus(t_bidule **a_list);
void		ft_sb_bonus(t_bidule **a_list);
void		ft_ss_bonus(t_bidule **a_list, t_bidule **b_list);
int			ft_check_op(t_bidule **a_list, t_bidule **b_list);
int			ft_check2_op(char *str);
void		ft_exec_bonus_a(t_bidule **a_list, char *str);
void		ft_exec_bonus_b(t_bidule **b_list, char *str);
void		ft_exec_bonus_a_b(t_bidule **a_list, t_bidule **b_list, char *str);

//////////GET_NEXT_LINE//////////
int			ft_strlen(char *str);
int			ft_read_buffer(int fd, char *buf);
int			ft_is_a_line(char *str);
char		*ft_strjoin(char *s1, char *s2);
char		*get_next_line(int fd, int reset);
char		*ft_read_text(int fd, char *final);
char		*ft_extract_line(char *s1);
char		*ft_save_line(char *str);

#endif
