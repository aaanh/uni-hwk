#include <iostream>
#include "../include/Article.h"
#include "../include/Book.h"
#include "../include/Reference.h"
#include "../include/ReferenceManager.h"
#include "../include/TextBook.h"

using namespace std;

int main()
{
    Reference r;
    Book b;
    TextBook t;
	Article a;

    cout << "===== Reference example =====" << endl;

    r.SetAuthor("Anh");
    r.SetPubYear(1920);
    r.SetTitle("Please Kill Me Instead of the Mocking Birb");
    r.PrintReferenceInfo();

    cout << "===== Article example =====" << endl;

    a.SetAuthor("Anh");
    a.SetTitle("Saenai Hiroin no Sodatekata");
    a.SetEndPage(999);
    a.SetStartPage(444);
    a.SetPubYear(1900);
    a.PrintArticleInfo();


    cout << "===== Book example =====" << endl;

    b.SetAuthor("Anh");
    b.SetNumberOfPages(420);
    b.SetPublisher("Newyen Publishing House");
    b.SetPubYear(1969);
    b.SetTitle("Babe Get My Gun");
    b.PrintBookInfo();

    cout << "===== Textbook example =====" << endl;


    return 0;
}