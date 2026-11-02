#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Struct Definition
typedef struct Contact {
int id;
char *name;
int phone;
char *email;
struct Contact *next;
} Contact;

// Global head pointer so it retains data across functions
Contact *head = NULL;

// Function Declarations
void addContact();
void displayContact();
void deleteContact();

int main(void) {
int n;
// Loop keeps the program running until the user chooses to exit
while (1) {
    printf("\n=== Contact Management Menu ===\n");
    printf("1. Adding the Contact\n");
    printf("2. Printing the Contact\n");
    printf("3. Deleting the Contact\n");
    printf("4. Exit\n");
    printf("Enter your Choice from 1 to 4: ");
    
    if (scanf("%d", &n) != 1) {
        // Clear invalid input if user enters letters instead of numbers
        while (getchar() != '\n');
        printf("Invalid input. Please enter a number.\n");
        continue;
    }

    if (n == 1) {
        addContact();
    } 
    else if (n == 2) {
        displayContact();
    } 
    else if (n == 3) {
        deleteContact();
    } 
    else if (n == 4) {
        printf("Exiting program. Goodbye!\n");
        break;
    } 
    else {
        printf("Error! Please enter a valid choice from 1 to 4.\n");
    }
}

return 0;

}

// 1. Function to Add a Contact (Inserts at the front of the list)
void addContact() {
Contact *A = malloc(sizeof(Contact));
if (A == NULL) {
printf("Memory allocation failed!\n");
return;
}

printf("\n--- Enter the Contact Details ---\n");

printf("Enter the id: ");
scanf("%d", &A->id);

// Allocate memory for strings before reading into them
A->name = malloc(100 * sizeof(char));
printf("Enter the name: ");
scanf("%s", A->name);

printf("Enter the phone number: ");
scanf("%d", &A->phone);

A->email = malloc(100 * sizeof(char));
printf("Enter the Email id: ");
scanf("%s", A->email);

// Insert new node at the beginning of the list
A->next = head;
head = A;

printf("Contact added successfully!\n");
}

// 2. Function to Display All Contacts
void displayContact() {
Contact *temp = head;

if (temp == NULL) {
    printf("\nContact list is empty.\n");
    return;
}

printf("\n--- Contact List ---\n");
while (temp != NULL) {
    printf("ID: %d | Name: %s | Phone: %d | Email: %s\n", 
           temp->id, temp->name, temp->phone, temp->email);
    temp = temp->next;
}

}

// 3. Function to Delete a Contact by ID
void deleteContact() {
if (head == NULL) {
printf("\nContact list is empty. Nothing to delete.\n");
return;
}
int targetId;
printf("\nEnter the ID of the contact to delete: ");
scanf("%d", &targetId);

Contact *temp = head;
Contact *prev = NULL;

// Case 1: The node to delete is the head node
if (temp != NULL && temp->id == targetId) {
    head = temp->next;
    free(temp->name);  // Free allocated string memory
    free(temp->email);
    free(temp);        // Free node memory
    printf("Contact with ID %d deleted successfully.\n", targetId);
    return;
}

// Case 2: Search for the node to delete
while (temp != NULL && temp->id != targetId) {
    prev = temp;
    temp = temp->next;
}

// If ID was not found in the list
if (temp == NULL) {
    printf("Contact with ID %d not found.\n", targetId);
    return;
}

// Unlink the node from the linked list
prev->next = temp->next;

// Free memory
free(temp->name);
free(temp->email);
free(temp);

printf("Contact with ID %d deleted successfully.\n", targetId);
}
