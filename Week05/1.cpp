#include"SqString.cpp"
int main()
{
    SqString s,s1,s2,s3,s4;
    int i;
    char a[20],b[20];
    printf("����������s:\n");
    scanf("%s",a);
    printf("�������Ӵ�s1:\n");
    scanf("%s",b);
    StrAssign(s,a);
    StrAssign(s1,b);
    printf("˳�򴮵Ļ����������£�\n");
    printf("    ��1��������s�ʹ�s1\n");
    printf("    ��2�������s:");DispStr(s);
    printf("    ��3����s�ĳ���Ϊ%d��\n",StrLength(s));
    printf("    ��4���ڴ�s�ĵ�9���ַ�λ�ò��봮s1����s2\n");
    s2=InsStr(s,9,s1);
    printf("    ��5�������s2:");DispStr(s2);
    printf("    ��6��ɾ����s��2���ַ���ʼ��3���ַ���������s2\n");
    s2=DelStr(s,2,3);
    printf("    ��7�������s2��");DispStr(s2);
    printf("    ��8������s��2�ַ���ʼ��5���ַ��滻�ɴ�s1��������s2\n");
    s2=RepStr(s,2,5,s1);
    printf("    ��9�������s2:");DispStr(s2);
    printf("    ��10����ȡ��s�ĵ�2���ַ���ʼ��10���ַ���������s2\n");
    s3=SubStr(s,2,10);
    printf("    ��11�������s3:");DispStr(s3);
    printf("    ��12������s1��s2����������������s4\n");
    s4=Concat(s1,s2);
    printf("    ��13�������s4��");DispStr(s4);
}
