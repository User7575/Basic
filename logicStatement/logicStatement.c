#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    //状态码/
    enum STATUS_CODE
    {
        REGISTER =1,
        LOGIN,
        QUIT,
        
    };

    //宏定义/
    //宏代码必须大写/
    #define COUNT_NUM   10
    #define RANGE_NUM    200


int main()
{
#if 0

    int budget = 50;


    int apple = 5; 
    int pear = 6 ;
    int oring = 7;

    if (budget>apple);
    {
        print("get a apple!\n");

    }
    else if (budget > mi14pro)
   {

    printf ("get a mi14pro!\n");



   }
    else if (budget > huaweip60 pro)
   {

    printf ("get a huaweip60pro!\n");
    


   }



#endif     
#if 0

    int budget =5000;
    int minbudget = 5000;
    int maxbudget = 8000;
    

    int applephone = 8999;
    int mi14pro = 4399;
    int huaweip60 = 6000;

    if(budget < applephone || budget > mi14pro)
    {

        printf("l am happy , get a phone\n");



    }
    else
    {

        printf ("l am sad, no phone\n");
        

    }
    if (4000<budget<6000)
    {
        printf("success get a phone\n");
        
    }

    if ((minbudget < budget)&&(budget<budget < maxbudget))
    {
        printf("success get a phone\n")

    }
    else
    {
        printf ("l am sad, no phone\n");
        

    }
     if ((minbudget < budget)&&(budget<budget < maxbudget))
    {
        printf("success get a computer\n")

    }
    else
    {
        printf ("l am sad, no computer\n");
        

    }

#endif
    //代码规范：一个函数尽量不要超过70行/
#if 0
    int choice = 0;
    printf ("输入你的选项");

    scanf("%d",&choice );
    //switch/
    switch (choice)
    {
    case 1:
        {
        printf("welcome to register \n");   
        }                                                       //每个case都需要break/
        break;  
                                                                 //如果case语句过多，要加上{}来包含/
    case 2:
        {
         printf("welcome to login\n");
        }
        break;
    
    case 3:
        {
         printf("welcome to quit\n");
        }
        break;
    

    default:
    printf("input choice invalid\n");
        break;
    }




#endif
#if 0
    //循环/

    srand(time(NULL));





    //for 循环/
    int randomNum =0;
    for (int idx = 0;idx < COUNT_NUM; idx++)                                //不允许使用i/
    {

    int randomNum = rand() % COUNT_NUM =1;
    printf("randomNum:%d\n,randomNum");

    }


   




#endif
#if 1

    //变量尽量使用驼峰式命名/

    int circletimes = COUNT_NUM >> 1;
    int randomNum = 0;

    //一定需要有退出的条件/
    while (--circletimes)
    {
        randomNum = rand()% RANGE_NUM +1;
        printf ("randomNum: %d\n", randomNum);
    }
    







#endif
return 0;
}