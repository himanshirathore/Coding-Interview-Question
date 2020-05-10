#include<stdio.h>

main()
{
      int n,i,a[n],mid,op1=0,op2=0,min;
      printf("enter no. of elements:");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      scanf("%d",&a[i]);
      }
      mid=n/2;
       for(i=0;i<mid;i++)
      {
                     op1=op1+a[i];
      }
        for(i=mid;i<mid-1;i++)
      {
                     op2=op2+a[i];
      }
      if(op2<op1)
      min=op1;
      else
      min=op2;
      printf("%d",min);
}
