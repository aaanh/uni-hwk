#pragma once

#include <iostream>
#include <string>
#include "Reference.h"

using namespace std;

class Article : public Reference {
    public:
        Article(); // default constructor

        int GetStartPage() const;
        int GetEndPage() const;
        int GetNumberOfPages() const;

        virtual ~Article();

    private:
        static int uid;
        
        string article_info;
        int start_page, end_page;

};