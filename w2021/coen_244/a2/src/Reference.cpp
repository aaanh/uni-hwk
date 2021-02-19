#include "Reference.h"

// constructors, destructor

Reference::Reference() 
{

}

Reference::Reference(const Reference &ref) 
{
    
}

Reference::Reference(int uid_base, string title_base="<Not set>", string author_base="<Not set>", int pub_year_base=-1) 
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

void Reference::SetPubYear(int pub_year) 
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

void Reference::PrintReferenceInfo() {
    cout << "Unique Identifier: " << this->uid << endl;
    cout << "Title            : " << this->title << endl;
    cout << "Author           : " << this->author << endl;
    cout << "Published year   : " << this->pub_year << endl;
    cout << endl;
}

// error msg repository

string Reference::GetErrorMsg(int err) const
{
    switch(err) {
        case 1: return "[RangeError 1] Illegal page range. Check start and end page."; break;
        case 2: return "[RangeError 2] Illegal page range, or start and end page not defined."; break;
        case 3: return "[TypeError 1] Check type of input parameters."; break; 
        case 4: return "[TypeError 2] Check type of input parameters."; break; 
        default: return 0; break;
    }
}