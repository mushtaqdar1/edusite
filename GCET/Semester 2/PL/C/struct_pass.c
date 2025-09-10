#include <stdio.h>

// Define the Book structure
struct Book {
    int book_id;
    char title[100];
    char author[100];
    float price;
};

// Function to display book details
void printBookDetails(struct Book b) {
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    // Create a Book instance and initialize values
    struct Book myBook = {101, "Let Us C", "Yashavant Kanetkar", 389.50};

    // Pass structure to function
    printBookDetails(myBook);

    return 0;
}
