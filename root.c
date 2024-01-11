
#include <stdio.h>
#include <math.h>

int main(){
  float a,b,c;
  
  printf("Enter the values: ");
  scanf("%f%f%f",&a,&b,&c);

  //square root formula

  float r1=((-b) + sqrt(b*b - 4 * a * c))/2*a;
  float r2=((-b) - sqrt(b*b - 4 * a * c))/2*a;

  printf("Square root 1: %f",r1);
  printf("Square root 2: %f",r2);

  return 0;



}