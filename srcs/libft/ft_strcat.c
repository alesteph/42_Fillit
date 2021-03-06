/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trmonich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:01:30 by trmonich          #+#    #+#             */
/*   Updated: 2018/11/07 12:38:40 by trmonich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	char	*end_s1;
	int		i;

	i = 0;
	end_s1 = s1;
	while (*end_s1)
		end_s1++;
	while (s2[i])
	{
		end_s1[i] = s2[i];
		i++;
	}
	end_s1[i] = 0;
	return (s1);
}
