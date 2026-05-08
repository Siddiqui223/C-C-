#include <stdio.h>

int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks >= 40) {
        printf("Pass\n");

        if(marks >= 80) {
            printf("Excellent");
        }
    } else {
        printf("Fail");
    }

    return 0;
}