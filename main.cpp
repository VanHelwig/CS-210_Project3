/*
 * main.cpp
 *
 * Date: 6/21/2025
 * Author: Keenan Helwig
 * Description: Entry point for the Corner Grocer application that provides a menu for item frequency analysis.
 */

#include "GroceryTracker.h"
#include <iostream>
#include <limits>
using namespace std;

// Display menu options
void DisplayMenu() {
    cout << "\n==== Corner Grocer Menu ====" << endl;
    cout << "1. Search for specific item frequency" << endl;
    cout << "2. Print all item frequencies" << endl;
    cout << "3. Print histogram of item frequencies" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    const string inputFilename = "CS210_Project_Three_Input_File.txt";
    const string backupFilename = "frequency.dat";

    GroceryTracker tracker(inputFilename);
    tracker.CreateFrequencyFile(backupFilename);

    int choice;
    string itemName;

    while (true) {
        DisplayMenu();
        cin >> choice;

        // Input validation
        if (cin.fail() || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
            continue;
        }

        switch (choice) {
        case 1:
            cout << "Enter item name: ";
            cin >> itemName;
            cout << itemName << " occurred " << tracker.GetItemFrequency(itemName) << " time(s)." << endl;
            break;
        case 2:
            cout << "\nItem Frequencies:\n" << endl;
            tracker.PrintAllFrequencies();
            break;
        case 3:
            cout << "\nItem Frequency Histogram:\n" << endl;
            tracker.PrintHistogram();
            break;
        case 4:
            cout << "Exiting program. Goodbye!" << endl;
            return 0;
        }
    }

    return 0;
}
