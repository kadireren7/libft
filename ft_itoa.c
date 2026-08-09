/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaaltint@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 02:44:18 by kaaltint          #+#    #+#             */
/*   Updated: 2026/08/10 02:47:57 by kaaltint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_number_len(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_write_number(char *str, long n, size_t len)
{
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	number;
	size_t	len;

	number = n;
	len = ft_number_len(number);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_write_number(str, number, len);
	return (str);
}
