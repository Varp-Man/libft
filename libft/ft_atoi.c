/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkorolov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:13:06 by bkorolov          #+#    #+#             */
/*   Updated: 2022/10/06 17:13:06 by bkorolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_isspace(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *nptr)
{
	int		sign;
	long	ret;

	ret = 0;
	sign = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 14))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		if (*(nptr++) == '-')
			sign *= -1;
	while (ft_isdigit(*nptr))
		ret = ret * 10 + sign * (*nptr++ - '0');
	return ((int)ret);
}

int	main(void)
{
	char	*s;

	s = "  -2147483648";
	printf("%d\n", ft_atoi(s));
	printf("%d", atoi(s));
	return (0);
}
