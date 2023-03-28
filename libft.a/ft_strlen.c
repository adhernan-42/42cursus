/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:02:58 by adhernan          #+#    #+#             */
/*   Updated: 2022/09/29 12:53:23 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * DESCRIPTION
 *     The strlen() function calculates the length of the string s, excluding
 *     the terminating null byte ('\0').
 */
size_t strlen(const char *s) {
	size_t len = 0;
    while (*s++ != '\0') {
        len++;
    }
    return len;
}
