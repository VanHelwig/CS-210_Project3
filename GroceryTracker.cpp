/*
 * GroceryTracker.cpp
 *
 * Date: 6/21/2025
 * Author: Keenan Helwig
 * Description: Implementation of GroceryTracker class which processes item frequency from a text file.
 */

#include "GroceryTracker.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <stdexcept>

// Constructor: Loads the item data from the input file
GroceryTracker::GroceryTracker(const string& filename) : m_filename(filename) {
    LoadItems();
}

// Load items from input file and populate map with frequency counts
void GroceryTracker::LoadItems() {
    ifstream inFile(m_filename);
    if (!inFile) {
        throw runtime_error("Error: Cannot open input file.");
    }

    string item;
    while (getline(inFile, item)) {
        ++m_itemFrequency[item];
    }
    inFile.close();
}

// Create a backup frequency file with item counts
void GroceryTracker::CreateFrequencyFile(const string& outputFilename) {
    ofstream outFile(outputFilename);
    if (!outFile) {
        throw runtime_error("Error: Cannot open output file.");
    }

    for (const auto& entry : m_itemFrequency) {
        outFile << entry.first << " " << entry.second << endl;
    }
    outFile.close();
}

// Return frequency of a specific item
int GroceryTracker::GetItemFrequency(const string& item) const {
    auto it = m_itemFrequency.find(item);
    if (it != m_itemFrequency.end()) {
        return it->second;
    }
    return 0;
}

// Print all item frequencies to console
void GroceryTracker::PrintAllFrequencies() const {
    for (const auto& entry : m_itemFrequency) {
        cout << setw(12) << left << entry.first << " " << entry.second << endl;
    }
}

// Print histogram with asterisks for each item count
void GroceryTracker::PrintHistogram() const {
    for (const auto& entry : m_itemFrequency) {
        cout << setw(12) << left << entry.first << " ";
        for (int i = 0; i < entry.second; ++i) {
            cout << '*';
        }
        cout << endl;
    }
}
