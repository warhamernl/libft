/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mlokhors <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 15:53:38 by mlokhors      #+#    #+#                 */
/*   Updated: 2019/03/21 19:09:41 by mlokhors      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

/*
** Copied from the internet, don't worry
*/

void	*ft_memset(void *str, int ch, size_t len)
{
	if (str != NULL && len > 0)
	{
		unsigned char *a;

		a = str;
		while (len > 0)
		{
			*a = (unsigned char)ch;
			a++;
			len--;
		}
	}
	return (str);
}
 int	main(void)
{
	char a[]="as is niet vie tol";
	int b= 36;
	size_t c = 3;
	ft_memset(a, b, c);
	printf("%s",a);
}

"hello, world"
memcpy(&s1[7], "apple", ft_strlen("apple"));
"hello, \0\0\0\0\0"
