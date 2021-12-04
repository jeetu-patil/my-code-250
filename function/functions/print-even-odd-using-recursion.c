// print all even or odd number using recursion..
#include<stdio.h>
void printevenodd(int upper,int lower);
int main(){
    int upper,lower=1;
    printf("enter upper limit\n");
    scanf("%d",&upper);
    printevenodd(upper,lower);
}
void printevenodd(int u,int l)
{
     if(l>u)
         return;
    
     if(l%2==0){
         printf("%d number is even\n",l);
     }  
     else
         printf("%d number is odd\n",l);    
     printevenodd(u,++l);
}