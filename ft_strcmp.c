/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabibi- <mhabibi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 03:08:02 by mhabibi-          #+#    #+#             */
/*   Updated: 2022/09/19 17:43:38 by mhabibi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
    int j;

	i = ft_strlen(s1);
    j = 3;
	while (j >= 0 && s1[i] == s2[j])
	{
		i--;
		j--;
	}
	if (j == -1)
		return (0);
	return(-1);
}