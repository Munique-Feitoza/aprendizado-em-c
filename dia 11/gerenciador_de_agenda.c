#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    "Agenda Manager with Pointers and Dynamic Allocation"
    This program allows the user to register contacts with name, phone, and email,
    using dynamic memory allocation and pointer-to-pointer manipulation.
    It also reverses names and shows memory addresses.

    Author: Munique Feitoza
    Date: 11/07/2025
*/

// <----------- Struct Definition ----------->
typedef struct {
    char *name;
    char *phone;
    char *email;
} Contact;

// <----------- Function Prototypes ----------->
Contact *createContact(const char *name, const char *phone, const char *email);
void freeContact(Contact *contact);
void reverseName(char **name);
void displayContact(Contact *contact);
void displayContacts(Contact **contacts, size_t n);
void readLine(char *buffer, size_t size);

// <----------- Main Function ----------->
int main() {
    size_t n;
    printf("Quantos contatos voce quer salvar? ");
    scanf("%zu", &n);
    getchar(); // Clear newline from buffer

    // Allocate memory for contact pointers
    Contact **contacts = (Contact **)malloc(n * sizeof(Contact *));
    if (!contacts) {
        fprintf(stderr, "Erro na alocacao de memoria.\n");
        exit(EXIT_FAILURE);
    }

    for (size_t i = 0; i < n; i++) {
        char name[100], phone[20], email[100];

        printf("\nRegistrando contato %zu:\n", i + 1);
        printf("Nome: ");
        readLine(name, sizeof(name));

        printf("Celular: ");
        readLine(phone, sizeof(phone));

        printf("E-mail: ");
        readLine(email, sizeof(email));

        contacts[i] = createContact(name, phone, email);
        reverseName(&contacts[i]->name);
    }

    printf("\nContatos registrados:\n");
    displayContacts(contacts, n);

    // Free allocated memory
    for (size_t i = 0; i < n; i++) {
        freeContact(contacts[i]);
    }
    free(contacts);

    return 0;
}

// <----------- Function Implementations ----------->

// Safely read a full line (including spaces)
void readLine(char *buffer, size_t size) {
    fgets(buffer, size, stdin);
    buffer[strcspn(buffer, "\n")] = '\0'; // Remove newline
}

// Create a new contact dynamically
Contact *createContact(const char *name, const char *phone, const char *email) {
    Contact *contact = (Contact *)malloc(sizeof(Contact));
    if (!contact) {
        fprintf(stderr, "Erro na alocacao do contato na memoria.\n");
        exit(EXIT_FAILURE);
    }

    contact->name = strdup(name);
    contact->phone = strdup(phone);
    contact->email = strdup(email);

    return contact;
}

// Free memory of a contact
void freeContact(Contact *contact) {
    if (contact) {
        free(contact->name);
        free(contact->phone);
        free(contact->email);
        free(contact);
    }
}

// Reverse the characters of the contact's name
void reverseName(char **name) {
    size_t len = strlen(*name);
    for (size_t i = 0; i < len / 2; i++) {
        char temp = (*name)[i];
        (*name)[i] = (*name)[len - i - 1];
        (*name)[len - i - 1] = temp;
    }
}

// Display a single contact
void displayContact(Contact *contact) {
    if (contact) {
        printf("Nome: %s (Memory: %p)\n", contact->name, (void *)contact->name);
        printf("Celular: %s (Memory: %p)\n", contact->phone, (void *)contact->phone);
        printf("E-mail: %s (Memory: %p)\n", contact->email, (void *)contact->email);
    }
}

// Display all contacts
void displayContacts(Contact **contacts, size_t n) {
    for (size_t i = 0; i < n; i++) {
        printf("\nContato %zu:\n", i + 1);
        displayContact(contacts[i]);
    }
}
