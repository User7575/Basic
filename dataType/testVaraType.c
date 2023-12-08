#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
#if 0

    // sizeof是计算字节的大小 /

    long bigValue =0;
    int len = sizeof (bigValue);
    printf("len: %d, a = %ld \n", len, bigValue);               

    int age = 6;
    len = sizeof (age);
    printf("len: %d,a= %d \n",len,age);                          //  %d就是打印整数 /                            

    short smallvalue=1;
    len = sizeof (smallvalue);
    printf("len: %d,smallvalue = %d\n",len,smallvalue);

    //float weight=50.5;
    //len = sizeof(weight);
    //printf("len: %d,a=%f\n",len,weight);                       //  %f就是打印小数，浮点数 /  


    double weight=50.5;
    len = sizeof (weight);
    printf("len: %d,weight = %f\n",len,weight);                     //  %f就是打印小数，浮点数 /

    char sex = 'm';
    len = sizeof(sex);
    printf("len: %d,sex= %c \n",len,sex);                             // %c就是打印字符 /



#endif
#if 0
    
    char sex = (97);
    int len = sizeof(sex);
    printf("led:%d,sex=%c sex=%d\n", len, sex, sex);

    char default_value =137;
    len = sizeof(default_value);
    printf("led:%d,default_valu = %c default_valu = %d\n", len, default_value, default_value);


    unsigned char m_value=-1;
    len = sizeof(sex);
    printf("led:%d, sex=%c sex=%d\n", len, sex, sex);
    
#endif
#if 0
    int val=3-5*2;
    printf("val:%d\n",val);

    val++;
    printf("val:%d\n",val);

    val--;
    printf("val:%d\n",val);


    int m_value = 10;
    int discuss = m_value / 3;
    int rmeainder = m_value%3;

    printf("discuss:%d\n",discuss);
    printf("randomVal:%d\n",rmeainder);


    int randomVal = rand();
    printf("randomVal:%d\n",rmeainder);

    int lotteryRate = randomVal % 4;
    printf("lotteryRate:%d\n",lotteryRate);
#endif

#if 0
    ++val;
    printf("val：%d\n",val);

    --val;
    printf("val：%d\n",val);

    val=val+100;
    printf("val：%d\n",val);



#endif
#if 1
    int a=51;
    printf ("a: %d\n",a);
    a<<=1;
    printf ("a:%d\n",a);



    int Val = 51;
    int orVal = Val |7;
    int andVal = Val & 2;

    printf ("orVal:%d\n", orVal);
    printf ("andVal:%d\n", andVal);


    //int notVal = !Val;
   // printf ("notVal:%d\n",notVal);


    int condition1 = 1;
    int condition2 = 5;
    if ((condition1==1) || (condition2==5))
    {
        printf("hello world\n");
    
    }
    else
    {

        printf("not hello world\n");
    
    }

    if ((condition1==1) && (condition2==5))
    {
        printf("hello world\n");
    
    }
    else
    {

        printf("not hello world\n");
    
    }

   return 0;
#endif

}









