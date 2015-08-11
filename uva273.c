#include "stdio.h"
#include <string.h>
int main(){
    int t=0,i;
    char s[10000];
    while(gets(s)){
    int p=strlen(s);
    for(i=0;i<p;i++){
        if(s[i]=='"'){
            t+=1;
            if(t%2==0){
                printf("''");
            }
            else{printf("``");// printf("%c",s[i]);}
        }}
        else{
        printf("%c",s[i]);}
    }
    printf("\n");}
    return 0;
}
