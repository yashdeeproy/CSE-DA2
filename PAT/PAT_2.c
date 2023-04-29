#include<stdio.h>
int main(){
    char ch[50]="*Nothing is impossible in this world.";
     int vowel=0;
     int cons=0;
     int space=0;
     int special=0;
     for(int i=0;i<37;i++){
        if((ch[i]>'a' && ch[i]<'z') || (ch[i]>'A' && ch[i]<'Z')){
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' ||ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]== 'O' || ch[i]=='U' ){
            vowel++;
        }
        else{
            cons++;
        }

     }
     else{
        if(ch[i]==' '){
            space++;
        }
        else{
            special++;
        }
     }
}
    printf("Words = %d\n",space+1);
    printf("Vowels = %d\n",vowel);
    printf("Consonants = %d\n",cons);
    printf("Space = %d\n",space);
    printf("Special Characters = %d",special);
}