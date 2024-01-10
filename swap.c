#include<stdio.h>

int main(){
 
    int a,b;
    int c;

    printf("Enter the number of a: ");
    scanf("%d",&a);

    printf("Enter the number of b: ");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c ;

    printf("After the swapping the number a %d and b %d",a,b);

    return 0;

}
