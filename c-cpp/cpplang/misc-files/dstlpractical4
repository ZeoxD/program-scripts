#include <stdio.h>

void symm_diff(int* ,int*, int, int);

int main()
{
int n1, n2, i, j;
printf("\nEnter the no. of elements in first & second array respectively");
scanf("%d %d",&n1,&n2);
int a[n1], b[n2];
int* res1;
printf("\nEnter the elements in first array");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter the elements in second array");
for(j=0;j<n2;j++)
{
scanf(" %d",&b[j]);
}
symm_diff(a, b, n1, n2);


}

void symm_diff(int* a, int* b, int n1, int n2)
{
int i, j, k = 0, o, l = 0, m =0, flag;
int c[n1+n2], d[n1+n2], s[n1+n2];
for(i=0;i<n1;i++)
{
c[k++] = a[i];
}
for(j=0;j<n2;j++)
{
o = 0;
for(i=0;i<n1;i++)
{
if(a[i] == b[j])
{
o = 1;
break;
}
}
if(o == 0)
{
c[k++] = b[j];
}
}
for(i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
if(a[i] == b[j])
{
d[l++] = a[i];
}
}
}
for(i=0;i<k;i++)
{
for(j=0;j<l;j++)
{
if(c[i] == d[j])
{
flag = 1;
break;
}
else
{
flag = 0;
}
}
if(flag == 1)
{
continue;
}
else
{
s[m++] = c[i];
}
}
printf("\nSymmetric Difference of sets is\n");
for(i=0;i<m;i++)
{
printf(" %d",s[i]);
}
}