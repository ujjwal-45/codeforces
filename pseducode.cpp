// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     while (+(+i--) != 0)// this is false,(i--) != 0, then decrement i -> -1, unary + is dummy operator
//         i = i + 5;
//     printf("%d", i);
// }

#include <stdio.h>
int func(int no)
{
    static int count = 0;
    count = count + no;
    return count;
}
int main()
{
    int i, j;
    for (i = 0; i <= 5; i++)
        j = func(i);
    printf("%d", j);
}