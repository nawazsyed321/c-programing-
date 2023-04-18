#include <stdio.h>
union Data {
    int i;
    float f;
}
int main() 
{
    union Data data;
    printf("Enter an integer value: ");
    scanf("%d", &data.i);
    printf("The value you entered is: %d\n", data.i);
    printf("Enter a float value: ");
    scanf("%f", &data.f);
    printf("The value you entered is: %f\n", data.f);
    return 0;
}
Footer
