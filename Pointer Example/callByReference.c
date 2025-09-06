#include <stdio.h>

void change(int *c, int *d); // function prototype

int main()
{
    int a = 90;
    int b = 67;
    printf(
        "Before Function line Execute:- \n"
        "a: %d\n"
        "b: %d\n",
        a, b);

    change(&a, &b);

    printf(
        "After Function line Execute:- \n"
        "a: %d\n"
        "b: %d\n",
        a, b);
    return 0;
}

void change(int *c, int *d)
{
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
    printf("%d\n", temp);
    printf("%d\n", *c);
}


// good code working without any problem