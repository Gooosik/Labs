#include <stdio.h>

struct student
{
    char name[30];
    int kurs;
    int age;
};

int main()
{
    struct student stud1;
    
    printf("Vvedit imya:");
    gets(stud1.name);
    
    printf("Vvedit vik:");
    scanf("%d", &stud1.age);
    
    printf("Vvedit kurs:");
    scanf("%d", &stud1.kurs);
    
    printf("Student %s\n", stud1.name);
    printf("Kurs %d\n", stud1.kurs);
    printf("Vik %d\n", stud1.age);
}
