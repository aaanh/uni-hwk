#include "Reference.h"

// constructors, destructor

Reference::Reference() 
{
    
}

Reference::Reference(const Reference &ref) 
{
    
}

Reference::~Reference() 
{

}

// title

string Reference::GetTitle() const 
{
    return this->title;
}

void Reference::SetTitle(string title) 
{
    this->title = title;
}

// author

string Reference::GetAuthor() const 
{
    return this->author;
}

void Reference::SetAuthor(string author) 
{
    this->author = author;
}

// publish year

int Reference::GetPubYear() const 
{
    return this->pub_year;
}

void Reference::SetPubYear(int) 
{
    this->pub_year = pub_year;
}

// reference uid

int Reference::GetUID() const 
{
    return this->uid;
}

void Reference::SetUID(int) 
{
    this->uid = uid;
}

// print to console output

void Reference::PrintInfo() {
    cout << "Unique Identifier: " << this->uid << endl;
    cout << "Title            : " << this->title << endl;
    cout << "Author           : " << this->author << endl;
    cout << "Published year   : " << this->pub_year << endl;
    cout << endl;
}