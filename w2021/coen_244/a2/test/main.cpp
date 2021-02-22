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
    r.SetUID(420);
    r.SetAuthor("Anh R");
    r.SetPubYear(1920);
    r.SetTitle("Mahouka Koukou no Rettousei");
    r.PrintReferenceInfo();

    // copy constructor
    Reference r_new = r;
    r_new.PrintReferenceInfo();

    // Reference yeeter
    r.~Reference();
}

void TestArticle() {
    cout << "===== Article test =====" << endl;
    Article a;
    a.SetUID(421);
    a.SetAuthor("Anh A");
    a.SetTitle("Saenai Hiroin no Sodatekata");
    a.SetPubYear(1900);

    a.SetArticleInfo("Megumi Katou x Tomoya Aki");
    a.SetStartPage(444);
    a.SetEndPage(999);

    a.PrintArticleInfo();

    // copy constructor
    Article a_new = a;
    a_new.PrintArticleInfo();

    // Article yeeter
    a.~Article();
}

void TestBook() {
    cout << "===== Book test =====" << endl;
    Book b;
    b.SetUID(422);
    b.SetAuthor("Anh B");
    b.SetTitle("Monogatari");
    b.SetPubYear(1969);

    b.SetNumberOfPages(420);
    b.SetPublisher("Newyen Publishing House");
    b.PrintBookInfo();

    // copy constructor
    Book b_new = b;
    b_new.PrintBookInfo();

    // Book yeeter
    b.~Book();
}

void TestTextBook() {
    cout << "===== Textbook test =====" << endl;
    TextBook t;
    t.SetUID(423);
    t.SetAuthor("Anh T");
    t.SetTitle("Adachi to Shimamura");
    t.SetPubYear(420);

    t.SetNumberOfPages(69420);
    t.SetPublisher("Anh Publishing House");
    
    t.SetURL("https://hoanganh.tech");
    t.PrintTextBookInfo();

    // copy constructor
    TextBook t_new = t;
    t_new.PrintTextBookInfo();

    // TextBook yeeter
    t.~TextBook();

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