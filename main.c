//
//  main.c
//  fizz buzz
//
//  Created by Zechariah Yue on 8/27/20.
//  Copyright © 2020 Zechariah Yue. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int i;
    for(i=1; i<=100; ++i)
    {
        if(i % 3!= 0 && i % 5 != 0) //print numbers that aren't fizz buzz//
        {
        printf("%d\n",i);
        continue;
        }
        if (i % 3 == 0) // print numbers that are divisible by 3//
            printf("Fizz");
        if (i % 5 == 0) // print numbers that are divisible by 5//
            printf("Buzz");
        if ((i % 3 != 0) && (i % 5 != 0)) // print numbers that are divisible by 3&5"
            printf("number=%d", i);
        printf("\n");
    }

    return 0;
}
