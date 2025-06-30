#include<unistd.h>

void ft_putchar(char c){
    write(1, &c , 1);
}


void ft_putnbr(int nb){

     char i;
   
  
    
   nb = nb + '0';
   i = nb ;
    ft_putchar(i);
    

}
int main (void){

   ft_putnbr(7);

   

}