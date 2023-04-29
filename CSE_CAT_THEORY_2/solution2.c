#include<stdio.h>
#include<string.h>
int main(){
    char word[100];
    int upper,lower,digits,space,special;
    upper=lower=digits=space=special=0;
    fgets(word,100,stdin);
    int n=strlen(word);
    for(int i=0;i<n;i++){
        if(word[i]>='A' && word[i]<='Z'){
            printf("Uppercase %c\n",word[i]);
            upper++;
        }
        else if(word[i]>='a' && word[i]<='z'){
            printf("Lowercase %c\n",word[i]);
            lower++;
        }
        else if(word[i]>='0' && word[i]<='9'){
            printf("Digits %c\n",word[i]);
            digits++;
        }
        else if(word[i]==' '){
            printf("Space \n");
            space++;
        }
        else if(i==n-1){
            break;
        }
        else{
            printf("Special %c\n",word[i]);
            special++;
        }
    }
    int arr[]={upper,lower,digits,space,special};
    printf("Uppercase:%d\nLowercase:%d\nDigits:%d\nSpace:%d\nSpecial:%d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
}