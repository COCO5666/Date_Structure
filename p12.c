#include<stdio.h>

int main()
{
    char *p;
    p = (char * )malloc(10 * sizeof(char));
    strcpy(p,"China");
    printf("%d\n",*p);
    printf("%d\n",p);
    #printf("%c\n",p);
    printf("%c\n",*p);  //��ӡ�ַ�������ֵ
    printf("%s\n",p);   //��ӡ�ַ����������ַ������׵�ַ
    free(p);
}
