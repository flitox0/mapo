#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int s;
    int i;
    int g;

    for (g = 0; g <= 9; g++)
    {

        for (i = 0; i <= 9; i++)
        {

            for (s = 0; s <= 9; s++)
            {

                if (g < i && i < s)
                {
                    ft_putchar(g + '0');
                    ft_putchar(i + '0');
                    ft_putchar(s + '0');

                    if (!(g == 7 && i == 8 && s == 9))
                    {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                }
            }
        }
    }
}
int main(void)
{

    ft_print_comb();
}
