#include <stdio.h>
#include <string.h>
#include <stdlib.h>



#define BUFFER_SIZE 10


//内存泄露：3种场景
    // 1.野指针
    // 2.malloc出的堆空间 没有被释放
    // 3.踩内存（read/ write is invalid.）

int mian ()
{
    //什么情况下会导致内存泄露
    //case 1:野指针
#if 0
    int a;
    printf("a:%d\n",a);

    int array[10];
    for (int idx = 0; idx < sizeof(array);idx++);
    {
        printf("%d\n",array[idx]);
    }
#endif
#if 0
    char *p;    //0x78999999
    printf("\n");

    //case 2:
#endif
#if 0
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE - 1);
    if (!ptr)
    {
        //todo...
        //状态码
        return -1;
    }
    //使用malloc分配的空间，数据是脏的。（脏数据）
    memset(ptr, 0, sizeof(char) * BUFFER_SIZE);
#if 0
    //极度危险的函数
    strcpy(ptr,"hello world");
#else
    //使用安全
    strncpy(ptr,"hello world",BUFFER_SIZE-1);
#endif 
    printf("ptr:%c\n",*ptr);

    if (ptr !=NULL)
    {
        free(ptr);
        ptr = NULL;
    }
     if (ptr !=NULL)
    {
        free(ptr);
        ptr = NULL;
    }
    
#endif

    return 0;
}