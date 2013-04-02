#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int isprime(int n)
{
    int sqroot,f;
    sqroot=sqrt(n);
    for(f=2;f<=sqroot;f++)
    {
        if((n%f)==0){
        return 0;
        }
        return 1;

    }


}
