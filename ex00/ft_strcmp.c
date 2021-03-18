/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:31:17 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/18 15:11:15 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	int		 value;

	while (*str1)
	{
		if (*str1 == *str2)
			value = 0;
		else if (*str1 >= *str2 || *str2 >= *str1)
			return (1);
		str1++;
		str2++;
	}
	return (value);
}
