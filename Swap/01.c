#include <stdio.h>
/*WAP to swap two numbers without using Third variable and in one shot*/
int main()
{
        int a=10;
        int b=20;
        printf("a-> %d and b-> %d\n",a, b); 
        a = b + a - (b=a);
        printf("After swapping\na-> %d and b-> %d\n",a, b); 
        return 0;
}
