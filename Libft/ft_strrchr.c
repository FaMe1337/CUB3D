/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toferrei <toferrei@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:59:07 by toferrei          #+#    #+#             */
/*   Updated: 2025/03/25 14:17:38 by toferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	cc;

	cc = (char) c;
	i = 0;
	while (s[i])
		i++;
	while (i > 0 && s[i] != cc)
		i--;
	if (s[i] == cc || cc == '\0')
		return ((char *)(s + i));
	else
		return (NULL);
}
