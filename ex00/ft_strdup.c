/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 09:47:26 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/11 11:25:08 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int ft_str_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	char *ptr = malloc(ft_str_len(src) * sizeof(char));
	ft_strcpy(ptr, src);
	return (ptr);
}

// #include <stdio.h>
// int main()
// {
// 	char *truc = ft_strdup("hello world");
// 	printf("%s", truc);
// }
