#include "std_lib_facilities.h"

void sample(const int a)
{

    printf("%d\n", a);
    int b = a+1;
    printf("i made b from a!: %d",b);

}


int main()
{

    int c = 12;
    sample(c);
    
    return 0;
}