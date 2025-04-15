#include<stdio.h>
int main(){

        int n;
        scanf("%d",&n);
        unsigned long long res=1;
        if(n==0){
            printf("1");
        }else if(n==1){
            printf("1");
        }else{
            for(int i=1;i<=n;i++){
                res=res*i;
            }
            printf("%llu",res);
        } 
        






    return 0;
}