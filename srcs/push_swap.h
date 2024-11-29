/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hojsong <hojsong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:19:52 by hojsong           #+#    #+#             */
/*   Updated: 2022/12/15 19:39:43 by hojsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

int		args(int argc, char **argv);
char	**ft_split(int size, int argc, char **argv);
char	*ft_str_save(char *argv, int i, int j);
void	allfree(char **str, int size);
int		*ft_start(int argc, char **argv);
int		ft_atoi(char *str);
int		ft_issp(char *str);
int		ft_pm(char c, int *pm);
int		*ft_sort(int *a, int amax);
int		*ft_minit(int argc);
void	ft_alg(int *a, int *c, int *m);
void	ft_asort(int *a, int *b, int *c, int *m);
void	ft_error(int i);
void	ft_sum(int *result, char s, int pm);
void	ft_rchk(int *result, int n);
void	ft_sa(int *a);
void	ft_sb(int *b);
void	ft_ss(int *a, int *b);
void	ft_pa(int *a, int *b, int *amax, int *bmax);
void	ft_pb(int *a, int *b, int *amax, int *bmax);
void	ft_ra(int *a, int *amax);
void	ft_rb(int *a, int *bmax);
void	ft_rr(int *a, int *b, int *amax, int *bmax);
void	ft_rra(int *a, int *amax);
void	ft_rrb(int *a, int *bmax);
void	ft_rrr(int *a, int *b, int *amax, int *bmax);
void	pri_stack(int *a, int *b, int *m);
void	ft_sort_start(int *a, int *b, int *c, int *m);
void	al1(int *a, int *b, int *m, int *c);
int		sort_chk_1(int *a, int *m);
int		sort_chk(int *a, int *c, int *m);
int		ft_ser_b_r(int *a, int *c, int *m, int si);
void	al2(int *a, int *b, int *c, int *m);
void	ft_rbrr_exe(int *b, int *m, int s);
int		find_max_b(int *b, int *m);
int		sort_check_a(int *a, int *c, int *m);
void	findmin(int *a, int *c, int *m);
void	sort_start_chk(int *a, int argc);
void	al3(int *a, int *b, int *c, int *m);
void	ft_5sort(int *a, int *b, int *m);
void	ft_3sort(int *a, int amax);
void	ft_4sort(int *a, int *b, int *c, int *m);
void	ft_3hsort(int *a, int *b, int *c, int *m);
void	ft_r_rr_a(int *a, int *c, int *m);
int		ft_rb_exe(int *as, int *a, int *b, int *m);
void	ft_rr_exe(int *as, int *a, int *b, int *m);
int		ft_iser(int i, int ser, int *m);
void	ft_cmd_exe(int *a, int *b, int *m);
void	ft_cmd(char *c, int *a, int *b, int *m);
void	checker(int *a, int *m);
int		ft_strcmp(char *s1, char *s2);

#endif
