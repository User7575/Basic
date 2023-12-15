#include <stdio.h>

#define BUFFER_SIZE 10


int main()
{
#if 0
    //如何获取数组有多少个元素：数组的总长度除以每个元素的总长度/

    int array[BUFFER_SIZE] = {0};

    int arrayLen = sizeof (array);
    printf("len:%d\n",arrayLen);

    int elementLen = sizeof (array[0]);
    printf("len:%d\n",elementLen);

    int length = arrayLen / elementLen ;
    printf("length:%d\n",length);

#endif
#if 1
    //字符数组/
    char pNum = 'a';
    printf ("pNum:%c\n",pNum);

    //只要是指针的变量，变量定义第一个需要是p开头/
    char * ptr = "hello word";
    printf ("ptr:%s\n",ptr);                                     //打印字符串/


    char buffer[BUFFER_SIZE] ={'h','e','l','l','o','w','o','r','l','d'};
    int buflen = sizeof (buffer);
    printf("buflen:%d,buffer:%s\n", buflen,buffer);
#endif
#if 0
    //字符数组初始化定义的两种方式/
    char buffer1[] = "helloworld";
    //如果是以双引号的方式  默认加上‘\0’/
    char buffer2[] = {'h','e','l','l','o','w','o','r','l','d'};
    char buffer3[] = {'h','e','l','l','o','w','o','r','l','d'};
    //如果是以单引号的方式  默认不加上\0/
    int buflen1 = sizeof (buffer1);
    int buflen2 = sizeof (buffer2);
    int buflen3 = sizeof (buffer2);
 
    printf("&buffer:%p\n",buffer1);
    printf("&buffer:%p\n",buffer2);
    printf("&buffer:%p\n",buffer3);
   

    printf("buflen1:%d,\tbufflen:%d\n",buflen1, buflen2);
    printf("buffer1:%s\n", buffer1);
    printf("buffer2:%s\n", buffer2);
    printf("buffer3:%s\n", buffer3);
    
#endif
    return 0;
}