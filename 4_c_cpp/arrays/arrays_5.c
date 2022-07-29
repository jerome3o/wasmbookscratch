#include <stdio.h>
#include <stdlib.h>

int *generateArray()
{
    int *array = (int *)malloc(sizeof(int) * 20);
    for (int i = 0; i < 20; i++)
    {
        array[i] = i;
    }
    return array;
}

int main()
{
    int *a = generateArray();
    printf("a is %p\n", a);
    printf("The first value is: %d\n", *(a + 0));
    printf("The first value is: %d\n", *(a + 1));
    printf("The first value is: %d\n", *(a + 2));

    free(a);
}