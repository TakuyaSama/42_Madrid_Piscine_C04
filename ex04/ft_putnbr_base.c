/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 11:34:37 by adiaz-lo          #+#    #+#             */
/*   Updated: 2019/10/24 16:50:28 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_base(char *str)
{
	int result;

	result = 0;
	while (*str)
	{
		
		str++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

void 	ft_putnbr_base(int nbr, char *base)
{
	ft_check_base(base);
	if (ft_strlen(base) )
}
