//
//  main.c
//  project
//
//  Created by 이유진 on 2020/11/05.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int main(int argc, char *argv[]){
    int i;
    int grade[5];
    int sum = 0;
    int *ptr;
    
    for(i=0;i<5;i++)
    {
        ptr = grade+i;
        printf("grade[%i] = ", i);
        scanf("%d", ptr);
    }

    for(i=0;i<5;i++)
    {
        ptr = &grade[i];
        sum += *ptr;
        printf("grade[%d] = %d\n", i, *ptr);
    }
    printf("average : %i\n", sum/5);
    
    return 0;
}
