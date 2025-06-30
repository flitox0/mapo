#include <unistd.h>
void ft_putchar(char c)
{

    write(1, &c, 1);
}
void ft_putnum(int n)
{

    // if (n < 0)
    // { 

    //     ft_putchar('-');
    //     n = -n;
    // }
    if (n >= 10)
    {
        ft_putnum(n / 10);
    }
    ft_putchar((n % 10) + '0');
}

void print_array(int *tab, int size)
{
    int i= 0;
    while (i < size)
    {
        if (i != size)
        {
            ft_putchar(' ');
        }
        ft_putnum(&tab[i]);
        i++;
    }
}

// void ft_swap(int *a, int *b){
//     int swp;
//     swp = *a;
//     *a = *b;
//     *b =swp;
//}

        
    

void ft_rev_int_tab(int *ary, int s)
{
    int start = 0;
    int end = s - 1;
    
    while (start < end)
    {   start++;
        int r;
        r = start;
        start = end;
        end = r;
        end--;
    } 
   
      
}

int main(void)
{

    int ir[] = {3, 3, 9, 8, 4, 5};

    ft_rev_int_tab(ir, 6);
}