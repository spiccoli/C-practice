/*
Exercise: Create a program to manage a list of books.
Each book should have a title and the number of pages. 
You'll dynamically allocate memory for the books and their titles.

Step-by-Step:

Define a Book Structure: DONE
Contains a title (dynamically allocated) and an integer for the number of pages. DONE
Functions to Implement:
addBook: Dynamically allocates memory for a new book and adds it to an array of books. DONE
printBooks: Prints all the books in the array. 
freeBooks: Frees the dynamically allocated memory for all books.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char *title;
    int nPages;
}Book;

void addBook(Book **books, int *booksCount, char *bookName, int bookPages){
    *books = realloc(*books, (*booksCount + 1) * sizeof(Book));
    (*books)[*booksCount].title = strdup(bookName);     
    (*books)[*booksCount].nPages = bookPages;
    (*booksCount)++;
}
void printBooks(Book *books, int booksCount){
    for (int i = 0; i < booksCount; i++)
    {
        printf("\n--------\n");
        printf("Book number %d/%d\n", i+1,booksCount);
        printf("%-15s | %-4s\n", "NAME", "PAGES");
        printf("%-15s | %-4d", books[i].title, books[i].nPages);
    }
}

int main(){
Book *books = NULL;
int booksCount = 0; 
addBook(&books, &booksCount, "1984", 328);
addBook(&books, &booksCount, "Brave New World", 268);
printBooks(books, booksCount);
return 0;
}