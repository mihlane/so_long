/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 23:51:19 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/09/19 17:43:44 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
#include <fcntl.h>

typedef struct map
{
	int	player;
	int	coin;
    int monster;
    int door;
    int wall;
}t_map;

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
int     ft_strlen(char *s);
char	**ft_split(char const *s, char c);
int	ft_wordcount(char const *s, char c);
void    **check_inside_map(char **str, int z);
int check_map(char *av);
int	ft_strcmp(char *s1, char *s2);

#endif