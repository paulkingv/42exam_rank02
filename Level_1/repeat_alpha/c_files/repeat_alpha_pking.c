/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha_pking.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pking <marvin@d42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 12:47:06 by pking             #+#    #+#             */
/*   Updated: 2026/05/25 15:39:11 by pking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	j;
	int	num_of_repeat;

	i = 0;
	while (str[i])
	{
		num_of_repeat = 0;
		j = 0;
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			num_of_repeat = str[i] - 'A';
			while (j <= num_of_repeat)
			{
				write(1, &str[i], 1);
				j++;
			}
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			num_of_repeat = str[i] - 'a';
			while (j <= num_of_repeat)
			{
				write(1, &str[i], 1);
				j++;
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
