#include<stdio.h>
int main(){
    int acute,right,obtuse,wrong;
    acute=right=obtuse=wrong=0;
    for(int i=0;i<5;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int sum=a+b+c;
        if(sum==180){
            if(a<90 && b<90 && c<90){
                acute++;
            }
            else if(a==90 || b==90 || c==90){
                right++;
            }
            else{
                obtuse++;
            }
        }
        else if(sum!=180){
            wrong++;
            printf("Wrong entry try again\n");
            i--;
        }
    }
    printf("Acute Angled Triangle:%d\nRight Angled Triangle:%d\nObtuse Angled Triangle:%d\nWrong Entries:%d\n",acute,right,obtuse,wrong);
}