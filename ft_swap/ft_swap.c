void ft_swap(int *a, int *b)
{
    int i = *a;
    *a = *b;
    *b = i;
}
#include <stdio.h>
int main(void)
{
    int r = 2, o = 3;

    ft_swap(&r, &o);

    printf("%d%d", r, o);
}