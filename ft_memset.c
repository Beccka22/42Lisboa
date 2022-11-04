/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 00:06:55 by beccka            #+#    #+#             */
/*   Updated: 2022/11/04 21:15:24 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, char c, int len)
{
	char	*b_char;

	b_char = (char *)b;
	if (b == NULL)
		return (NULL);
	while (*b_char && len > 0)
	{
		*b_char = c;
		b_char++;
		len--;
	}
	return (b);
}
