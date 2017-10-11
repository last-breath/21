#include "stdio.h"
#include "time.h"
int random(void)
{
    int x;
    x=rand();
    x=x%52+1;
    return x;
}
char sai(int(sumb))
{
    if (sumb<=17)
    return 'y';
    else
    return 'n';
}

int main(void)
{
srand(time(NULL));
struct card                    /*************声明结构数组**********/
{char sort[10];char name[2];int point;int judge;};
struct card cards[]={{"spade","A",1,0},{"spade","2",2,0},{"spade","3",3,0},{"spade","4",4,0},{"spade","5",5,0},{"spade","6",6,0},
{"spade","7",7,0},{"spade","8",8,0},{"spade","9",9,0},{"spade","10",10,0},{"spade","J",10,0},{"spade","Q",10,0},{"spade","K",10,0},{"clubs","A",1,0},
{"clubs","2",2,0},{"clubs","3",3,0},{"clubs","4",4,0},{"clubs","5",5,0},{"clubs","6",6,0},{"clubs","7",7,0},{"clubs","8",8,0},{"clubs","9",9,0},
{"clubs","10",10,0},{"clubs","J",10,0},{"clubs","Q",10,0},{"clubs","K",10,0},{"hearts","A",1,0},{"hearts","2",2,0},{"hearts","3",3,0},{"hearts","4",4,0,},
{"hearts","5",5,0},{"hearts","6",6,0},{"hearts","7",7,0},{"hearts","8",8,0},{"hearts","9",9,0},{"hearts","10",10,0},{"hearts","J",10,0},{"hearts","Q",10,0},
{"hearts","K",10,0},{"diamonds","A",1,0},{"diamonds","2",2,0},{"diamonds","3",3,0},{"diamonds","4",4,0},{"diamonds","5",5,0},{"diamonds","6",6,0},
{"diamonds","7",7,0},{"diamonds","8",8,0},{"diamonds","9",9,0},{"diamonds","10",10,0},{"diamonds","J",10,0},{"diamonds","Q",10,0},{"diamonds","K",10,0}};      /************声明结构数组***********/
char o;
do/****总开关***/
{
  int x;
  char sump,sumb,op,ob,del;
  x=random();
  sump=cards[x].point;
  cards[x].judge=1;
  printf("\nPlayer,your card is %10s %s\nDo you want to get another card(press the key)\n\"n\":No  else:Yes\n",cards[x].sort,cards[x].name);
  op=getchar();
  del=getchar();
  do{                        /******判断牌是否被用过*****/
  x=random();                /******判断牌是否被用过*****/
  }while(cards[x].judge==1); /******判断牌是否被用过*****/
  sumb=cards[x].point;
  cards[x].judge=1;

  do
 {
   /****player*****/
   do
   {
      printf("\nPlayer,your card is %10s %s\n",cards[x].sort,cards[x].name);
      sump+=cards[x].point;/***计算总点数***/
      if(sump<22)
      printf("Do you want to get another card?(press the key)\n \"n\":No  else:Yes\n");
      if(sump>21)/****判断是否爆牌****/
        {        /****判断是否爆牌****/
         op='n'; /****判断是否爆牌****/
         ob='n'; /****判断是否爆牌****/
        }        /****判断是否爆牌****/
      else
      { op=getchar();
        del=getchar();
        if(op!='n')
         {
          do                          /******判断牌是否被用过*****/
            {                         /******判断牌是否被用过*****/
            x=random();               /******判断牌是否被用过*****/
            }while(cards[x].judge==1);/******判断牌是否被用过*****/
          cards[x].judge=1;/***将牌变为用过***/
         }
      }
   }while(op!='n');
   /****banker*****/
   do
   {
      sumb+=cards[x].point;/***计算总点数***/
      cards[x].judge=1;/***将牌变为用过***/
      if(sumb>21)/****判断是否爆牌****/
        {        /****判断是否爆牌****/
         op='n'; /****判断是否爆牌****/
         ob='n'; /****判断是否爆牌****/
        }        /****判断是否爆牌****/
      else
      {
          ob=sai(sumb);
          if(ob!='n')
          {
              do                           /******判断牌是否被用过*****/
                 {                         /******判断牌是否被用过*****/
                 x=random();               /******判断牌是否被用过*****/
                 }while(cards[x].judge==1);/******判断牌是否被用过*****/
              cards[x].judge=1;/***将牌变为用过***/
          }

      }
   }while(ob!='n');
 }while(op!='n'|ob!='n');
 printf("Player's point is %d,banker's point is %d.\n",sump,sumb);




if(sump>21)     /***********compare************/
 {
     printf("banker win!\n");
 }
 if(sumb>21)
 {
    printf("player win!\n");
 }
 if(sump<22&sumb<22)
 {
   if(sump>sumb)
    printf("player win!\n");
   if(sump<sumb)
    printf("banker win!\n");
   if(sump==sumb)
    printf("bush!\n");
 }             /**************compare*************/
  printf("\nWhat do you want to do?(press the key)\nq:end   else:continue\n");/***开关***/
  o=getchar();/**开关控制变量**/
  del=getchar();
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
  int i;               /***洗牌**/
  for(i=0;i<52;i++)    /***洗牌**/
    cards[i].judge=0;  /***洗牌**/
}while(o!='q');/***开关***/
return 0;
}
