#include <stdio.h>

int main(void)
{
  int n,i,j,ch,k;
  printf("Enter type of pattern(1 or 2)");
  scanf("%d",&ch);
  printf("Number of rows: ");
  scanf("%d",&n);
  if(ch==1)
  {
      for(i=0;i<n;i++)
      {
          for(j=0;j<=i;j++)
          {
              printf("#");
          }
          printf("\n");
      }
  }
  else if(ch==2)
  {
      for(i=0;i<=n;i++)
      {
          for(k=0;k<=(n-i);k++)
          {
              printf(" ");
          }
          for(j=0;j<=i-1;j++)
          {
              printf("#");
          }
          printf("\n");
      }
  }
  else
  {
      printf("Invalid choice");
  }
}
