/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plnyakan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 08:47:19 by plnyakan          #+#    #+#             */
/*   Updated: 2020/07/12 08:57:20 by plnyakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plnyakan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 08:46:43 by plnyakan          #+#    #+#             */
/*   Updated: 2020/07/12 08:46:43 by plnyakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){

	write(1,&c,1);
}

void ft_print_digits(char a,char b){

	ft_putchar(a);
	ft_putchar(b);

	ft_putchar(',');
}

void ft_print_comb2(void){

	char a ='0';
	char b ='0';

	while(a<='9'){
		while(b<='9'){
			if (a<b){
				ft_print_digits(a,b);
			}
			b++;
		}
		b='0';
		a++;
	}
}

int main(void){

	ft_print_comb2();

	return 0;
}

