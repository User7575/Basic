#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 5
#define ROW 3
#define COLUMN 3

int main ()
{

    //一维数组到二维数组/
    int array[BUFFER_SIZE] = {0};
    int len = sizeof (array);
    printf("len:%d\n",len);

    //二维数组定义/
    int array2[ROW][COLUMN] = {0};
    len = sizeof(array2);
    printf("len:%d\n",len);

    array2[0][0] = 100;
    printf("array2[0][0]:%d\n",array2[0][0]);
    //给二维数组赋值/
    int count = 1;
    for (int idx = 0; idx<ROW; idx++)
    {
        for (int jdx = 0; jdx < COLUMN; jdx++)
        {
            array2[idx][jdx] = count;
            count++;
        }
    }
#if 0
    printf("array2[0][0]:%d\n",array2[0][0]);
    //二维数组的取值/
    count = 0;
    for (int row = 0; row <ROW; row++)
    {
        for (int col = 0; col < COLUMN; col++)
        {
            printf("array2[%d][%d]:%d\t",row, col, array2[row][col]);
            count++;
        }
        printf("\n");
    }
    printf("\n");
#endif


   
    




    return 0;
}



///