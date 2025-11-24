/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naldibis <naldibis@learner.42.tech>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 22:53:46 by naldibis          #+#    #+#             */
/*   Updated: 2025/11/24 23:02:33 by phonesluxury     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *str, int c)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (str[pos] == c)
			((char *)(str + pos));
		pos++;
	}
	if (c == '\0')
		return ((char *)(str + pos));
	return (NULL);
}
