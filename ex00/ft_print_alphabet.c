#include <unistd.h>

void ft_putchar(char c){

	write(1,&c,1);
}
void ft_print_alphabet(void){
	char start;
	char end;

	start = 'a';
	end = 'z';

	while(start<=end){
		ft_putchar(start);
		start++;
	}
}


int main(void)
{

	ft_print_alphabet();
	return 0;
}
