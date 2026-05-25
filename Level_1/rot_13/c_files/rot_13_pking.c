/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13_pking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pking <marvin@d42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:41:21 by pking             #+#    #+#             */
/*   Updated: 2026/05/25 17:11:52 by pking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Important Note for Noobs
// When you pass a string literal it is read only in memory
// String Literal: strings that are declared and have text
// so for example we can use rot_13 if we are passing argv[1] in main
// but we could not say the same for calling rot_13("hello");
#include <unistd.h>

void	rot_13(char *str)
{
	int		i;
	char	tmp;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			tmp = ((str[i] - 'A' + 13) % 26 + 'A');
		else if (str[i] >= 'a' && str[i] <= 'z')
			tmp = ((str[i] - 'a' + 13) % 26 + 'a');
		else
			tmp = str[i];
		write(1, &tmp, 1);
		i++;
	}
}

// This is for returning the parameter
//
char	*rot_13_return_param(char *str)
{
	int		i;
	char	tmp;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			tmp = ((str[i] - 'A' + 13) % 26 + 'A');
		else if (str[i] >= 'a' && str[i] <= 'z')
			tmp = ((str[i] - 'a' + 13) % 26 + 'a');
		else
			tmp = str[i];
		str[i] = tmp;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		rot_13(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
