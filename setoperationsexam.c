#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],c[10],i=0,j=0,k=0,m=0,n=0;
printf("Enter the size of the 1st array \n");
scanf("%d",&m);
printf("Enter the elements \n");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the size of the 2nd array \n");
scanf("%d",&n);
printf("Enter the elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
i=0;
j=0;
while((i<m)&&(j<n))
{
if(a[i]<=b[j])
{
c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
printf("First array is \n");
for(i=0;i<m;i++)
{
printf("%d \n",a[i]);
}
printf("Second array is \n");
for(i=0;i<n;i++)
{
printf("%d \n",b[i]);
}
printf("union of two arrays are\n");
for(i=0;i<m+n;i++)
{
printf("%d \n",c[i]);
}
printf("Enter the size of the 1st array");
scanf("%d",&m);
printf("Enter the elements");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the size of the 2nd array \n");
scanf("%d",&n);
printf("Enter the elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
i=0;
j=0;
printf("intersection is \n");
for(i=0;i<m;i++)
{
for(i=0;i<n;i++)
{
if(a[i]==b[i])
{
printf("%d \n",a[i]);
}
}
}
printf("Difference is \n");
i=0;j=0;
for(i=0;i<m;i++)
{
for(i=0;i<n;i++)
{
a[i]=a[i]-b[j];
printf("%d",a[i]);
}
}
}




