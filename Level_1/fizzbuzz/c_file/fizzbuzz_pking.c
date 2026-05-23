/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz_pking.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pking <marvin@d42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:28:56 by pking             #+#    #+#             */
/*   Updated: 2026/05/23 15:44:05 by pking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void printNum(int i)
{
	char *nums= "0123456789";

	if (i > 9)
		printNum(i / 10);
	write (1, &nums[i % 10], 1);

}

int main (void)
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else if (i % 3 == 0)
			write (1, "fizz\n", 5);
		else
		{
			printNum(i);
			write (1, "\n", 1);
		}
		i++;
	}
}
