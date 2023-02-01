/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:28:48 by bguzel            #+#    #+#             */
/*   Updated: 2023/01/31 19:42:58 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>

void	ft_putchar(char c);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	sender(int number);
void	ft_function(unsigned char a, int pid);

#endif