#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j=0,k,AmNo=0,no;
  printf("Enter any no. :");
  scanf("%d",&no);
  AmNo=no;
  while (k!=0) {
    k=no%10;
    no=no/10;
    j=j+(k*k*k);
  }
  printf("Sum of given no. => %d\n",j);
  if (j==AmNo) {
    printf("Given No => %d is Armstrong no.\n",AmNo);
  }
    else{
      printf("given number is not a arm number");
    }

  getch();
}
