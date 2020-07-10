/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plnyakan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:12:15 by plnyakan          #+#    #+#             */
/*   Updated: 2020/07/10 12:23:10 by plnyakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){

	write(1,&c,1);

}

void ft_is_negative(int n){



	if (n<0){
	ft_putchar('N');
	}else 
	if(n>=0){
		ft_putchar('P');
	}

}

int main(void){

	ft_is_negative (-2);

return 0;
}
