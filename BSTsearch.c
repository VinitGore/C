//Program to search a node in B.S.T.
#include<stdio.h>
int search(int [], int, int);
void main()
{
int T[]={20,12,31,6,18,28,36},i,r,k,len=7;

printf("Enter the key to search:");
scanf("%d",&k);
r=search(T,len,k);
if(r==-1)
printf("\nSearch Unsuccessful");
else
printf("Found");
}

int search(int T[], int len, int k)
{
int i=0,l,r;
while(i<len)
{
  l=2*i+1;
  r=2*i+2;
if(k==T[i])
return i;
if(k<T[i])
i=l;
else if(k>T[i])
i=r;
}
return -1;
}
