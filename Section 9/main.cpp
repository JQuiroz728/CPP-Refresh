#include <iostream>
#include <vector>

// Section 9 - Controlling Program Flow
// Challenge - Menu Program (List Operations)

int main() {

    bool flag = true;
    std::vector<int> vec;

    while (flag) {
        std::cout << "\nP - Print numbers" << std::endl;
        std::cout << "A - Add a number" << std::endl;
        std::cout << "M - Display mean of the numbers" << std::endl;
        std::cout << "S - Display the smallest number" << std::endl;
        std::cout << "L - Display the largest number" << std::endl;
        std::cout << "Q - Quit" << std::endl;
        std::cout << "\nEnter your choice: ";
        
        char userInput;
        std::cin >> userInput;
        userInput = toupper(userInput);

        if (userInput == 'P' || userInput == 'A' || userInput == 'M' || userInput == 'S' || userInput == 'L' || userInput == 'Q') {
            switch (userInput) {
                case 'P': 
                // Display current list of numbers to the user
                    if (vec.size() != 0) {
                        std::cout << "[ ";
                        for (auto x : vec) {
                            std::cout << x << " ";
                        }
                        std::cout << "]" << std::endl;
                    } else {
                        std::cout << "\n[] - The list is empty" << std::endl;
                    }
                    break;

                case 'A':
                // Add a number to our list
                    std::cout << "\nEnter a number to add to the list: ";
                    int numInput;
                    std::cin >> numInput;
                    vec.push_back(numInput);
                    std::cout << numInput << " was added" << std::endl;
                    break;
                    
                case 'M':
                // Display list information (sum, number of, and mean of elements)
                    if (vec.size() == 0) {
                        std::cout << "\nUnable to calculate the mean - no data" << std::endl;
                    } else {
                        int sum = 0;
                        for (auto x : vec) {
                            sum += x;
                        }
                        double mean = static_cast<double> (sum) / vec.size();
                        std::cout << "\nTotal sum of elements: " << sum << std::endl;
                        std::cout << "Number of elements: " << vec.size() << std::endl;
                        std::cout << "Average of elements: " << mean << std::endl;
                    }
                    break;
                
                 case 'S':
                 // Calculate smallest value in the list
                    if (vec.size() == 0) {
                        std::cout << "\nUnable to determine the smallest number - list is empty" << std::endl;
                    } else {
                        int smallestElement = vec.at(0);
                        for (auto element : vec) {
                            if (element < smallestElement) {
                                smallestElement = element;
                            }
                        }
                        std::cout << "\nThe smallest element is: " << smallestElement << std::endl;
                    }
                    break;
                
                case 'L':
                // Calculate largest value in the list
                    if (vec.size() == 0) {
                        std::cout << "\nUnable to determine the largest number - list is empty" << std::endl;
                    } else {
                        int largestElement = vec.at(0);
                        for (auto element : vec) {
                            if (element > largestElement) {
                                largestElement = element;
                            }
                        }
                        std::cout << "\nThe largest element is: " << largestElement << std::endl;
                    }
                    break;

                case 'Q':
                // Quit and exit the program
                    std::cout << "\nGoodbye..." << std::endl;
                    flag = false;
            }

        } else {
            std::cout << "\nUnknown selection, please try again" << std::endl;
        }
    } 
}
