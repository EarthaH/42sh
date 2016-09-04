/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 09:14:02 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/08/02 08:51:53 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static unsigned int	ft_space(char *str)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			j++;
		i++;
	}
	return (j);
}

static void			ft_split_main(t_split *sp, char *temp, char **split)
{
	while (temp[sp->j] != '\0' && temp[sp->j])
	{
		sp->k = sp->j;
		while (temp[sp->k] != ' ' && temp[sp->k] != '\0')
		{
			sp->k++;
		}
		split[sp->i] = ft_strnew(sp->k - sp->j);
		sp->k = sp->j;
		sp->l = 0;
		while (temp[sp->k] != ' ' && temp[sp->k] != '\0')
		{
			split[sp->i][sp->l] = temp[sp->k];
			sp->k++;
			sp->l++;
		}
		split[sp->i][sp->l] = '\0';
		sp->j = sp->k;
		sp->i++;
		sp->j++;
	}
}

char				**ft_split(char *str)
{
	char	*temp;
	char	**split;
	t_split	sp;

	if (str == NULL)
		return (NULL);
	sp.j = 0;
	temp = rm_padding(str);
	if (temp == NULL)
		return (NULL);
	sp.i = ft_space(temp);
	split = ft_strnew2(sp.i + 3);
	sp.i = 0;
	ft_split_main(&sp, temp, split);
	split[sp.i] = "\0";
	return (split);
}
