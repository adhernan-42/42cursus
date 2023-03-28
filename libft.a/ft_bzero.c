/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:06:28 by adhernan          #+#    #+#             */
/*   Updated: 2022/10/18 15:12:30 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * DESCRIPTION
 *     The bzero() function erases the data in the n bytes of the memory starting
 *     at the location pointed to by s, by writing zeroes (bytes containing '\0')
 *     to that area.
 */
void bzero(void *s, size_t n) {
    char *p = s;
    while (n--) {
        *p++ = '\0';
    }
}
