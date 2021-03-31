/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:20:03 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/30 11:59:02 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (n != 0)
	{
		if (*str1 != *str2++)
			return (*(unsigned char *)str1 - *(unsigned char *)(str2 - 1));
		if (*str1++ == '\0')
			break ;
		n--;
	}
	return (0);
}
