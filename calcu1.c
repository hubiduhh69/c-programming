//simple calculator for +,-,* and / for two numbers using if else
#include<stdio.h>
int main()
{
  float a,b,r;
  char op;
  printf("\n\n--------------------------------------");
  printf("\nEnter 1st number:::  ");
  scanf("%f",&a);
  printf("\nEnter 2nd number:::  ");
  scanf("%f",&b);
  printf("\n---------------------------------------");
  printf("\nWhich operator do you want to choose?+,-,*or/  ");
  scanf(" %c",&op);
  getchar();
  if(op=='+'){
    r=a+b;
    printf("\nThe result is %f",r);
  }
  else if(op=='-'){
    r=a-b;
    printf("\nThe result is %f",r);
  }
  else if(op=='*'){
    r=a*b;
    printf("\nThe result is %f",r);
  }
  else if(op=='/'){
    if(b==0){
      printf("\nThe result is invalid");
    }
    else{
      r=a/b;
    printf("\nThe result is %f",r);
    }
  }
  else{
    printf("The input is invalid");
  }
return 0;
}