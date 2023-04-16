/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:03:00 by adhernan          #+#    #+#             */
/*   Updated: 2023/04/16 14:55:55 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** La función ft_isalnum verifica si el carácter pasado como argumento es
** alfabético o un dígito decimal (0-9). Devuelve 1 si el carácter es alfanumérico,
** y 0 si no lo es.
*/

int ft_isalnum(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
}
