#include<stdio.h>

int x;
int recursion(int x,int n){
    if(n==0){
        return 1;
    }
    return x*recursion(x,n-1);
}
int main(){
    int n;
    scanf("%d",&x);
    scanf("%d",&n);
    int ans;
    if(n<=5){
     ans=recursion(x,n);
    }
    else{
        printf("n should be less than or equal to five");
    }
    printf("The answer is %d ",ans);
}