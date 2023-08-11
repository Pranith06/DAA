#include<stdio.h>
int main()
{
int i,j,count,temp,num[25];
 printf("how many numbers entered:");
 scanf("%d",&count);
 printf("Enter %d element:",count);
 for(i=0;i<count;i++)
 scanf("%d",&num[i]);
 for(i=0;i<count;i++){
 for(j=0;j<count;j++){
 if(num[i]>num[j]){
 temp=num[i];
 num[i]=num[j];
 num[j]=temp;
}
}
}
printf("sorted elements");
for(i=0;i<count;i++)
printf("%d",num[i]);
return 0;
}

