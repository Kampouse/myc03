/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 08:54:45 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/26 07:06:32 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *str1, char *str2, unsigned int lenght)
{
	char			*star;
	unsigned int	ln;

	ln = 0;
	star = str1;
	while (*star != '\0')
		star++;
	while (*str2 != '\0' && ln < lenght)
	{
		*star = *str2;
		star++;
		str2++;
		ln++;
	}		
	*star = '\0';
	return (str1);
}
