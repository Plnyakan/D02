/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plnyakan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:21:11 by plnyakan          #+#    #+#             */
/*   Updated: 2020/07/10 11:28:10 by plnyakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){

	write(1,&c,1);

}

void ft_print_numbers(void){

	char num1='1';
	char num2='9';

	while(num1<=num2){

		ft_putchar(num1);

		num1++;
	
	}
}

int main(void){

	ft_print_numbers();

	return 0;

}
