#include <stdio.h>


const int g_num = 10;

int main()
{
    //字符数组初始化定义的两种方式/
    char buffer1[] = "hello world";
    buffer1[0] = 'H';
    printf("buffer1:%s,buffer[0]:%c\n", buffer1,buffer1[0]);


    char * ptr = "helloworld";
    printf("ptr[0]:%c\t*(ptr+1):%c\n", *(ptr+0), *(ptr+1));


    //为什么字符串不能改？  因为字符串是常量，它也是放在全局区的/
    ptr [0] = 'H';
    printf("ptr[0]:%c\n", ptr[0]);


    ///


    return 0;
}