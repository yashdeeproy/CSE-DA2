#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n=5;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=(fact(i)/i);
    }
    printf("%d",sum);
}