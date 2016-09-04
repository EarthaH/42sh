/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 09:07:33 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 08:37:28 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_itoa_check(int *nbr)
{
	int		num;
	int		check;

	num = *nbr;
	if (*nbr == 0)
	{
		check = 3;
		return (check);
	}
	if (num == -2147483648)
	{
		check = 1;
		num = 2147483647;
		*nbr = num;
		return (check);
	}
	if (num < 0)
	{
		check = 2;
		num *= -1;
		*nbr = num;
		return (check);
	}
	return (0);
}

static char	*ft_itoa_check2(char *str, int *i, int check)
{
	int		j;

	j = *i;
	if (check == 1 || check == 2)
	{
		str[j] = '-';
		j++;
	}
	if (check == 3)
	{
		str = ft_strnew(2);
		str[0] = '0';
	}
	*i = j;
	return (str);
}

static char	*ft_itoa_main(int nbr, char *str, long int *h, int *l)
{
	long int	i;
	int			j;
	int			k;
	int			check;

	i = *h;
	j = *l;
	check = ft_itoa_check(&nbr);
	while ((nbr / i) > 0)
	{
		i *= 10;
		j++;
	}
	str = ft_strnew(j + 2);
	j = 0;
	str = ft_itoa_check2(str, &j, check);
	while (i > 1)
	{
		k = (nbr / i) * 10;
		i /= 10;
		str[j++] = (nbr / i) - k + '0';
	}
	*h = i;
	*l = j;
	return (str);
}

char		*ft_itoa(int nbr)
{
	long int	i;
	int			j;
	int			check;
	char		*str;

	i = 1;
	j = 0;
	if (nbr < 2147483647 && nbr > -2147483648)
	{
		check = ft_itoa_check(&nbr);
		if (check == 3)
		{
			str = ft_itoa_check2(str, &j, check);
			return (str);
		}
		str = ft_itoa_main(nbr, str, &i, &j);
		if (check == 1)
			str[j - 1] = '8';
		str[j] = '\0';
		return (str);
	}
	else
		ft_putstr(E_MESS07);
	return (NULL);
}
