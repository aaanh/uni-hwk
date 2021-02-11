#include "Article.h"

// constructor, destructor

Article::Article() 
{
    
}

Article::~Article() 
{
    
}

// start page


int Article::GetStartPage() const
{
    return this->start_page;
}

void Article::SetStartPage(int start_page) 
{
    this->start_page = start_page;
}

// end page

int Article::GetEndPage() const
{
    return this->end_page;
}


void Article::SetEndPage(int end_page) 
{
    if (GetEndPage() >= GetStartPage()) 
    {
        this->end_page;
    }
    else 
    {
        cout << GetErrorMsg(1) << endl;
    } 
}

// number of pages

int Article::GetNumberOfPages() const
{
    if (GetStartPage() && GetEndPage())
        return GetEndPage() - GetEndPage();
    else
    {
        cout << GetErrorMsg(2) << endl;
    }
}
