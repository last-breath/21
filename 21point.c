#include "stdio.h"
int main(void)
{
 char order;
 printf("What do you want to do?(press the key)\nq:end   else:continue\n");
 while (order!='q')
 {
 order=getchar();
 switch (order)
    {
    case 'n':
         printf("not bad,continue\n");
         break;
    case 'y':
         printf("ok,continue\n");
         break;
    default:
         break;
    }
 }
 return 0;
}
