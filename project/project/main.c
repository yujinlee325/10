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
    
    for(i=0;i<5;i++)
    {
        printf("grade[%i] = ", i);
        scanf("%d", &grade[i]);
    }
    
    for(i=0;i<5;i++)
    {
        sum += grade[i];
        printf("grade[%d] = %d\n", i, grade[i]);
    }
    printf("average : %i\n", sum/5);
    
    return 0;
}
