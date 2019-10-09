/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:05:19 by exam              #+#    #+#             */
/*   Updated: 2019/10/09 03:08:14 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void equation(int n)
{
	int a = 0;
	int b = 0;
	int c = 0;
	while(a < 10)
	{
		b = 0;
		while(b < 10)
		{
			c = 0;
			while (c < 10)
			{
				if ((a * 10 + b) + (c * 10 + a) == n)
				{			
					printf("A = %d", a);
					printf(" B = %d", b);
					printf(" C = %d\n", c);
				}
				c++;
			}
			b++;
		}
		a++;
	}

}

// int main ()
// {
// 	equation(42);
// 	printf("____\n");
// 	equation(111);
// 	printf("____\n");
// 	equation(0);
// 	return 0;
// }
