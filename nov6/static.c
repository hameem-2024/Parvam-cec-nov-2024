#include<stdio.h>
void add(){
    static int a=0;
    a++;
    printf("%d\n",a);
}
int main(){
    add();
    add();
}