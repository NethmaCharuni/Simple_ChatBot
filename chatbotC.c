#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void explainConcept(char topic[]) {
    if (strcmp(topic, "loops") == 0) {
        printf("\nLoops can execute a block of code as long as a specified condition is reached.\n");
        printf("Ex: (For Loop in C):\n");
        printf ("While loop");
        printf("\n\tfor(int i = 0; i < 5; i++) {\n");
        printf("\t    printf(\"%d \", i);\n");
        printf("\t}\n\n");
        
    } else if (strcmp(topic, "recursion") == 0) {
        printf("\nRecursion is when a function calls itself.\n");
        printf("Ex: (Factorial using Recursion in C):\n");
        printf("\n\tint factorial(int n) {\n");
        printf("\t    if (n == 0) return 1;\n");
        printf("\t    return n * factorial(n - 1);\n");
        printf("\t}\n\n");
        
    } else if (strcmp(topic, "arrays") == 0) {
        printf("\nArrays store multiple values of the same type.\n");
        printf("Ex: (Array Declaration and Access in C):\n");
        printf("\n\tint arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};\n");
        printf("\tprintf(\"%d\", arr[0]); // Output: 1\n\n");
        
    } else if (strcmp(topic, "pointers") == 0) {
        printf("\nPointers store memory addresses.\n");
        printf("Ex: (Using Pointers in C):\n");
        printf("\n\tint a = 10;\n");
        printf("\tint *p = &a;\n");
        printf("\tprintf(\"%d\", *p); // Output: 10\n\n");
        
    } else if (strcmp(topic, "dynamic memory") == 0) {
        printf("\nDynamic memory allocation allows flexible memory usage.\n");
        printf("Ex: (Using malloc in C):\n");
        printf("\n\tint *ptr = (int*) malloc(5 * sizeof(int));\n");
        printf("\tif (ptr == NULL) { printf(\"Memory allocation failed!\"); }\n");
        
        printf("\tfree(ptr); // Free allocated memory\n\n");
    } else {
        printf("\nSorry, this is not available.\n");
    }
}

void displayMenu() {
    printf("===== Welcome NetChat Bot =====\n");
    printf("I can help you learn programming concepts.\n");
    printf("Choose a topic:\n");
    printf("1. Loops\n");
    printf("2. Recursion\n");
    printf("3. Arrays\n");
    printf("4. Pointers\n");
    printf("5. Dynamic Memory\n");
    printf("6. Exit\n");
}

int main() {
    char topic[100];
    int choice;

    while (1) {
        displayMenu();
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: strcpy(topic, "loops");
			 break;
            case 2: strcpy(topic, "recursion");
			 break;
            case 3: strcpy(topic, "arrays");
			 break;
            case 4: strcpy(topic, "pointers"); 
			 break;
            case 5: strcpy(topic, "dynamic memory");
			 break;
            case 6: printf("\nHappy Learning!\n"); 
			   return 0;
            default: printf("\nInvalid choice! Please try again.\n"); 
			    continue;
        }

        explainConcept(topic);
    }

    return 0;
}
