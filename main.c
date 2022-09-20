/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 23:50:16 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/09/19 23:19:54 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int check_map(char *av)
{
    char *str;
    str = ".ber";
    if (ft_strcmp(av, str) == 0)
        return (0);
    {
        write(1, "map not valid\n", 15);
        exit (1);
    }
}
void    read_map(int map)
{
    char    *str;
    char    *str2;
    char    **str3;
    int z;
    int i;
    str = get_next_line(map);
    i = ft_strlen(str);
    while(str != NULL)
    {
        str = get_next_line(map);
        if (ft_strlen(str) != i)
        {
            write(1, "Error\n", 7);
            exit(0);
        }
        str2 = ft_strjoin(str2, str);
    }
    // z = ft_wordcount(str2, '\n');
    z = ft_strlen(str2) / i ;
    if (z < i )
     {
        write(1, "Error\n", 7);
        exit(0);
    }
    str3 = ft_split(str2, '\n');
    check_inside_map(str3, z);
}

int main(int ac, char **av)
{
    int		file;
    // t_map   map;
    
    if (ac == 2)
    {
        check_map(av[1]);
        file = open(av[1], O_RDWR, 0777);
        read_map(file);
        write(1, "done\n", 5);
    
    }
    return (0);
}