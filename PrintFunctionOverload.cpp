/*
Print Function Overload
Pawelski
5/1/2022
Please follow the instructions on the activity guide.
*/

#include <iostream>
#include <string>

/// <summary>
/// Prints the passed text to the console.
/// </summary>
/// <param name="text">Optional. Text to be printed. Default is "".</param>
/// <param name="end">Optional. String to be added to the end of the printed text. Default is "\n".</param>
void Print(std::string text = "", std::string end = "\n")
{
    // Version 1
    std::cout << text << end;
}

/// <summary>
/// Prints the passed number to the console.
/// </summary>
/// <param name="num">Number to be printed.</param>
/// <param name="end">Optional. String to be added to the end of the printed text. Default is "\n".</param>
void Print(int num, std::string end = "\n")
{
    // Version 2
    std::cout << num << end;
}

/// <summary>
/// Prints the passed number to the console.
/// </summary>
/// <param name="num">Number to be printed.</param>
/// <param name="end">Optional. String to be added to the end of the printed text. Default is "\n".</param>
void Print(double num, std::string end = "\n")
{
    // Version 3
    std::cout << num << end;
}

int main()
{
    Print("This is some text to display!");
    Print("This is followed by a number... ", "");
    Print(3);
    Print(5.2);
    Print("This combines text and a number... " + std::to_string(4));
    Print();
    return 0;
}
