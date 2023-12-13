#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 32


// 指针/ 
int main ()
{
#if 0
    //指针怎么定义
    //基础数据类型
    //建议（tips）：定义变量（任意类型）记得初始化
    int a = 0;
    long b = 0;

    //指针的定义
    int *p = NULL;

#endif


#if 0
    //指针的使用:指针内存存放的是某变量的地址

    int a = 5;
    int *p = &a;

    printf ("a:%d\n",a);
    printf ("&a:%p\n",&a);
    printf ("*(&a):%d\n",*(&a));
    printf ("*p:%d\n",*p);
    printf ("p:%p\n",p);
    printf ("&p:%p\n",&p);
#endif
#if 0
    int *ptr  = &p;
    printf ("ptr:%p\n",ptr);


    int **ptr = &p;
    printf("ptr:%p\n",ptr);
    printf("*ptr:%p\n",*ptr);
    printf("*(*ptr):%d\n",*(*ptr));



#endif
#if 0

    int a = 10;
    int len = sizeof(a);
    printf("len:%d\n",len);

    char p = 97;
    len = sizeof(p);
    printf("len:%d\n",len);

    char *ptr = &p;
    printf("%c\t%d\n",*ptr,*ptr);
    len = sizeof(ptr);
    printf("len:%d\n",len);

    int *ptrInt = &a;
    printf("%d\n",*(&a));
    printf("*ptrInt:%d\n",*ptrInt);
    len = sizeof(ptrInt);
    printf("len:%d\n",len);

#endif
#if 0
// 指针特性2：指针和字符串
//字符串是区别于字符数组的/
    char *ptr = "hello world";
    int len = sizeof(ptr);
    printf("len:%d\n",len);

    //怎么判断字符串的长度
    int lenght = strlen(ptr);
    printf("length:%d\n",length);

    char buffer[BUFFER_SIZE] = { 0 };
    strcpy (name,"zhangsan");
    //name = "zhangsan";
    printf("name:%s\n", name);

    //字符串的赋值
    char *ptr2 = NULL;
    strcat(ptr2,"zhangsan" );
    ptr = "zhangsan";
    printf("%s\n",ptr2);

#endif
#if 1

    //堆空间

#endif
    //void 是一个指针，这个指针被称为万能指针

    cahr *ptr = (char *)malloc(sizeof(char)*BUFFER_SIZE);
    
    strcpy (ptr,"zhangsan");
    printf("ptr:%s\n",ptr);
    return 0;
}