//
//  main.c
//  project
//
//  Created by 이유진 on 2020/11/05.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int i = 10;
    char c = 69;
    float f = 12.3;
    
    printf("i : %i %p \n", i, &i);
    printf("c : %c %p \n", c, &c);
    printf("f : %f %p \n", f, &f);
    
    return 0;
}
