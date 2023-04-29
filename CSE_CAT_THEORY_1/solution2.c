#include<stdio.h>

int main(){
    int sum=0;
    for(int i=1000;i<1000;i=i+2){
        sum+=i;
    }
    int ans=0;
    while(sum!=0){
        int dig=sum%10;
        ans+=dig;
        sum=sum/10;
    }
    printf("The number is %d",ans);
    if((ans%2)==0){
        printf("Odd found");
    }
    else{
        printf("Even found");
    }
}