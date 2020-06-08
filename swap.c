#include <stdio.h>

int main()
{
    int x, y;
    printf("Please enter two numbers:\n");
    scanf("%d %d", &x, &y);
    printf("Before Swapping x = %d and y = %d",x,y);
    x= x+y;
    y= x-y;
    x= x-y;
    printf("\nAfter Swapping x = %d and y = %d",x,y);
    return 0;
}

