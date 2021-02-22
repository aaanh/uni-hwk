#include "Book.h"

// constructor, destructor

Book::Book(/* args */) 
{
    
}

Book::Book( int uid,
            string title,
            string author,
            int pub_year,
            
            string publisher="<Not set>", 
            int number_of_pages=-1
            )
            : Reference(uid, title, author, pub_year)
{
    this->SetPublisher(publisher);
    this->SetNumberOfPages(number_of_pages);
}

Book::Book(const Book &b) 
{
    // Reference base class
    SetTitle(b.GetTitle());
    SetAuthor(b.GetAuthor());
    SetPubYear(b.GetPubYear());

    // Book derived class
    SetPublisher(b.GetPublisher());
    SetNumberOfPages(b.GetNumberOfPages());
}

Book::~Book() 
{
    
}

// publisher info

string Book::GetPublisher() const
{
    return this->publisher;
}

void Book::SetPublisher(string publisher) 
{
    this->publisher = publisher;
}

// number of pages

int Book::GetNumberOfPages() const
{
    return this->number_of_pages;
}

void Book::SetNumberOfPages(int number_of_pages) 
{
    this->number_of_pages = number_of_pages;
}

// print book information

void Book::PrintBookInfo() const
{
    cout << "Unique Identifier: " << GetUID() << endl;
    cout << "Title            : " << GetTitle() << endl;
    cout << "Author           : " << GetAuthor() << endl;
    cout << "Number of pages  : " << GetNumberOfPages() << endl;
    cout << "Published year   : " << GetPubYear() << endl;
    cout << "Published by     : " << GetPublisher() << endl;
    cout << endl;
}