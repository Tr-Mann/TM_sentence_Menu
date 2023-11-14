// TM_Homework04_Program02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
	bool isRunning = true;
	int selection;
	int i;
	int length;
	string sentence;

	
			//Top section of menu
	cout << "Welcome to da program, Enter a full sentence and select an option." << endl;
	cout << "Enter -999 to exit the program." << endl;
	cout << "=====================================================================" << endl;
	//Options within menu
	cout << "1. Display the middle character if there is one." << endl;
	cout << "2. Convert sentence to uppercase." << endl;
	cout << "3. Convert sentence to lowercase." << endl;
	cout << "4. Display backwards." << endl;

	cout << endl << "Enter a sentence: ";
	//Getline for a full sentence so it can read whitespaces.
	getline(cin, sentence);

	//While loop for when program is running
	while (isRunning)
	{
		//loop will only reapeat selection section.
		//endl to make output easier to read, will separate last option from current
		cout << endl;
		//User makes selection
		cout << "Make a selection: ";
		cin >> selection;

		//While loop to make sure user enters a valid option

		//I don't like this solution to loop issue, I want to check a range, and be able to make an exception if it's possible.
		while (selection != 1 && selection != 2 && selection != 3 && selection != 4 && selection != -999)
		{ 
			cout << "Invalid input try again: " << endl;
			cin >> selection;
			cin.ignore();
		}
		//if statement executes menu selection user inputs
		if (selection == 1 && isRunning)
		{
			if ((sentence.length() - 1) % 2 == 1)
			{
				cout << "The middle character of your word is " << sentence.at((sentence.length() / 2) - 1) << endl;
			} 
			else
			{
				cout << "Your sentence has no middle character." << endl;
			}
		}
		else if(selection == 2 && isRunning)
		{
			//Set sentence to uppercase.
			for (i = 0; i < sentence.length(); i++)
			{
				//If checks if the character is within the range of lowercase characters
				//If it is, it will subtract 32 to its value, making it capital
				if (sentence.at(i) >= 97 && sentence.at(i) <= 122)
				{
					sentence.at(i) = int(sentence.at(i) - 32);
				}
				
			}
			
			cout << "Converted to uppercase: " << sentence << endl;
		}
		else if (selection == 3 && isRunning)
		{
			//Set sentence to lowercase.
			//use a for loop here to clean up code, and not need to set w back to zero elsewhere before running
			for (i = 0; i < sentence.length(); i++)
			{
				//If checks if the character is within the range of capital characters
				//If it is, it will add 32 to its value, making it lowercase
				if (sentence.at(i) >= 65 && sentence.at(i) <= 90)
				{
					sentence.at(i) = sentence.at(i) + 32;
				}
			}
			cout << "Converted to lowercase: " << sentence << endl;
		}
		else if(selection == 4 && isRunning)
		{
			//This length variable is only being used as a counter for moving through string
			//use a for loop here to clean up code, and not need to set w back to zero elsewhere before running
			for (length = sentence.length() - 1; length >= 0; length--)
			{
				cout << sentence.at(length);
			}
		}
		else
		{
			isRunning = false;
		}

	}
}
