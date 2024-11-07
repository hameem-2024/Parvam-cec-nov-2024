#include<stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i%3==0 && i%5==0){
        printf("true");
    }
    else{
        printf("false");
    }
}