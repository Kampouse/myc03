/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:20:03 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/26 06:59:56 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	while (n > 0 && *str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
			return (*(unsigned char *)str1 - *(unsigned char *) str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
