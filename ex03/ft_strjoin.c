/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:30:19 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/18 10:24:44 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	add_str(char *dest, char *src, int *construct_i)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*construct_i] = src[i];
		i++;
		*construct_i += 1;
	}
}

void	ft_size(int size, int *final_size, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		*final_size = *final_size + sizeof(*strs[i]) + sizeof(*sep);
		i++;
	}
	*final_size = *final_size - sizeof(*sep);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			final_size;
	int			i;
	char		*buffer;

	if (size == 0)
	{
		buffer = malloc(0);
		return (buffer);
	}
	final_size = 0;
	ft_size(size, &final_size, strs, sep);
	buffer = malloc(final_size);
	i = 0;
	final_size = 0;
	while (i < size)
	{
		add_str(buffer, strs[i], &final_size);
		if (i != size -1)
		{
			add_str(buffer, sep, &final_size);
		}
		i++;
	}
	return (buffer);
}

// #include <stdio.h>
// int main()
// {
// 	char **strs;
// 	strs[0] = "hello";
// 	strs[1] = "world";
// 	printf("%s", ft_strjoin(2, strs, " "));
// 	return (0);
// }
