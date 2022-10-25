#include<stdio.h>
int main()
{
int a[10],b[10],c[10],i,j,count=0,n,m;
printf("Enter the no.of element in set1 A:");
scanf("%d",&n);
printf("Enter the element in set A\n");
for(i=0;i<n;++i)
scanf("%d",&a[i]);
printf("Enter the no.of element in set2 B :");
scanf("%d",&m);
printf("Enter the element in set B\n");
for(i=0;i<m;++i)
scanf("%d",&b[i]);

for (i=0;i<n;++i)
 {
 for(j=0;j<m;++j)
  {
  if(a[i]==b[j])
  {
    c[count]=a[i];
    count++;
    break;
    }
  }
  }
printf("\nIntersection of two sets C is:");
printf("{");
for (i=0;i<count;++i)
printf("%d ",c[i]);
printf("}");
return 0;
}
