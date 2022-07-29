#include <stdio.h>

int *generateArray()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    return array;
}

int main()
{
    int *a = generateArray();
    printf("a is %p\n", a);
    printf("The first value is: %d\n", *(a + 0));
    printf("The first value is: %d\n", *(a + 1));
    printf("The first value is: %d\n", *(a + 2));
}