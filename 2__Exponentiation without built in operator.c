#include<stdio.h>
int main(){
        int n;
        int num;
        int expo=1;
        //logic for taking input
        scanf("%d",&num);
        scanf("%d",&n);
        
        //logic for special case
        
        if(n==0){
            printf("%d",1);
        }else if(n==1){
            printf("%d",num);
        }else if(n>0){
                //logic for exponentiation
          for(int i=0;i<n;i++){
           expo=expo*num;
           

          }
          printf("%d",expo);
    
        }
      }
       
      
    return 0;
}