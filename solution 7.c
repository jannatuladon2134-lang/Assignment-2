#include<stdio.h>
int main(){
int n,digit,revers=0;
printf("enter your n:   ");
scanf("%d",&n);
while(n!=0){
  digit=n%10;
  revers=revers*10+digit;
  n/=10;
}
printf("%d",revers);
return 0;
}
