/**********************************
�������ƣ�random
�������ܣ�����һ����1��52�������
������������
��������ֵ�������������
***********************************/
int main(void)
{
    int x;
    srand(time(null));
    x=rand();
    x=x%52+1;
    return x;
}