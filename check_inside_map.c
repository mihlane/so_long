/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_inside_map.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 16:41:47 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/09/20 17:16:22 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

// void    check_lines_length(char **str, int z)
// {
//     int c;
    
//     c = 0;
//     while(c < z)
//     {
//         if (ft_strlen(str[c]) != ft_strlen(str[c+1]))
//         {
//             write(1, "please check map\n", 1);
//             exit (1);
//         }
//         c++;
//     }
// }

void    check_first_last_line(char **str, int z)
{
    int i;   
    i = 0;
    while(str[0][i] != '\0')
    {
        if (str[0][i] == '1' && str[z][i] == '1')
            i++;
        else
        {
            write(1, "please check map\n", 1);
            exit (1);
        }
    }
}

void    check_first__last_elem(char **str, int z)
{
    int i;
    int j;  
    i = 1;
    j = ft_strlen(str[0]);
    while(i < z)
    {
        if (str[i][0] == '1' && str[i][j - 1] == '1')
            i++;
        else
        {
            write(1, "please check map\n", 1);
            exit (1);
        }
    }
}

void    check_pcmdw(char **str , t_map   *map_a, int z)
{
    int i;
    int j; 
    int b;
    b = 1;
    j = ft_strlen(str[0]);
    while(b < z)
    {   
        i = 1;
        while (i < j)
        {
            if (str[b][i] == 'P')
                map_a->player++;
            else if (str[b][i] == 'C') 
                map_a->coin++;
            else if (str[b][i] == 'E')
                map_a->door++;
            else if (str[b][i] == '1')
                map_a->wall++;
            else if (str[b][i] == 'M')
                map_a->monster++;
            i++;
        }
        b++;
        // else
        // {
        //     write(1, "please check map\n", 1);
        //     exit (1);
        // }
    }
}

void    **check_inside_map(char **str, int z)
{
    // int i;
    // i = 0;
    // check_lines_length(str, z);
    t_map   *map_a;
    
    map_a = malloc(sizeof(t_map));
    map_a->player = 0;
    map_a->coin = 0;
    map_a->door = 0;
    map_a->wall = 0;
    map_a->monster = 0;
    check_first_last_line(str, z);
    check_first__last_elem(str,z);
    check_pcmdw(str, map_a, z);
    return (0);
}