/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constant
#define LIMIT 65536

int main(int argc, string argv[])
{
    // https://study.cs50.net/argv
    //if value of command line argument is not 2 and not 3 then print "Usage: generate n [s]"
    //if the value of argc is 2 then always new random number is generated. If the value of
    //argc is 2 and 3 then always the same random number is generated. 
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }

    // convert string in argv[1] to integer
    int n = atoi(argv[1]);

   //if argument count is 3 then
    if (argc == 3)
    {
        
        // generate uniformly distributed pseudo-random numbers. srand48() function should
        // be called before using drand48()
        srand48((long int) atoi(argv[2]));
    }
    else
    {
        srand48((long int) time(NULL));
    }

    
    for (int i = 0; i < n; i++)
    {
        //drand48() function return non-negative double-precision floating-point values unifor-
        //mly distributed between [0.0,1.0)
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}