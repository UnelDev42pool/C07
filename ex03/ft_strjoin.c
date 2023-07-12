/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:30:19 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/12 15:28:02 by edi-iori         ###   ########lyon.fr   */
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

int size(char **str, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		final_size += sizeof(*strs[i]) + sizeof(*sep);
		i++;
	}
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
	i = 0;
	while (i < size)
	{
		final_size += sizeof(*strs[i]) + sizeof(*sep);
		i++;
	}
	final_size -= sizeof(*sep);
	buffer = malloc(final_size);
	i = 0;
	final_size = 0;
	while (i < size)
	{
		add_str(buffer, strs[i], &final_size);
		add_str(buffer, sep, &final_size);
		i++;
	}
	return (buffer);
}

#include <stdio.h>
int main()
{
	char **strs;
	strs[0] = "hello";
	strs[1] = "world";
	printf("%s", ft_strjoin(2, strs, " "));
	return (0);
}
