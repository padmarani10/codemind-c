#include <stdio.h>
int arrysum(int arr[], int n)
{
    int s = 0, idx = 0;
label:
s += arr[idx++];
if (idx < n) {
    goto label;
}
return s;
    
} 
int main()
{
    int n,k,i,s= 0;
scanf("%d",&n);
int arr[n];
for(i =0;i<n;i++){
    scanf("%d",&k); 
arr[i] =k;
}
s = arrysum(arr, n); 
printf("%d", s);

    
}