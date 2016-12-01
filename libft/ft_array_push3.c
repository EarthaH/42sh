/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_push3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebruyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 07:51:45 by cdebruyn          #+#    #+#             */
/*   Updated: 2016/11/15 08:12:20 by cdebruyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		***ft_array_push3(char ***arr, char **line)
{
	int		i;
	char	***arr2;

	i = -1;
	if (!line)
		return (arr);
	if (!arr)
	{
		arr2 = (char ***)malloc(sizeof(char **) * 2);
		arr2[0] = line;
		arr2[1] = NULL;
	}
	else
	{
		while (arr[++i] != NULL)
			;
		arr2 = (char ***)malloc(sizeof(char **) * (i + 2));
		i = -1;
		while (arr[++i] != NULL)
			arr2[i] = arr[i];
		arr2[i] = line;
		arr2[i + 1] = NULL;
		free(arr);
	}
	return (arr2);
}
