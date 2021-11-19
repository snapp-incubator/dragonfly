#include <stdio.h>
#include <string.h>

#define NAME 20
#define CONTENT 100
#define CAPACITY 30

int count = 0;
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
void add_book(struct library lib){
	printf("Enter Book name : ");
	scanf("%s" , lib.name);
	printf("Enter author : ");
	scanf("%s" , lib.books->author);
	printf("Enter content : ");
	scanf("%s" , lib.books->content);
	count++;
}
struct library search_book(char author[NAME], int year){
	struct library lib;
	for(int i = 0;i < count;i++){
		if((author[i] == lib.books->author[i]) && (year == lib.books->year)){
			return lib;
		}
	}	
}
void remove_book(struct library lib, char author[NAME], int year){
	lib.books->flag = 1;
	for(int i = 0;i < count;i++){
		if((author[i] == lib.books->author[i]) && (year == lib.books->year)){
		   	return lib.books->flag = 1;
		}
	}
	return lib.books->flag = 0;
}
int main(){
	struct library centeral_library;
	
	return 0;
}