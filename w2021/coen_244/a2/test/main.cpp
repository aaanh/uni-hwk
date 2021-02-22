/**
 * @file main.cpp
 * 
 * @author Nguyen Hoang Anh
 * @date Feb 12, 2021
 * 
 */

#include <iostream>
#include "../include/Article.h"
#include "../include/Book.h"
#include "../include/Reference.h"
#include "../include/ReferenceManager.h"
#include "../include/TextBook.h"

using namespace std;

void TestReference() {
    cout << "===== Reference test =====" << endl;
    Reference r;
    r.SetAuthor("Anh R");
    r.SetPubYear(1920);
    r.SetTitle("Mahouka Koukou no Rettousei");
    r.PrintReferenceInfo();

    // copy constructor
    Reference r_new = r;
    r_new.PrintReferenceInfo();

    // yeeter
    r.~Reference();
}

void TestArticle() {
    cout << "===== Article test =====" << endl;
    Article a;
    a.SetAuthor("Anh A");
    a.SetTitle("Saenai Hiroin no Sodatekata");
    a.SetEndPage(999);
    a.SetStartPage(444);
    a.SetPubYear(1900);
    a.PrintArticleInfo();

    // copy constructor
    Article a_new = a;
    a_new.PrintArticleInfo();

    // yeeter
    a.~Article();
}

void TestBook() {
    
    cout << "===== Book test =====" << endl;
    Book b;
    b.SetAuthor("Anh B");
    b.SetNumberOfPages(420);
    b.SetPublisher("Newyen Publishing House");
    b.SetPubYear(1969);
    b.SetTitle("Monogatari");
    b.PrintBookInfo();
    b.~Book();
}

void TestTextBook() {
    cout << "===== Textbook test =====" << endl;
    TextBook t;
    t.SetAuthor("Anh T");
    t.SetTitle("Adachi to Shimamura");
    t.SetNumberOfPages(69420);
    t.SetPubYear(420);
}

void TestReferenceManager() {
    cout << "===== ReferenceManager test =====" << endl;
    ReferenceManager rman;
}

int main()
{
    TestReference();
    TestArticle();
    TestBook();
    TestTextBook();
    TestReferenceManager();

    return 0;
} 