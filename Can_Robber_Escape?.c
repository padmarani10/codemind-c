#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==1)
        {
            s++;
        }
    }
    if(s>2)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}