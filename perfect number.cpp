#include<stdio.h>

int main ()
{
    int i,num, sum = 0;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i = 1; i < num; i++){
        if(num % i == 0)
            sum = sum + i;
    }
    
    if(sum == num)
        printf("%d is a perfect number",num);
    else
        printf("%d is not a perfect number",num);
}
