
#include <iostream>
#include <algorithm>
#include "Palindrome.h"

//Forward Declaring 
std::string ProcessInputStr();
int ProcessInputInt();
void InputLoop();
void Do_IsPalindrome();

int main()
{
	InputLoop(); //Calling InputLoop() to begin the input loop
}
//Collects input string, prevents user error
std::string ProcessInputStr()
{
	std::string input;
	std::cin >> input;
	while (std::cin.fail()) { //While cin fails, ask for input again*/
		std::cout << "Invalid input." << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Try again: ";
		std::cin >> input;
	}
	return input;
}
//Collects int input, prevents user error
int ProcessInputInt()
{
	int input;
	std::cin >> input;
	while (std::cin.fail()) { //While cin fails, ask for input again*/
		std::cout << "Invalid input, use integer values only!" << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Try again: ";
		std::cin >> input;
	}
	return input;
}
//Creates user input loop
void InputLoop()
{
	//String array for commands
	std::string commands[] = {
		"Check If a String is a Palindrome",
		"Exit"
	};
	const int NumberOfCommands = 2;
	int choice;
	do {
		//Print command number folowed by name followed by new line
		for (int i = 0; i != NumberOfCommands; i++) {
			std::cout << "Select: " << i << " " << commands[i] << std::endl;
		}
		//Use process input to get input, prevents user from entering incorrect data type
		choice = ProcessInputInt();
		//Switch case for choices, each choice calls function to get and pass input into member functions
		switch (choice) {
		case 0: Do_IsPalindrome(); break;
		case 1: return;
		default: {
			std::cout << "Input does not correspond to a command." << std::endl;
			continue;
		}
		}
	} while (choice != 1);
}
//Collects user input, calls is_palindrome function 
void Do_IsPalindrome()
{
	std::cout << "Enter a string to see if it is a palindrome: ";
	std::string s = ProcessInputStr();
	std::string t = s; //Creates temp string equal to the user's input string so I can convert it to full lowercase for the comparison, but keep the users string as they wrote it for the output
	std::transform(t.begin(), t.end(), t.begin(), ::tolower); //Converts string to lowercase since comparing characters is case sensitive 

	if (is_palindrome(t, 0, t.length() - 1)) //Calling is_palindrome using the lowercase temp string, lowercase prevents errors like "Hannah" not being considered a palindrome
	{
		std::cout << s << " is a palindrome!" << std::endl; //Output using original string 
	}
	else 
	{
		std::cout << s << " is not a palindrome!" << std::endl; //Output using original string
	}
}
