/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:32:01 by bguzel            #+#    #+#             */
/*   Updated: 2023/01/31 18:58:33 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48);
}

void	sender(int number)
{
	static char	j;
	static int	i = 128;

	if (number == SIGUSR1)
		j += i;
	i = i / 2;
	if (i == 0)
	{
		write(1, &j, 1);
		i = 128;
		j = 0;
	}
}

int	main(void)
{
	ft_putstr("pid : ");
	ft_putnbr(getpid());
	ft_putstr("\n");
	signal(SIGUSR1, &sender);
	signal(SIGUSR2, &sender);
	while (1)
		continue ;
	return (0);
}
