#include<stdio.h>
int main ()
{
    int num,sum=0;
    printf("Enter a number you want to sum ");
    printf("\n otherwise you are gay\n");
    scanf("%d", &num);
    for(int temp=num; temp!=0; temp /=10){
        sum += temp % 10;
    }
    printf("sum of digit""%d",sum);
    return 0;
}
