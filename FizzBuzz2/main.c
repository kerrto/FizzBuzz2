//
//  main.c
//  FizzBuzz2
//
//  Created by Kerry Toonen on 2015-11-05.
//  Copyright © 2015 Kerrto. All rights reserved.
//


# include <stdio.h>
int main () {
    int i;
    for (i=1 ; i<=100 ; i++)
        
        if (i%3==0)
            
            printf("Fizz\n");
    
        else if (i%5==0)
            
            printf ("Buzz\n");
    
        else
            
            printf ("%d\n",i);
    
    return 0;
    
}
