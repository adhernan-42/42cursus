/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:29:00 by adhernan          #+#    #+#             */
/*   Updated: 2023/04/16 15:03:54 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La función ft_isascii verifica si el carácter pasado como argumento está
** dentro del conjunto ASCII (0-127). Devuelve 1 si el carácter es ASCII, y 0
** si no lo es.
*/

int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}
