/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:43:52 by rneves-s          #+#    #+#             */
/*   Updated: 2022/11/11 20:18:47 by rneves-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

#include<stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signal;
	int	v;

	signal = 1;
	i = 0;
	v = 0;
	if (nptr[0] == '-')
	{
		signal = -1;
		i++;
	}	
	if (nptr[0] == '+')
	{
		signal = 1;
		i++;
	}
	while (nptr[i] && nptr[i] >= 48 && nptr[i] <= 57)
	{
		v = v * 10 + nptr[i] - '0';
		i++;
	}
	return (v * signal);
}

// int main () {
//    int val;
//    char str[20];
//    strcpy(str, "+0");
//    val = atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);
//    strcpy(str, "tutorialspoint.com");
//    val = atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);

//    strcpy(str, "+0");
//    val = ft_atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);
//    strcpy(str, "tutorialspoint.com");
//    val = ft_atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);
//    return(0);
// }