/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozbakir <yozbakir@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:49:44 by yozbakir          #+#    #+#             */
/*   Updated: 2023/07/13 19:34:22 by yozbakir          ###   ########.tr      */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a; 

	a = 'a';
	while (a <= 'z')
	{
		write(1, &a, 1);
		a++;
	}
}

/*int main(void)
{
	ft_print_alphabet();
}*/