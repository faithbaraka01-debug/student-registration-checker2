#include <stdio.h>

int main()
{
    char name[50];
    int units;
    char status[30];

    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    if (name[strlen(name) - 1] == '\n')
    {
        name[strlen(name) - 1] = '\0';
    }

    printf("Enter number of registered units: ");
    scanf("%d", &units);

    if (units > 7)
    {
        sprintf(status, "Overload - Approval Required");
    }
    else
    {
        sprintf(status, "Registration Accepted");
    }

    printf("\n--- Registration Summary ---\n");
    printf("Student Name: %s\n", name);
    printf("Registered Units: %d\n", units);
    printf("Status: %s\n", status);

    return 0;
}