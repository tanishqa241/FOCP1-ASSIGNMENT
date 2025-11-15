/*Implement a program to find who and how many students scored “99” in the marks array,
emphasising data scanning and frequency counting.  */
#include <stdio.h>
#include <string.h>
int main() {
    int n, marks[100], count = 0;
    char names[100][50];
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("\nEnter name and marks of each student:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d name: ", i + 1);
        scanf("%s", names[i]); 
        printf("Marks: ");
        scanf("%d", &marks[i]);
    }
    printf("\nList of students and their marks:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %d\n", names[i], marks[i]);
    }
    printf("\nStudents who scored exactly 99:\n");
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("%s (Marks: %d)\n", names[i], marks[i]);
            count++;
        }
    }
    if (count == 0)
        printf("No student scored 99.\n");
    else
        printf("\nTotal number of students who scored 99: %d\n", count);

    return 0;
}
