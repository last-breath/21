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
struct card                    /*************�����ṹ����**********/
{char sort[10];char name[2];int point;int judge;};
struct card cards[]={{"spade","A",1,0},{"spade","2",2,0},{"spade","3",3,0},{"spade","4",4,0},{"spade","5",5,0},{"spade","6",6,0},
{"spade","7",7,0},{"spade","8",8,0},{"spade","9",9,0},{"spade","10",10,0},{"spade","J",10,0},{"spade","Q",10,0},{"spade","K",10,0},{"clubs","A",1,0},
{"clubs","2",2,0},{"clubs","3",3,0},{"clubs","4",4,0},{"clubs","5",5,0},{"clubs","6",6,0},{"clubs","7",7,0},{"clubs","8",8,0},{"clubs","9",9,0},
{"clubs","10",10,0},{"clubs","J",10,0},{"clubs","Q",10,0},{"clubs","K",10,0},{"hearts","A",1,0},{"hearts","2",2,0},{"hearts","3",3,0},{"hearts","4",4,0,},
{"hearts","5",5,0},{"hearts","6",6,0},{"hearts","7",7,0},{"hearts","8",8,0},{"hearts","9",9,0},{"hearts","10",10,0},{"hearts","J",10,0},{"hearts","Q",10,0},
{"hearts","K",10,0},{"diamonds","A",1,0},{"diamonds","2",2,0},{"diamonds","3",3,0},{"diamonds","4",4,0},{"diamonds","5",5,0},{"diamonds","6",6,0},
{"diamonds","7",7,0},{"diamonds","8",8,0},{"diamonds","9",9,0},{"diamonds","10",10,0},{"diamonds","J",10,0},{"diamonds","Q",10,0},{"diamonds","K",10,0}};      /************�����ṹ����***********/
char o;
do/****�ܿ���***/
{
  int x;
  char sump,sumb,op,ob,del;
  x=random();
  sump=cards[x].point;
  cards[x].judge=1;
  printf("\nPlayer,your first card is %10s %s\nDo you want to get another card(press the key)\n\"n\":No  else:Yes\n",cards[x].sort,cards[x].name);
  do{                        /******�ж����Ƿ��ù�*****/
  x=random();                /******�ж����Ƿ��ù�*****/
  }while(cards[x].judge==1); /******�ж����Ƿ��ù�*****/
  sumb=cards[x].point;
  cards[x].judge=1;
  ob=sai(sumb);

  do
 {
   /****player*****/
   op=getchar();   /***�ȴ�ָ��***/
   del=getchar();  /***�ȴ�ָ��***/
   if(op!='n')
   {
    do                         /***����***�ж����Ƿ��ù�*****/
     {                         /***����***�ж����Ƿ��ù�*****/
      x=random();              /***����***�ж����Ƿ��ù�*****/
     }while(cards[x].judge!=0);/***����***�ж����Ƿ��ù�*****/
    cards[x].judge=1;/***���Ʊ�Ϊ�ù�***/
    printf("\nPlayer,your card is %10s %s\n",cards[x].sort,cards[x].name);/*****�������****/
    sump+=cards[x].point;/***�����ܵ���***/
    if(sump>21)/****�ж��Ƿ���****/
     {         /****�ж��Ƿ���****/
       op='n'; /****�ж��Ƿ���****/
       ob='n'; /****�ж��Ƿ���****/
       printf("You burst!");
     }         /****�ж��Ƿ���****/
   }
   /****banker*****/
   if(ob!='n')      /***��������Ʋ���û˵ֹͣ��banker�����Ƿ����***/
    {ob=sai(sumb);   /***��������Ʋ���û˵ֹͣ��banker�����Ƿ����***/
     if(ob=='n')
     printf("Banker stopped\n.");/***������������ƣ����ֹͣ����***/
    }
   if(ob!='n')      /***��������Ʋ���������***/
   {
    do                           /****����**�ж����Ƿ��ù�*****/
       {                         /****����**�ж����Ƿ��ù�*****/
       x=random();               /****����**�ж����Ƿ��ù�*****/
       }while(cards[x].judge==1);/****����**�ж����Ƿ��ù�*****/
    cards[x].judge=1;/***���Ʊ�Ϊ�ù�***/
    sumb+=cards[x].point;/***�����ܵ���***/
    printf("Banker also got a card.\n");
     if(sumb>21)/****�ж��Ƿ���****/
       {        /****�ж��Ƿ���****/
        op='n'; /****�ж��Ƿ���****/
        ob='n'; /****�ж��Ƿ���****/
        printf("Banker burst!\n");
       }        /****�ж��Ƿ���****/
   }
   if(op!='n')                                                       /***Banker�����ƺ�ѯ���Ƿ�Ҫ��***/
   printf("Do you want to get another card?\n\"n\":NO  else:YES\n"); /***Banker�����ƺ�ѯ���Ƿ�Ҫ��***/
 }while(op!='n'|ob!='n');
printf("Player's point is %d,Banker's point is %d.\n",sump,sumb);
if(sump>21)     /***********compare************/
 {
     printf("Banker win!\n");
 }
 if(sumb>21)
 {
    printf("Player win!\n");
 }
 if(sump<22&sumb<22)
 {
   if(sump>sumb)
    printf("Player win!\n");
   if(sump<sumb)
    printf("Banker win!\n");
   if(sump==sumb)
    printf("Bush!\n");
 }             /**************compare*************/
  printf("\nWhat do you want to do?(press the key)\nq:end   else:continue\n");/***����***/
  o=getchar();/**���ؿ��Ʊ���**/
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
  int i;               /***ϴ��***/
  for(i=0;i<52;i++)    /***ϴ��***/
    cards[i].judge=0;  /***ϴ��0***/
}while(o!='q');/***����***/
return 0;
}
