#include<unistd.h>

void ft_poutchar(char c){

    write (1, &c, 1);

}

void ft_is_negative(int n){
     if (n < 0){
        ft_poutchar('N');

     }
     if (n >= 0){
        ft_poutchar('P');
     }
}

int main (void){

    ft_is_negative(7);
}