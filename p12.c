#include<stdio.h>

int main()
{
    char *p;
    p = (char * )malloc(10 * sizeof(char));
    strcpy(p,"China");
    printf("%d\n",*p);
    printf("%d\n",p);
    #printf("%c\n",p);
    printf("%c\n",*p);  //打印字符传的是值
    printf("%s\n",p);   //打印字符串传的是字符串的首地址
    free(p);
}
