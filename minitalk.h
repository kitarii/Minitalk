/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <ktiyari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:48:18 by ktiyari           #+#    #+#             */
/*   Updated: 2025/02/03 18:10:23 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define MINITALK_H

# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

void	send_signal(int pid, char c);
void	sighandler(int sig);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
int		ft_isdigit(char *str);
int		ft_atoi(const char *str);

#endif
