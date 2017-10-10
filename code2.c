#include "stdio.h"
int main(void)
{
struct card
{char sort[10];char name[2];int point;};
struct card cards[]={{"spade","A",1},{"spade","2",2},{"spade","3",3},{"spade","4",4},{"spade","5",5},{"spade","6",6},
{"spade","7",7},{"spade","8",8},{"spade","9",9},{"spade","10",10},{"spade","J",10},{"spade","Q",10},{"spade","K",10},
{"clubs","A",1},{"clubs","2",2},{"clubs","3",3},{"clubs","4",4},{"clubs","5",5},{"clubs","6",6},{"clubs","7",7},{"clubs","8",8},{"clubs","9",9},
{"clubs","10",10},{"clubs","J",10},{"clubs","Q",10},{"clubs","K",10},{"hearts","A",1},{"hearts","2",2},{"hearts","3",3},{"hearts","4",4},{"hearts","5",5},
{"hearts","6",6},{"hearts","7",7},{"hearts","8",8},{"hearts","9",9},{"hearts","10",10},{"hearts","J",10},{"hearts","Q",10},{"hearts","K",10},
{"diamonds","A",1},{"diamonds","2",2},{"diamonds","3",3},{"diamonds","4",4},{"diamonds","5",5},{"diamonds","6",6},{"diamonds","7",7},{"diamonds","8",8},
{"diamonds","9",9},{"diamonds","10",10},{"diamonds","J",10},{"diamonds","Q",10},{"diamonds","K",10}};
int k;
for(k=1;k<51;k++)
    printf("%s\t%s\t%d\n",cards[k].sort,cards[k].name,cards[k].point);
return 0;
}
