#include "stdio.h"
int main(){
int m,n,j,i;
while((scanf("%d %d",&m,&n))==2){
    int s=0;
    if(m>n){
        m=m+n;
        n=m-n;
        m=m-n;
    }
    for(i=m;i<=n;i++){
        int c=1;
        j=i;
        while(j>1){
            if(j%2==0){
                j/=2;}
            else{
                j=3*n+1;}
            c++;
        }
        if(c>=s){s=c;}
    }
    printf(" %d\n",s);
}
return 0;
}
