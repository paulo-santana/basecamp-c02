/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:36:58 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/07 20:37:30 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanumeric(char c)
{
	if ((c >= '0' && c <= '9') ||
		(c >= 'A' && c <= 'Z') ||
		(c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int		is_lower_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		is_upper_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || !is_alphanumeric(str[i - 1]))
		{
			if (is_lower_alpha(str[i]))
			{
				str[i] = str[i] - 32;
			}
		}
        else
		{
			if (is_upper_alpha(str[i]))
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}
