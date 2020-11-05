//
//  main.c
//  project
//
//  Created by 이유진 on 2020/11/05.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void main(void){
    int a = 3;
    int b = 5;
    swap(&a, &b);
    printf("a : %i, b : %i\n", a, b);

}
