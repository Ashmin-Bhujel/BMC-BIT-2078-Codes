/* Discrete Structure Lab Program (Set Operations) */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Function Declarations
void cartesianProduct(char s1[], char s2[]);
void setUnion(char s1[], char s2[]);
void intersection(char s1[], char s2[]);
void setDifference(char s1[], char s2[]);
void complement(char s1[], char s2[], char u[]);

// Global Variables
int n1, n2, n, i, j, choice;

int main() {
    // Total number of element of the sets
    printf("Enter the total number of elements of Universal set: ");
    scanf("%d", &n);
    printf("Enter the total number of elements of set A: ");
    scanf("%d", &n1);
    printf("Enter the total number of elements of set B: ");
    scanf("%d", &n2);

    // Set arrays declaration
    char s1[n1], s2[n2], u[n];

    // Taking element input from the user

    // Universal Set
    printf("\nEnter elements of the Universal set:\n");
    for (i = 0; i < n; i++) {
        fflush(stdin);
        printf("Element[%d]: ", (i + 1));
        scanf("%c", &u[i]);
    }

    // Set 1
    printf("\nEnter elements of the set A:\n");
    for (i = 0; i < n1; i++) {
        fflush(stdin);
        printf("Element[%d]: ", (i + 1));
        scanf("%c", &s1[i]);
    }

    // Set 2
    printf("\nEnter elements of the set B:\n");
    for (i = 0; i < n2; i++) {
        fflush(stdin);
        printf("Element[%d]: ", (i + 1));
        scanf("%c", &s2[i]);
    }

    // Menu Logic
    do {
        // Asking for user choice
        system("cls");
        printf("\n\nWhat do you want to do?\n> Cartesian Product (1)\n> Union of set A and B (2)\n> Intersection of set A and B (3)\n> Difference (4)\n> Complement (5)\n> Exit (6)\n: ");
        scanf("%d", &choice);

        // Menu
        switch (choice) {
            case 1:
                cartesianProduct(s1, s2);
                printf("\n\nPress enter to continue");
                getch();
                break;
            case 2:
                setUnion(s1, s2);
                printf("\n\nPress enter to continue");
                getch();
                break;
            case 3:
                intersection(s1, s2);
                printf("\n\nPress enter to continue");
                getch();
                break;
            case 4:
                setDifference(s1, s2);
                printf("\n\nPress enter to continue");
                getch();
                break;
            case 5:
                complement(s1, s2, u);
                printf("\n\nPress enter to continue");
                getch();
                break;
            case 6:
                printf("\n\nThank You!\n");
                printf("Press enter to exit");
                getch();
                break;
            default:
                printf("\nInvalid Input!\n");
                printf("\nPress enter to continue");
                getch();
        }

    } while (choice != 6);

    return 0;
}

// Function Definitions

// Cartesian Product
void cartesianProduct(char s1[], char s2[]) {
    printf("\n\nPrinting Cartesian Product of set A and B:\n");
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            printf("(%c, %c) ", s1[i], s2[j]);
        }
    }
}

// Set Union
void setUnion(char s1[], char s2[]) {
    printf("\n\nPrinting element of the union set of set A and B:\n");
    // Union set declaration
    char s3[n1 + n2];
    // Adding elements of s1 in s3
    for (i = 0; i < n1; i++) {
        s3[i] = s1[i];
    }
    // Adding elements of s2 in s3
    for (i = n1; i < (n1 + n2); i++) {
        s3[i] = s2[i - n1];
    }
    // Printing elements of union set
    for (i = 0; i < (n1 + n2); i++) {
        printf("[%c]\t", s3[i]);
    }
}

// Intersection Set
void intersection(char s1[], char s2[]) {
    printf("\n\nPrinting elements of intersection of set A and B:\n");
    for (i = 0; i < n1; i++) {
        int count = 1;
        for (j = 0; j < n2; j++) {
            if (s1[i] == s2[j]) {
                count++;
            }
        }
        if (count > 1) {
            printf("[%c]\t", s1[i]);
        }
    }
}

// Set Difference
void setDifference(char s1[], char s2[]) {
    // For (A - B)
    printf("\n\nPrinting elements of set (A - B):\n");
    for (i = 0; i < n1; i++) {
        int count = 1;
        for (j = 0; j < n2; j++) {
            if (s1[i] == s2[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("[%c]\t", s1[i]);
        }
    }
    // For (B - A)
    printf("\n\nPrinting elements of set (B - A):\n");
    for (i = 0; i < n2; i++) {
        int count = 1;
        for (j = 0; j < n1; j++) {
            if (s2[i] == s1[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("[%c]\t", s2[i]);
        }
    }
}

// Complement
void complement(char s1[], char s2[], char u[]) {
    // For A complement
    printf("\n\nPrinting elements of set A complement:\n");
    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = 0; j < n1; j++) {
            if (u[i] == s1[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("[%c]\t", u[i]);
        }
    }
    // For B complement
    printf("\n\nPrinting elements of set B complement:\n");
    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = 0; j < n2; j++) {
            if (u[i] == s2[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("[%c]\t", u[i]);
        }
    }
}