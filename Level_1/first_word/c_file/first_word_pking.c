/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word_pking.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pking <marvin@d42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:06:40 by pking             #+#    #+#             */
/*   Updated: 2026/05/23 15:25:55 by pking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// -------[FUNCTION]-------:
// We skip initial spaces
// We go through characters that are NOT space AND NOT tab AND NOT esc_char
void first_word(char *str)
{
	int i;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

// -------[MAIN]-------:
// We check if argc == 2 because that means one argument (argc[1] is the program name)
int main (int argc, char *argv[])
{
	if (argc == 2)
	{
		first_word(argv[1]);
	}
	write(1, "\n", 1);
	return(1);
}
