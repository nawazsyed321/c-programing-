#include <stdio.h>
#define PI 3.14159
union Shape 
{
    float radius;
    struct 
	{
        float length;
        float width;
    } 
	rectangle;
};

int main() 
{
    union Shape shape;
    char choice;
    printf("Enter the type of shape you want to calculate (C for circle, R for rectangle): ");
    scanf("%c", &choice);
    if (choice == 'C' || choice == 'c') 
	{
        printf("Enter the radius of the circle: ");
        scanf("%f", &shape.radius);
        printf("Area of the circle is: %.2f\n", PI * shape.radius * shape.radius);
    } 
	else if (choice == 'R' || choice == 'r') 
	{
        printf("Enter the length of the rectangle: ");
        scanf("%f", &shape.rectangle.length);
        printf("Enter the width of the rectangle: ");
        scanf("%f", &shape.rectangle.width);
        printf("Area of the rectangle is: %.2f\n", shape.rectangle.length * shape.rectangle.width);
    } 
	else 
	{
        printf("Invalid choice!\n");
    }
    return 0;
}
