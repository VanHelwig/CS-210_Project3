/*
 * GroceryTracker.h
 *
 * Date: 6/21/2025
 * Author: Keenan Helwig
 * Description: Header file for GroceryTracker class which processes item frequency from a text file.
 */

#ifndef GROCERYTRACKER_H
#define GROCERYTRACKER_H

#include <string>
#include <map>
using namespace std;

class GroceryTracker {
public:
    GroceryTracker(const string& filename);
    void CreateFrequencyFile(const string& outputFilename);
    int GetItemFrequency(const string& item) const;
    void PrintAllFrequencies() const;
    void PrintHistogram() const;

private:
    void LoadItems();

    string m_filename;
    map<string, int> m_itemFrequency;
};

#endif // GROCERYTRACKER_H
