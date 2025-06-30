// #include <unistd.h>

// void ft_putchar(char c)
// {

//     write(1, &c, 1);
// }

// void ft_putnum(int n)
// {

//     if (n < 0){
//         ft_putchar('-');
//          n = -n;

//     }

//     if (n >= 10)
//     {
//         ft_putnum(n / 10);
//     }
//     ft_putchar(n % 10 + '0');
// }

// int main(void)
// {

//     ft_putnum(34234324);
// }




# include<stdio.h>
int main (void){

int *tab[]={9,7,6,5,4,4,4};
int size = 7;

    
    int furst = 0;
  
    int save ;
    while (furst <= size) {
       
        size -- ;
        
        // save = size;
        // size = furst;
        // furst = save;
        // furst ++;
       
      printf("%d",tab[size]);
     }
    }