#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10


//数组：一段连续的存储空间/
//它里面存放的数据类型是相同的  ()/


int main ()
{


    //方法一：使用定义即初始化/
  
    int array[BUFFER_SIZE];

    for (int idx = 0;idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\n",idx,array[idx]);
    }
    
#if 0
    int len = sizeof (array);
    printf ("len:%d\n",len);

    //地址/s
    printf ("%p\n",array);
    printf ("%p\n",&array[0]);
    printf ("%p\n",&array[1]);
    printf ("%p\n",&array[9]);
    printf ("%p\n",&len);
    //数组的（首）地址和数组的首元素的地址是一致的/

  
    //清除脏字节/
    memset(array, 0,sizeof(array));
    printf("==============\n");

    for (int idx = 0;idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\n",idx,array[idx]);
    }



    //数组的越界访问/

    printf("array [-1]: %d/n",array[-1]);
    printf("array [10]: %d/n",array[10]);
#endif
    return 0;
}