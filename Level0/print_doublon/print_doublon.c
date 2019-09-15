/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_doublon.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yijhuang <yijhuang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:09:39 by yijhuang          #+#    #+#             */
/*   Updated: 2019/09/12 22:06:04 by yijhuang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void print_doublon(int *a, int na, int *b, int nb)
{
    int ia = 0;
	int ib = 0;
	int first = 1;

	while (ia < na && ib < nb)  //在两个数组都有值的情况下
	{
		if (a[ia] == b[ib])  //如果相同的话就打印出来
		{
			if (first)
			{
				printf("%d", a[ia]);
				first = 0;
			}
			else
				printf(" %d", a[ia]);
			ia++;
			ib++;
		}
		else if (a[ia] < b[ib]) //如果不同的话，就走数字较小的那个数组的坐标
			ia++;
		else if (b[ib] < a[ia])
			ib++;
	}
    printf("\n"); 
}

