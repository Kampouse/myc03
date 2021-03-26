/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:01:40 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/26 07:02:10 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *str1, char *str2)
{
	char	*star;

	star = str1;
	while (*star)
		star++;
	while (*str2)
		*star++ = *str2++;
	*star = '\0';
	return (str1);
}
