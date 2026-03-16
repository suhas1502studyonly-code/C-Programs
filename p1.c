#include <stdio.h>

int main()
{
    char name[50];
    char usn[20];
    char branch[50];
    char college[100];

    printf("Enter your Name: ");
    scanf("%s", name);

    printf("Enter your USN: ");
    scanf("%s", usn);

    printf("Enter your Branch: ");
    scanf("%s", branch);

    printf("Enter your College Name: ");
    scanf("%s", college);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", name);
    printf("USN: %s\n", usn);
    printf("Branch: %s\n", branch);
    printf("College: %s\n", college);

    return 0;
}
