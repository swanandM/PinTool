/*NO LEGAL*/

#include <stdio.h>


int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int Sum = 0;

int main()
{
    int i;

    printf("Hello world\n");
    for (i = 0;  i < 10;  i++)
        Sum += A[i];

    printf("Sum is %d\n", Sum);
    return 0;
}
