#include "Article.h"

// constructor, destructor

Article::Article() 
{
    
}

Article::~Article() 
{
    
}

// start page

int Article::GetStartPage() 
{
    return this->start_page;
}

// end page

int Article::GetEndPage() 
{
    return this->end_page;
}

// number of pages

int Article::GetNumberOfPages() 
{
    return GetEndPage() - GetEndPage();
}
