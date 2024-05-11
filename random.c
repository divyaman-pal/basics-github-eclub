#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    printf("enter principal", a);
    scanf("%d", &a);
    printf("enter rate", b);
    scanf("%d", &b);
    printf("enter time", c);
    scanf("%d", &c);
    printf("simple interest is %d", a*b*c/100);
    return 0;
}