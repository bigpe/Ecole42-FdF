/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 19:43:10 by ukaron            #+#    #+#             */
/*   Updated: 2019/05/23 21:28:45 by ukaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcat(char *s2, const char *s1)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s2[i] != '\0')
		i++;
	j = 0;
	while (s1[j] != '\0')
	{
		s2[i + j] = s1[j];
		j++;
	}
	s2[i + j] = '\0';
	return (s2);
}
