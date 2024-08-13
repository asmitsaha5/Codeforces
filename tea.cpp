#include <iostream>
#include <string>

int main()
{
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Convert the integer to a string
    std::string numberStr = to_string(a);

    // Check if the number has at least two digits
    if (numberStr.length() > 2)
    {
        // Remove the first two digits
        numberStr = numberStr.substr(2);
    }
    else
    {
        numberStr = "0"; // If the number has less than two digits, set it to "0"
    }

    // Convert the string back to an integer
    int x = std::stoi(numberStr);

    cout << x << endl;
}