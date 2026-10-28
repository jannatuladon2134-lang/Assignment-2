#include<stdio.h>
int main(){
int N;
printf("enter your N:   ");
scanf("%d",&N);
int sum=0;
for(int i=1;i<=N;i++){
    sum+=i;
}

printf("%d",sum);
return 0;
}
