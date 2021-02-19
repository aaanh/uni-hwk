#include "Article.h"

// constructor, destructor
Article::Article() 
{

}

Article::Article(int uid, string title, string author, int pub_year, string article_info="<Not set>", int start_page=0, int end_page=0) : Reference(uid, title, author, pub_year) // implementation of init list
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
    this->end_page = end_page;
}

// number of pages

int Article::GetNumberOfPages() const
{
    // If block checks if page range is legal (>= 0), if not, return error message.
    if (GetStartPage() <= GetEndPage())
        return GetEndPage() - GetStartPage();
    else
    {
        cout << GetErrorMsg(1) << endl;
        return NULL;
    }
}

// print article information

void Article::PrintArticleInfo() const
{
    cout << "Unique Identifier: " << GetUID() << endl;
    cout << "Title            : " << GetTitle() << endl;
    cout << "Author           : " << GetAuthor() << endl;
    cout << "Number of pages  : " << GetNumberOfPages() << endl;
    cout << "Published year   : " << GetPubYear() << endl;
    cout << endl;
}