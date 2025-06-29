# CS-210_Project3
# Corner Grocer Item Frequency Tracker

This C++ application was developed as part of SNHU's CS 210 course. It analyzes grocery store transaction logs to help store managers understand purchasing trends. The program reads a list of purchased items from a text file and provides a menu for viewing frequencies, searching for specific items, and generating a histogram.

## Features

- **Analyze Grocery Transactions** 
  Reads and counts item occurrences from a daily log file.

- **Search Functionality** 
  Look up how often a specific item was purchased.

- **Print All Frequencies** 
  Outputs each unique item with its total purchase count.

- **Histogram Display** 
  Renders a text-based bar graph using asterisks for easy visualization.

- **Backup Output File** 
  Automatically writes item frequency data to `frequency.dat` at startup.

## File Structure

```
.
├── main.cpp                  # Program entry point and menu logic
├── GroceryTracker.h          # Header file for GroceryTracker class
├── GroceryTracker.cpp        # Class implementation for item processing
├── CS210_Project_Three_Input_File.txt  # Input data file (grocery item log)
├── frequency.dat             # Output file written at runtime
├── README.md                 # This file
└── CornerGrocer_Documentation.docx     # Optional write-up with screenshots
```

## How to Build and Run

### Prerequisites

- C++17-compatible compiler
- Visual Studio (recommended per course instructions)

### Build Instructions

1. Open the `.sln` file in Visual Studio, or create a new console project and add:
   - `main.cpp`
   - `GroceryTracker.h`
   - `GroceryTracker.cpp`

2. Place `CS210_Project_Three_Input_File.txt` in the **same directory** as your `Debug` output or project root.

3. Build and run the program.

### Sample Menu

```
==== Corner Grocer Menu ====
1. Search for specific item frequency
2. Print all item frequencies
3. Print histogram of item frequencies
4. Exit
```

## Example Output

```
Peas occurred 6 time(s).
Zucchini ********
Cranberries *********
```

## Author

Keenan Helwig 
June 2025 · SNHU CS-210 Project Three
