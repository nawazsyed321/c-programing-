#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int calculateAge(int birth_year, int birth_month, int birth_day) {
    time_t t = time(NULL);
    struct tm current_time = *localtime(&t);
    int current_year = current_time.tm_year + 1900;
    int current_month = current_time.tm_mon + 1;
    int current_day = current_time.tm_mday;
    int age = current_year - birth_year;
    if (current_month < birth_month || (current_month == birth_month && current_day < birth_day)) {
        age--;
    }
    return age;
}
int main() {
    char name[100];
    int roll_number;
    int birth_year, birth_month, birth_day;
    int admission_year, admission_month, admission_day;
    printf("Enter name of student: ");
    scanf("%[^\n]%*c", name);
    printf("Enter roll number: ");
    scanf("%d", &roll_number);
    printf("Enter date of birth (YYYY-MM-DD): ");
    scanf("%d-%d-%d", &birth_year, &birth_month, &birth_day);
    printf("Enter date of admission (YYYY-MM-DD): ");
    scanf("%d-%d-%d", &admission_year, &admission_month, &admission_day);
    int age = calculateAge(birth_year, birth_month, birth_day);
    printf("%s's age at the time of admission was %d\n", name, age);
    return 0;
}
