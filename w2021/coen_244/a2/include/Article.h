#pragma once

#include <iostream>
#include <string>
#include "Reference.h"

using namespace std;

class Article : public Reference {
    public:
        Article(); // default constructor

        int GetStartPage();
        int GetEndPage();
        int GetNumberOfPages();

        ~Article();

    private:
        static const int article_uid;
        
        string article_info;
        int start_page, end_page;

};