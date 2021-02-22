#include "TextBook.h"

// constructor, destructor

TextBook::TextBook() 
{
    
}

TextBook::TextBook( int uid,
                    string title,
                    string author,
                    int pub_year,

                    string publisher,
                    int number_of_pages,
                    
                    string url = "<Not set>"
                    )
                    : Book(uid, title, author, pub_year, publisher, number_of_pages)
{
    this->SetURL(url);
}

TextBook::TextBook(const TextBook &t) 
{
    // Reference grandparent base class
    SetTitle(t.GetTitle());
    SetAuthor(t.GetAuthor());
    SetPubYear(t.GetPubYear());

    // Book parent base class
    SetPublisher(t.GetPublisher());
    SetNumberOfPages(t.GetNumberOfPages());

    // TextBook derived class
    SetURL(t.GetURL());
}

TextBook::~TextBook() 
{
    cout << "TextBook object destroyed." << endl;
}

// url functions

string TextBook::GetURL() const
{
    return this->url;
}

void TextBook::SetURL(string url) 
{
    this->url = url;
}
