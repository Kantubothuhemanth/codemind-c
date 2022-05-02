#include<stdio.h>
int main()
{
    int n,a[100],i,h=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int min=a[0];
    for(i=0;i<n;i++)
    {
    if(min>a[i])
    min=a[i];
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%min==0)
    {
        h++;
        }
    else
    {
            min-=1;
            i=0;
    }
    }
    if (h=n)
    {
        printf("%d",min);
    }
    return 0;
}