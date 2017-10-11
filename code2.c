#include "stdio.h"
#include "time.h"
int random(void)
{
    int x;
    x=rand();
    x=x%52+1;
    return x;
}
int main(void)
{
srand(time(NULL));
struct card                    /*************声明结构数组**********/
{char sort[10];char name[2];int point;};
struct card cards[]={{"spade","A",1},{"spade","2",2},{"spade","3",3},{"spade","4",4},{"spade","5",5},{"spade","6",6},
{"spade","7",7},{"spade","8",8},{"spade","9",9},{"spade","10",10},{"spade","J",10},{"spade","Q",10},{"spade","K",10},
{"clubs","A",1},{"clubs","2",2},{"clubs","3",3},{"clubs","4",4},{"clubs","5",5},{"clubs","6",6},{"clubs","7",7},{"clubs","8",8},{"clubs","9",9},
{"clubs","10",10},{"clubs","J",10},{"clubs","Q",10},{"clubs","K",10},{"hearts","A",1},{"hearts","2",2},{"hearts","3",3},{"hearts","4",4},{"hearts","5",5},
{"hearts","6",6},{"hearts","7",7},{"hearts","8",8},{"hearts","9",9},{"hearts","10",10},{"hearts","J",10},{"hearts","Q",10},{"hearts","K",10},
{"diamonds","A",1},{"diamonds","2",2},{"diamonds","3",3},{"diamonds","4",4},{"diamonds","5",5},{"diamonds","6",6},{"diamonds","7",7},{"diamonds","8",8},
{"diamonds","9",9},{"diamonds","10",10},{"diamonds","J",10},{"diamonds","Q",10},{"diamonds","K",10}};      /************声明结构数组***********/
char o;             /****声明游戏开关o****/
do                  /*****控制是否继续************/
{
  int player,banker,sump,sumb,x;   /***声明游戏局部变量***/
  char order,del;                  /******声明发牌控制开关order与清除回车字符所用变量del*****/
  x=random();                      /****************player****************/
  printf("player,your card is %s %s\n",cards[x].sort,cards[x].name);
  sump=cards[x].point;
  do
 {
  printf("Do you want to get another card?(press the key)\n \"n\":No  else:Yes\n");
  order=getchar();
  switch (order)
    {
    case 'n':
         del=getchar();
         break;
    default:
         x=random();
         printf("\nplayer,your card is %s %s.\n",cards[x].sort,cards[x].name);
         sump+=cards[x].point;
         del=getchar();
         break;
    }
  }while(order!='n'&sump<22);      /************player************/

  x=random();                    /********banker****************/
  printf("\nbanker,your card is %s %s\n",cards[x].sort,cards[x].name);
  sumb=cards[x].point;
  do
   {
     printf("Do you want to get another card?(press the key)\n \"n\":No  else:Yes\n");
     order=getchar();
     switch (order)
     {
      case 'n':
         del=getchar();
         break;
      default:
         x=random();
         printf("banker,your card is %s %s.\n",cards[x].sort,cards[x].name);
         sumb+=cards[x].point;
         del=getchar();
         break;
     }
   }while(order!='n'&sumb<22);      /***********banker************/
 if(sump>21)     /***********compare************/
 {
     printf("player lose!banker win!\n");
 }
 if(sumb>21)
 {
    printf("banker lose!player win!\n");
 }
 if(sump<22&sumb<22)
 {
   if(sump>sumb)
    printf("player win!\n");
   if(sump<sumb)
    printf("banker win!\n");
   if(sump=sumb)
    printf("bush!");
 }             /**************compare*************/
printf("What do you want to do?(press the key)\nq:end   else:continue\n");
o=getchar();
switch (o)
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
}while(o!='q');
return 0;
}
