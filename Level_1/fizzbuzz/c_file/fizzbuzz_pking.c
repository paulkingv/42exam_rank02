/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz_pking.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pking <marvin@d42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 15:28:56 by pking             #+#    #+#             */
/*   Updated: 2026/05/25 18:09:05 by pking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


// Remembering this print_num function is the whole purpose of fizzbuzz
// this uses recursion to reduce the numbers until we have the most 
// significant digit. Then, once we have it alone, it passes it to write, 
// which allows us to travel upstream in the recursion, unlocking the other
// blocked conditions until we are finshed printing the whole number.
void	print_num(int i)
{
	char	*nums;

	nums = "0123456789";
	if (i > 9)
		print_num(i / 10);
	write(1, &nums[i % 10], 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else
		{
			print_num(i);
			write(1, "\n", 1);
		}
		i++;
	}
}
