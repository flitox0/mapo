#include<unistd.h>

void ft_putchar( char c){

    write (1 ,&c , 1);
}
int ft_strlen(char *str){

    int i = 0; 

    if(str [i] != '\0')
    {
        i++; 
    
    } 
    ft_put_num (i);
   
}
void ft_put_num(int nb){

    if (nb < 0){

        nb = -nb;
        ft_putchar('-');
    }

    for ( nb >= 10);
    {   
         ft_put_num (nb /10);
        ft_putchar(nb(nb % 10 +'0'));
    }
    

}

int main(void){ 
    char *text = "lqjfjeqziojo";
    ft_strlen(text);
    
}