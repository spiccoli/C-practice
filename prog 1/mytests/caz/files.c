#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 200
#define MAX_GENDER_LENGTH 10

// Structure to store person information
typedef struct {
    char full_name[MAX_NAME_LENGTH];
    int age;
    char gender[MAX_GENDER_LENGTH];
} Person;

// Function to write a person to a file in CSV format
void write_to_file(FILE *file) {
    Person person;
    
    printf("Enter full name (with spaces): ");
    fgets(person.full_name, MAX_NAME_LENGTH, stdin);
    person.full_name[strcspn(person.full_name, "\n")] = 0;  // Remove newline from name

    printf("Enter age: ");
    scanf("%d", &person.age);
    getchar();  // To consume the newline left by scanf

    printf("Enter gender: ");
    fgets(person.gender, sizeof(person.gender), stdin);
    person.gender[strcspn(person.gender, "\n")] = 0;  // Remove newline from gender

    // Write the data to the file in CSV format (comma-separated)
    fprintf(file, "%s,%d,%s\n", person.full_name, person.age, person.gender);
    printf("Person information saved!\n");
}

// Function to read person data from a CSV file
void read_from_file(FILE *file) {
    char line[MAX_NAME_LENGTH + 50];  // Buffer to store the full line
    Person person;

    // Read until end of file
    while (fgets(line, sizeof(line), file)) {
        // Use sscanf to parse the CSV line
        if (sscanf(line, "%[^,],%d,%s", person.full_name, &person.age, person.gender) == 3) {
            // Print the person data (excluding gender)
            printf("Name: %s Age: %d\n", person.full_name, person.age);
        } else {
            printf("Error reading line: %s", line);
        }
    }
}

int main() {
    FILE *file;
    int choice;
    // Open file for reading and writing
    file = fopen("people_data.csv", "r+");  // Open for both reading and writing (CSV file)
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    while (1) {
        printf("\n1. Write to file\n2. Read from file\n3. Exit\nChoose an option: ");
        scanf("%d", &choice);
        getchar();  // Consume the newline left by scanf
        switch (choice) {
            case 1:
                write_to_file(file);
                break;
            case 2:
                rewind(file);  // Reset the file pointer to the beginning
                read_from_file(file);
                break;
            case 3:
                fclose(file);
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }
}
