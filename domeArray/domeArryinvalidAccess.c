#include <stdio.h>


#define BUFFER_SIZE 10

int main()
{

#if 1
    int array[BUFFER_SIZE]= {0};
    //数组的越界访问/

    printf("array [-1]: %d/n",array[-1]);
    printf("array [10]: %d/n",array[10]);
  

    return 0;
#endif
}