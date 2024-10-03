#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate;

    // Taking input from the user
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (as an integer): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (as an integer): ");
    scanf("%d", &returnDate);

    // Display the inputs for verification
    printf("\nBook ID: %d", bookID);
    printf("\nDue Date: %d", dueDate);
    printf("\nReturn Date: %d\n", returnDate);

    return 0;
}