#include<stdio.h>

int C[3][3];
int *matlmul(int *, int *, int, int, int);
void main()
{
int A[][3]={1,2,3,4,5,6,7,8,9}, B[3][2]={9,8,7,6,5,4}, m, n, o, i, j;
int **r;
m=3; n=3; o=2;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);

for(i=0;i<n;i++)
for(j=0;j<o;j++)
scanf("%d",&B[i][j]);

r=(int *)matmul(A,B,m,n,o);

for(i=0;i<m;i++)
for(j=0;j<o;j++)
printf("%d\t",*(*(r+i)+j));
printf("\n");
}

int *matmul(int *A, int *B, int a, int b, int c)
{
  int i,j,k;

  for(i=0;i<a;i++)
  for(j=0;j<c;j++)
  {
    C[i][j]=0;
    for(k=0;k<b;k++)
    C[i][j]=C[i][j]+A[i][k]*B[k][j];
  }
  return(C);
}
