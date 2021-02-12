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
    r.SetAuthor("Anh");
    r.SetPubYear(1920);
    r.SetTitle("Please Kill Me Instead of the Mocking Birb");
    r.PrintReferenceInfo();
}

void TestArticle() {
    cout << "===== Article test =====" << endl;
    Article a;
    a.SetAuthor("Anh");
    a.SetTitle("Saenai Hiroin no Sodatekata");
    a.SetEndPage(999);
    a.SetStartPage(444);
    a.SetPubYear(1900);
    a.PrintArticleInfo();
}

void TestBook() {
    
    cout << "===== Book test =====" << endl;
    Book b;
    b.SetAuthor("Anh");
    b.SetNumberOfPages(420);
    b.SetPublisher("Newyen Publishing House");
    b.SetPubYear(1969);
    b.SetTitle("Babe Get My Gun");
    b.PrintBookInfo();
}

void TestTextBook() {
    cout << "===== Textbook test =====" << endl;
    TextBook t;
}

void TestReferenceManager() {
    cout << "===== ReferenceManager test =====" << endl;
    ReferenceManager rman;
}

int main()
{
    return 0;
}