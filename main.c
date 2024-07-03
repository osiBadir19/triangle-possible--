#include <stdio.h>

int main() {
    int a, b, c;
    printf("please enter value of a, b, c (separated by space): ");
    scanf("%d %d %d", &a, &b, &c);

    if (((a + b) > c) || ((a + c) > b) || ((b + c) > a)){
        printf("Yes we can\n");
    }
    else    
        printf("No we can't\n");


    return 0;
}
