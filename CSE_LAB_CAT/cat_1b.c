#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int age;
    char position[50];
    int day;
    int month;
    int year;
};

void sortByName(struct Employee employees[], int n) {
    struct Employee temp;
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (strcmp(employees[i].name, employees[j].name) > 0) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
}

void sortByDate(struct Employee employees[], int n) {
    struct Employee temp;
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (employees[i].year > employees[j].year ||
                (employees[i].year == employees[j].year &&
                (employees[i].month > employees[j].month ||
                (employees[i].month == employees[j].month &&
                employees[i].day > employees[j].day)))) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
}

void printEmployeeList(struct Employee employees[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Name: %s\n", employees[i].name);
        printf("Age: %d\n", employees[i].age);
        printf("Position: %s\n", employees[i].position);
        printf("Date of Joining: %d/%d/%d\n\n", employees[i].day, employees[i].month, employees[i].year);
    }
}

int main() {
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for (i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Position: ");
        scanf("%s", employees[i].position);
        printf("Date of joining (dd/mm/yyyy): ");
        scanf("%d/%d/%d", &employees[i].day, &employees[i].month, &employees[i].year);
    }
    sortByName(employees, n);
    printf("\nEmployee List sorted by name:\n\n");
    printEmployeeList(employees, n);
    sortByDate(employees, n);
    printf("\nEmployee List sorted by date of joining:\n\n");
    printEmployeeList(employees, n);
    return 0;
}