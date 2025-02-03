/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:37:11 by ktiyari           #+#    #+#             */
/*   Updated: 2024/05/04 16:37:15 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

void	kill_handling(int pid, int signal)
{
	if (kill(pid, signal) == -1)
	{
		ft_putstr("Error! Failed to send signal.\n");
		exit(1);
	}
}

void	send_signal(int pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill_handling(pid, SIGUSR1);
		else
			kill_handling(pid, SIGUSR2);
		usleep(500);
		i--;
	}
}

int	main(int argc, char *argv[])
{
	char	*msg;
	int		pid;
	int		i;

	if (argc != 3 || !ft_isdigit(argv[1]) || argv[2][0] == '\0')
	{
		ft_putstr("Error accured!\n");
		exit(1);
	}
	pid = ft_atoi(argv[1]);
	if ((pid >= 0 && pid < 11))
	{
		ft_putstr("Error! PID not valid.");
		exit(1);
	}
	msg = argv[2];
	i = 0;
	while (msg[i])
	{
		send_signal(pid, msg[i]);
		i++;
	}
	return (0);
}
