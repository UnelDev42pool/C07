/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:59:30 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/11 16:28:59 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*buffer;

	if (min == max)
		return (0);
	buffer = malloc(max - min);
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
// 	int **coucou;
// 	int truc = ft_ultimate_range(coucou, 5, 10);
// 	printf("%d", *coucou[0]);
// 	return (0);
// }