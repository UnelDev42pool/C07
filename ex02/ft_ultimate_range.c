/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:59:30 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/18 11:11:03 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*buffer;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	buffer = malloc((max - min) * sizeof (int));
	if (!buffer)
	{	
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min + i < max)
	{
		buffer[i] = min + i;
		i++;
	}
	*range = buffer;
	return (i);
}
// #include <stdio.h>
// int main()
// {
// 	int *coucou[15];
// 	int truc = ft_ultimate_range(coucou, 9, 10);
// 	if (*coucou)
// 	{
// 		printf("%d\n", *coucou[0]);
// 	}
// 	printf("%d", truc);
// 	return (0);
// }
