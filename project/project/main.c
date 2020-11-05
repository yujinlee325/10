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
    char c = 'a';
    
    int *iptr = &i;
    char *cptr = &c;
    
    int *iptr2 = iptr;
    
    printf("i : %p\n%p (size:%i)\n", iptr, &i, sizeof(iptr));
    printf("c : %p\n%p (size:%i)\n", cptr, &c, sizeof(cptr));
    printf("iptr2 : %p, %i\n", iptr2, *iptr2);
    
    return 0;
}
