#include <stdio.h>
int main(){
    int n, i;
    float sum = .0;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    sum = sum+(1/i);}
    printf("the series is :%f",sum);

return 0;
}