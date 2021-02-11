#include <iostream>
#include "Article.h"
#include "Book.h"
#include "Reference.h"
#include "ReferenceManager.h"
#include "TextBook.h"

using namespace std;

int main()
{
    Reference r;
    Book b;
    TextBook t;
	Article a;

    r.SetAuthor("Anh");
    r.SetPubYear(1920);
    r.SetTitle("Please Kill Me Instead of the Mocking Birb");
    r.PrintInfo();


    return 0;
}