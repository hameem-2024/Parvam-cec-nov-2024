#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            for(int k=1;k<=i;k++){
            printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}