#include <stdio.h>
#include <string.h>


#define BUFFER_SIZE  32
//手写字符串四个函数/  
int main()
{
    #if 0
    //字符数组/
    int array[BUFFER_SIZE];
    memest (array,0,sizeof(array));

    int len = sizeof (array)
    printof ("len:%d\n",len);

    for (int idx = 0; idx<BUFFER_SIZE; idx ++);
    {
        array [idx] = idx;
    }

#endif
#if 0
    char array [BUFFER_SIZE] = "hello world";
    int len = sizeof(array);
    printf("len:%d,array:%s\n",len array);
#endif
#if 0
    //字符串数组/
    char array [BUFFER_SIZE] = "hello world";
    //第一个 strlen strlem/
    int len = strlen (array);
    printf ("len :%d\n,len");

    //第二个 strcpy/
    char name [BUFFER_SIZE];
    memset(name, 0, sizeof(name));
    strcpy(name ,"zhangsan");
    printf("name:%d/n",name);

    //第三个 strcat/
    strcat (name ,"is a boy");
    strcat ("name:%s/n",name);

    //第四个 strcmp/
    char name2[BUFFER_SIZE] ="wangwu";
    int ret = strcmp (name , name2);
    printf("ret:%d/n",ret);

#endif
#if 0
    //字符串(常量)/
    //指针出入/
    char * ptr = "hello world";
    int len = strlen (ptr);
    int size = sizeof(ptr);


    printf("len:%d/n",len);
    printf("size:%d/n",size);

    printf("*ptr :%c\t*(ptr +1):%c\tptr:%c\n",*ptr,*(ptr +1),ptr);

    *ptr = 'H';
    printf("*ptr :%c\t*(ptr +1):%c\tptr:%c\n",*ptr,*(ptr +1),ptr);



#endif
    return 0;
}