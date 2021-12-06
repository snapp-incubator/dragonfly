#include <stdio.h>
#include <string.h>

#define NAME 20
#define CONTENT 100
#define CAPACITY 30

struct book {
	char author[NAME];
	char content[CONTENT];
	int year;
	int flag;
};

struct library {
	struct book books[CAPACITY];
	char name[NAME];
};

void add_book(struct library lib) {
	struct book book
	for (int i = 0; i < CAPACITY; i++) {
		if (lib.books[i].flag == 1) 
		{
			strcpy(lib.books[i].author, book.author);
			strcpy(lib.books[i].content, book.content);
			lib.books[i].year = book.year; 
			lib.books[i].flag = 0;
			return;
		}
  	}
}

int search_book(struct library lib, char author[NAME], int year) {
	for (int i = 0;i < CAPACITY; i++) {
		if (lib.books[i].flag == 1 && (strcmp(lib.books[i].author, author) == 0 && (year == lib.books[i].year))) {
			return i;
		}
	}	
	return -1;
}

void remove_book(struct library lib, char author[NAME], int year){
	int id = search_book(lib, author, year);
  
	if (id == -1) 
		return;
  
	lib.books[id].flag = 1;
}

int main()
{
	struct library centeral_library;
	strcpy(centeral_library.name , "Test");
	strcpy(centeral_library.books->author , "Test-author");
	strcpy(centeral_library.books->content , "Test-content");
	centeral_library.books->year = 1995;
	add_book(centeral_library);
	search_book(centeral_library , "Test-author" , 1995);
	remove_book(centeral_library , "Test-author" , 1995);
	return 0;
}
