#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
    ft_putchar((nb % 10) + '0');
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
        ft_putnbr(tab[i]);
        i++;
    }
}

int ft_rev_int_tab(int *tab, int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp;
        temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;
        start++;
        end--;
    }
}
int main(void)
{
    int g[] = {926, 564, 448, 433, 443};
    int j = 5;
    ft_rev_int_tab(g, j);
    print_array(g, j);
}
