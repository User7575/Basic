#include <stdio.h>
#include <string.h>


int main ()
{
    char *ptr = "hello world";

    //字符串常量？什么叫字符串常量
    //1.打印字符串的每一个字符
    //使用for循环的方式
#if 0
    int ien = strlen(ptr);
    char p = '0';
    for (int idx = 0; idx < strlen(ptr);idx++)
    {
        p = *ptr;
        printf("p:%c,idx:%d\n",p ,idx);
        ptr++;
    }

    //实现方式1
    int len = strlen(ptr);
    printf("len:%d\n",len);
    char p = '0';
    for (int idx = 0; idx < strlen(ptr);idx++)
    {
        p = *ptr;
        printf("p:%c,idx:%d\n",p ,idx);
        ptr++;
        printf("strlen:%ld\n",strlen(ptr));
    }
#elif 0
    //实现方式2
    while (*ptr != '\0')
    {
        printf("%c\t",*ptr);
        ptr++;
    }
    printf("\n");
#endif
    return 0;

}