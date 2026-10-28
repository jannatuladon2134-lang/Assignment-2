#include<stdio.h>
int main(){
int n,i;
scanf("%d",&n);
if(n<=1){
    printf("not prime");
}
else{
    for(i=2;i<n;i++){
        if(n%i==0)
            break;
    }
    if(i==n){
        printf("prime");
    }
    else{
        printf("not prime");
    }
}

}
