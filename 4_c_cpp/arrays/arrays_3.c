#include <stdio.h>

void generateArray()
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *a = array;
    printf("a is %p\n", a);
    printf("array is %p\n", array);
    printf("The first value is: %d\n", *(a + 0));
    printf("The first value is: %d\n", *(a + 1));
    printf("The first value is: %d\n", *(a + 2));

    printf("The first value is: %d\n", *(array + 0));
    printf("The first value is: %d\n", *(array + 1));
    printf("The first value is: %d\n", *(array + 2));
}

int main()
{
    generateArray();
}