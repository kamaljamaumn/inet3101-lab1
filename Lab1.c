#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// Global variable for database name
char databaseName[100];

// Function prototypes
void PrintAllRecords();
void AddRecord();
void DeleteRecord();
void PrintNumRecords();
void PrintDBSize();
int PrintNumChanges(bool print);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Error: You must provide a database name.\n");
        return 1;
    }
    
    strcpy(databaseName, argv[1]);
    printf("Using database: %s\n", databaseName);
    
    int choice;
    
    do {
        // Display menu
        printf("\nMenu (%s):\n", databaseName);
        printf("1. Print all records\n");
        printf("2. Add record\n");
        printf("3. Delete the last record\n");
        printf("4. Print number of records\n");
        printf("5. Print database size\n");
        printf("6. Print number of changes\n");
        printf("7. Exit\n");
        printf("Please enter your selection > ");
        scanf("%d", &choice);
        
        // Handle menu choice
        switch (choice) {
            case 1:
                PrintAllRecords();
                break;
            case 2:
                AddRecord();
                PrintNumChanges(false); // Increment changes
                break;
            case 3:
                DeleteRecord();
                PrintNumChanges(false); // Increment changes
                break;
            case 4:
                PrintNumRecords();
                break;
            case 5:
                PrintDBSize();
                break;
            case 6:
                PrintNumChanges(true); // Print changes
                break;
            case 7:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid selection, please try again.\n");
        }
    } while (choice != 7);
    
    return 0;
}

// Function Definitions
void PrintAllRecords() {
    printf("You have entered the Print all records function for database: %s\n", databaseName);
}

void AddRecord() {
    int partNumber;
    char partName[50];
    float partSize;
    char partSizeMetric[10];
    float partCost;
    
    printf("Enter Part Number: ");
    scanf("%d", &partNumber);
    printf("Enter Part Name: ");
    scanf("%s", partName);
    printf("Enter Part Size: ");
    scanf("%f", &partSize);
    printf("Enter Part Size Metric: ");
    scanf("%s", partSizeMetric);
    printf("Enter Part Cost: ");
    scanf("%f", &partCost);
    
    printf("You entered:\n");
    printf("\tPart Number = %d\n", partNumber);
    printf("\tPart Name = %s\n", partName);
    printf("\tPart Size = %.2f\n", partSize);
    printf("\tPart Size Metric = %s\n", partSizeMetric);
    printf("\tPart Cost = $%.2f\n", partCost);
}

void DeleteRecord() {
    printf("You have entered the delete last record function for database: %s\n", databaseName);
}

void PrintNumRecords() {
    printf("You have entered the Print number of records function for database: %s\n", databaseName);
}

void PrintDBSize() {
    printf("You have entered the Print database size function for database: %s\n", databaseName);
}

int PrintNumChanges(bool print) {
    static int changes = 0;
    if (print) {
        printf("You have modified the database %d times\n", changes);
    } else {
        changes++;
        printf("%d modifications so far\n", changes);
    }
    return changes;
}
