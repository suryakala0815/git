#include<stdio.h>
#include<stdlib.h>
int n=10,temp;
int main(){
int arr[10]={1,4,5,64,56,9,14,4,2,7};
int m=4;
/*
for(int i=0;i<n/2;i++)
{
{
temp=arr[i];
arr[i]=arr[n-i-1];
arr[n-i-1]=temp;
}
}
*/

for(int i=m-1;i>=0;i--)
{
printf("%d ",arr[i]);
}
for(int i=m;i<n;i++)
printf("%d ",arr[i]);

return 0;
}
