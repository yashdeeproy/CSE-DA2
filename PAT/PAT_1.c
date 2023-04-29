#include<stdio.h>

int checkPerfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        return 1;
    }
    else{
        return 0;
    }
}
int checkArmstrong(int n){
    int temp=n;
    int armstrong=0;
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum+=(digit*digit*digit);
        n=n/10;
    }
    if(temp==sum){
        armstrong=1;
    }
    return armstrong;
}
int checkPrime(int n){
    int prime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
        }
    }
    return prime;
}

int main(){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("Not prime\n");
    }
    if(checkPrime(n)){
        printf("Prime\n");
    }
    else{
        printf("Not prime\n");
    }

    if(checkArmstrong(n)){
        printf("Armstrong\n");
    }
    else{
        printf("Not armstrong\n");
    }

    if(checkPerfect(n)){
        printf("Perfect");
    }
    else{
        printf("Not perfect");
    }
}