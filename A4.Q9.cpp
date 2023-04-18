#include <stdio.h>
#include <string.h>
union Student 
{
    char name[50];
    float gpa;
};
int main() 
{
    union Student student;
    printf("Enter the student's name: ");
    fgets(student.name, 50, stdin);
    printf("Enter the student's GPA: ");
    scanf("%f", &student.gpa);
    printf("Student's name: %s\n",student.name);
    printf("Student's GPA: %.2f\n", student.gpa);
    return 0;
}
