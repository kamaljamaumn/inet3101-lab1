Author

[Your Name]

Program Description

This program provides a simple database management system in C. Users can interact with the program via a command-line menu to add, delete, and view records. The program tracks database modifications and requires a database name as an argument when executed.

Menu Definition & Usage

The program starts by requiring a database name from the command line. If no name is provided, it exits with an error message. Once started, the menu loops until the user selects the exit option.

Menu Options:

Print all records

Add record

Delete the last record

Print number of records

Print database size

Print number of changes

Exit

Function Definitions

void PrintAllRecords()

Input: None

Output: Prints a placeholder message (to be implemented in future iterations)

Algorithm: Displays a message indicating the function was entered.

void AddRecord()

Input: User enters part details (number, name, size, metric, cost)

Output: Prints entered values

Algorithm:

Prompt for and collect user input.

Store inputs in respective variables.

Print stored values for verification.

Increment database modification counter.

void DeleteRecord()

Input: None

Output: Prints a placeholder message

Algorithm: Displays a message indicating the function was entered.

void PrintNumRecords()

Input: None

Output: Prints a placeholder message

Algorithm: Displays a message indicating the function was entered.

void PrintDBSize()

Input: None

Output: Prints a placeholder message

Algorithm: Displays a message indicating the function was entered.

int PrintNumChanges(bool print)

Input: bool print

Output: If print is true, it displays the count of modifications; otherwise, it increments the count.

Algorithm:

Check if print is true.

If true, print the current count.

If false, increment and display the count.