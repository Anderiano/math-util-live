#include <stdio.h>
#include <iostream.h>
int main()
{
      int num;
      printf("Nhap tuoi cua ban: ");
      scanf("%d", &num);
      if (num <18)
      {
             printf("Ban khong du dieu kien bo phieu");
      }
      else
      {
             printf("Ban co the bo phieu!!");
      }
      return 0;
}