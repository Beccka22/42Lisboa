/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:59:05 by rneves-s          #+#    #+#             */
/*   Updated: 2022/11/04 21:11:16 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	char			*p_dest;
	char			*p_src;
	char			*tmp;
	unsigned int	i;

	p_dest = (char *)dest;
	p_src = (char *)src;
	tmp = (char *) malloc(sizeof(char ) * n);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(tmp + i) = *(p_src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(p_dest + i) = *(tmp + i);
		i++;
	}
	free(tmp);
	return (dest);
}

// int main()
// {
//     char cSrc[] = "Aticleworld";
//     // The destination string size is 14.
//     char cDest[16] = {0};
//     // copying n bytes of cSrc into cDest
//     //Using own my_memcpy function
//     ft_memmove(cDest, cSrc, 12);
//     printf("Copied string: %s\n", cDest);
//     int iSrc[] = {10, 20, 30, 40, 50};
//     int n = sizeof(iSrc)/sizeof(iSrc[0]);
//     int iDest[n], index = 0;
//     // copying n bytes of iSrc into iDest
//     //Using own my_memcpy function
//     ft_memmove(iDest, iSrc, sizeof(iSrc));
//     printf("\nCopied array is ");
//     for (index=0; index<n; index++)
//     {
//         printf("%d ", iDest[index]);
//     }
//     return 0;
// }