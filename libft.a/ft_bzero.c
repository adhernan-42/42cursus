/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:45:00 by adhernan          #+#    #+#             */
/*   Updated: 2023/04/16 20:01:18 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La función ft_bzero llena los primeros 'n' bytes del área de memoria
** apuntada por 's' con ceros (bytes con valor '\0').
*/

void ft_bzero(void *s, unsigned int n)
{
    unsigned char *p = (unsigned char *)s;

    while (n--)
    {
        *p++ = 0;
    }
}