#pragma once

#include "Reference.h"

/**
 * Article is a public derived class of Reference
 * Unique data members to <article> class: <string> article_info, <int> start_page, <int> end_page
 */
class Article : public Reference {
    public:
        Article(); // default constructor 
        /**
         * // regular constructor
         * @param int uid
         * @param string title
         * @param string author
         * @param int pub_year
         * @param string article_info
         * @param int start_page
         * @param int end_page
         * 
         */
        Article(int, string, string, int, string, int, int);
        Article(const Article &a); // copy constructor
        virtual ~Article(); // destructor

        

        /**
         * Get the string-type article_info data member from Article class object
         * @return <string> article_info
         * 
         */
        string GetArticleInfo() const;

        /**
         * Modify the article_info data member from Article class object
         * @param string article_info
         * 
         */
        void SetArticleInfo(string);


        /**
         * Getter function for start page.
         * @param none
         * @return (int) Start page number.
         * 
         */
        int GetStartPage() const;
        
        /**
         * Setter function for start page.
         * @param int Start page number for object of type article.
         */
        void SetStartPage(int);
        
        /**
         * Getter function for end page.
         * @param none
         * @return (int) End page number.
         * 
         */
        int GetEndPage() const;

        /**
         * Setter function for end page also incorporates simple page ranging sanity check
         * @param int End page number for object of type article. End page MUST be equal or larger than start page number.
         * @throws GetErrorMsg 
         */
        void SetEndPage(int);
        
        /**
         * Get the number of pages calculated from EXISTING start page and end page.
         * @param 
         * @return (int) Number of pages for object of type article. No corresponding data member.
         * 
         */
        int GetNumberOfPages() const;

        /**
         * Formatted print to console all available data members of article class object 
         * 
         */
        void PrintArticleInfo() const;

    private:
        // static int uid;
        string article_info;
        int start_page, end_page;

};