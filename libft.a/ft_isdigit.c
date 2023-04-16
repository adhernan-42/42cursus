/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:44:00 by adhernan          #+#    #+#             */
/*   Updated: 2023/04/16 14:33:11 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 La función ft_isdigit verifica si el carácter pasado como argumento es
 un dígito decimal (0-9). Devuelve 1 si el carácter es un dígito, y 0 si no lo es.
*/

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}