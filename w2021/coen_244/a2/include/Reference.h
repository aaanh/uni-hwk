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
 */
class Reference {
    public:
        Reference();
        Reference(const Reference &ref);

        static int instance_count;

        string GetTitle() const;
        void SetTitle(string);

        string GetAuthor() const;
        void SetAuthor(string);

        int GetPubYear() const;
        void SetPubYear(int);

        int GetUID() const;
        void SetUID(int);

        void PrintReferenceInfo();

        string GetErrorMsg(int) const; // these error msgs need to be inherited

        ~Reference();

    private:
        int uid; // unique identifier
        string title;
        string author;
        int pub_year; // year of publication

};