//
//  main.c
//  hello_world
//
//  Created by chris on 2020/4/18.
//  Copyright © 2020年 chris. All rights reserved.
//

#include <stdio.h>
#define MAX_SORT_NUM 10

int* bubble_sort(int* args)
{
    int  i, j;
    for(i = 0;i<MAX_SORT_NUM;i++)
    {
        for(j = 1;j<MAX_SORT_NUM - i;j++)
        {
            if(args[j] < args[j-1])
            {
                int temp = args[j];
                args[j] = args[j-1];
                args[j-1] = temp;
                printf("args[%d] = %d   ", j-1, args[j-1]);
                printf("args[%d] = %d\n", j,args[j]);
            }
        }
    }
    return args;
}

int main(int argc, const char* argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int input[MAX_SORT_NUM+1];
    
    for(int i = 0;i<MAX_SORT_NUM;i++)
    {
        scanf("%d",input+i);
    }
    
    printf("your input is:\n");
    
    for(int i = 0;i<MAX_SORT_NUM;i++)
    {
        printf("%d  ",*(input+i));
    }
    printf("\n");
    
    bubble_sort(input);
    
    printf("after sort ,the result is:\n");
    
    for(int i = 0;i<MAX_SORT_NUM;i++)
    {
        printf("%d  ",*(input+i));
    }
    printf("\n");
    return 0;
}
