/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:13:59 by adhernan          #+#    #+#             */
/*   Updated: 2022/09/29 15:40:42 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void	*ft_memset(void *str, int l, size_t len)
{
	unsigned char *p=str;
    while(len--)
        *p++ = (unsigned char)l;
	return (str);
}

int	main()
{
	char	value[] = "12345";
	printf("%s", ft_memset(value, 'a', 2));
	char	value1[] = "12345";
	printf("%s", memset(value1, 'a', 2));
}
