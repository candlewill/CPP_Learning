#include<iostream>
#include<cstring>

using namespace std;

struct Books
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

void print_book(struct Books);

void print_book_use_p(struct Books*);

int main_10() {


	struct Books book;

	/*	Wrong
	book.title = "Hi";
	*/
	strcpy_s(book.title, "Hi");
	cout << book.title << endl;
	cout << book.author << endl;

	strcpy_s(book.author, "Jack Ma");
	cout << book.title << endl;
	cout << book.author << endl;
	strcpy_s(book.subject, "Something about how to learning C++");

	book.book_id = 15454;

	print_book(book);

	// 为了使用指向该结构的指针访问结构的成员，您必须使用 -> 运算符
	struct Books* book_p;
	book_p = &book;
	cout << "using -> to visit struct member " << book_p->author << endl;

	print_book_use_p(&book);
	return 0;

}

void print_book(struct Books book) {
	cout << "Book title : " << book.title << endl;
	cout << "Book author : " << book.author << endl;
	cout << "Book subject : " << book.subject << endl;
	cout << "Book id : " << book.book_id << endl;
}

void print_book_use_p(struct Books* book) {
	cout << "Book title : " << book->title << endl;
	cout << "Book author : " << book->author << endl;
	cout << "Book subject : " << book->subject << endl;
	cout << "Book id : " << book->book_id << endl;
}