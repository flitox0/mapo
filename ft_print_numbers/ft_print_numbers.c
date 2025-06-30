#include<unistd.h>
void ft_putchar(char c){

    write (1, &c, 1);
}

void ft_print_numbers(void){

    int r ;
    r = r + '0';
    while(r <= '9' ){
        ft_putchar(r);
        r++;
    }
}
int main(){
    ft_print_numbers(2);
}