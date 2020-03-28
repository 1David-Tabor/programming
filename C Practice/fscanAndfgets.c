#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    double gpa;
    printf("Enter your GPA: ");
    scanf("%lf", &gpa);
    printf("Your GPA minus 1 is: %f", gpa - 1);
*/
    char name[20];
    fgets(name, 20, stdin);
    printf("Your name is %s", name);

    return 0;
}
