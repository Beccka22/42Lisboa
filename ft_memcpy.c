
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:59:38 by rneves-s          #+#    #+#             */
/*   Updated: 2022/10/29 21:59:43 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*csrc;
	char	*cdest;

	i = 0;
	csrc = (char *)src;
	cdest = (char *)dest;
	if (csrc == NULL)
		return (NULL);

	while (csrc[i] && i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}

	return (cdest);
}