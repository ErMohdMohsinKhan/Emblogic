#include <stdio.h>

void exampleFunction()
{
    static int staticVar = 0; // Static variable retains its value between calls
    printf("Static variable value: %d\n", staticVar);
    staticVar++;
}

int main()
{
    exampleFunction();  // Output: Static variable value: 0
    exampleFunction();  // Output: Static variable value: 1
    exampleFunction();  // Output: Static variable value: 2
    return 0;
}
