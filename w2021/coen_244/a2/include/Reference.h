#pragma once

#include <iostream>
#include <string>

using namespace std;

/**
 * Base class Reference
 * 
 * Methods: <string> GetTitle(), <void> SetTitle(string), <string> GetAuthor(), <void> SetAuthor(string),
 * <int> GetPubYear(), <void> SetPubYear(int), <int> GetUID(), <void> SetUID(),
 * <void> PrintInfo(), <string> GetErrorMessage();
 * 
 * Data members: 
 * 
 */
class Reference {
    public:
        Reference(); // Default object init with no params
        /**
         * Constructor with initializers
         * @param int uid
         * @param string title
         * @param string author
         * @param int pub_year
         * 
         */
        Reference(int, string, string, int);
        Reference(const Reference &ref); // Copy constructor

        static int instance_count;

        /**
         * Get the title data member of Reference class object
         * @return <string> title
         * 
         */
        string GetTitle() const;

        /**
         * Modify the title data member of Reference class object
         * @param string title
         * 
         */
        void SetTitle(string);

        /**
         * Get the author data member of Reference class object
         * @return <string> author
         * 
         */
        string GetAuthor() const;

        /**
         * Modify the author data member of Reference class object
         * @param string author
         * 
         */
        void SetAuthor(string);

        /**
         * Get the publication year data member of Reference class object
         * @return <int> pub_year
         * 
         */
        int GetPubYear() const;

        /**
         * Modify the publication year data member of Reference class object
         * @param int pub_year
         * 
         */
        void SetPubYear(int);

        /**
         * Get the UID for Reference class object
         * @return <int> uid
         * 
         */
        int GetUID() const;
        
        /**
         * Modify the UID data member of Reference class object
         * @param int uid
         * 
         */
        void SetUID(int);

        /**
         * Formatted print to console all available data members of Reference class object
         * 
         */
        void PrintReferenceInfo();

        string GetErrorMsg(int) const; // these error msgs need to be inherited

        ~Reference();

    private:
        int uid; // unique identifier
        string title;
        string author;
        int pub_year; // year of publication
        int *copy_ptr;

};