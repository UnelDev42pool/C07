/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:30:33 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/17 10:26:02 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min >= max)
	{	
		return (NULL);
	}
	ptr = malloc(max - min);
	while (i < max - min)
	{
		ptr[i] = i + min;
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// int main()
// {
// 	int *truc = ft_range(5, 10);
// 	printf("%d", truc[4]);
// 	return (0);
// }
