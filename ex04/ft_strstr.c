/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 10:10:27 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/30 08:36:58 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *base, char *to_find)
{
	char	*basecp;	
	char	*looking;
	char	*ptr;

	basecp = base;
	looking = to_find;
	if (*to_find == 0)
		return (base);
	while (*basecp != '\0')
	{
		if (*to_find == '\0')
			return (basecp);
		ptr = basecp;
		while (*looking == *basecp && *looking != '\0')
		{
			looking++;
			basecp++;
		}
		if (*looking == '\0')
			return (to_find);
		basecp++;
	}
	return (0);
}
