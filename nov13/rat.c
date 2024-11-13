#include<stdio.h>
int isSuffic(int n,int a[],int en)
{
    if(n==0)
    {
        return -2;
    }
    int total=0;
    {
        for(int i=0;i<n;i++)
        {
total=total=a[i];
        if(total>=en){
            return i+1;
        }
        
        return 0;
    }
}
}
int  main()
{
    int r;
    scanf("%d",&r);
    int u;
    scanf("%d",&u);
    int n;
     scanf("%d",&n);
     int a[10];
     for(int i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     int en=r*u;
     printf("%d",isSuffic(n,a,en));
}