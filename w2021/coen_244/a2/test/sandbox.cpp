#include <iostream>
#include "Reference.h"
#include "Article.h"
#include "TextBook.h"
#include "Book.h"

using namespace std;

int main() {
    int *int_list{ new int[500]{} };
    int size = sizeof(int_list[0]);
    cout << "Size: " << size << endl;
    cout << "Element: " << int_list[5] << endl;

    // array of pointers to pointers
    Reference **test;
    test = new Reference*[500];
    test[0] = new Article();
    test[1] = new TextBook();
    test[2] = new Book();

    cout << test[0]->GetAuthor() << endl;
    cout << test[1]->GetAuthor() << endl;
    cout << test[2]->GetAuthor() << endl;

    // Polymorphism

    Reference *a = new Article(); // this apparently determines the accessibility of the class methods
    a->PrintReferenceInfo(); // so there's no PrintArticleInfo() method in (pointer to) object "a".

}