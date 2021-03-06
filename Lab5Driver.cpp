// Lab5.cpp
// Ryan Durnan
// COSC-2030-01
// Lab5
// 15 Oct 2018

#include "stdafx.h"
#include <iostream>
#include <string>											// I need this for using strings from the STL
#include <stack>											// I need this for using stacks from the STL 
#include <vector>											// I need this for using vectors from the STL
#include <list>												// I need this for using lists from the STL
#include "Lab5MyStack.h"									// I need this to create custom "stacks"

using::std::cin;
using::std::cout;
using::std::endl;
using::std::stack;
using::std::string;
using::std::vector;
using::std::list;


// This function is meant to take an input from the user
// and return the input in reverse order. The input is
// stored in a stack. When the every character from the
// input is in the stack, I add the character from the top
// of the stack into another string and pop to the next
// character in the stack.
string stringReversal1(string input)
{
	string revin;											// The reverse of the input is stored here.
	stack<char> instack;									// Each character from the input is stored here.
	
	for (int i = 0; i < input.length(); i++)				// For each character in the input...
	{
		instack.push(input[i]);								// ...add that character to the stack.
	}

	while (!instack.empty())								// While the stack is not empty...
	{
		revin.push_back(instack.top());						// ...add the top character from the stack to the reverse string...
		instack.pop();										// ...take the top character off of the stack.
	}
	
	return revin;											// Return the reverse string once the stack is empty.
}

// This function is meant to take an input from the user
// and return the input in reverse order. The input is
// stored in a vector. When the every character from the
// input is in the vector, I add the character from the end
// of the vector into another string and pop back to the next
// character in the vector.
string stringReversal2(string input)
{
	string revin;											// The reverse of the input is stored here.
	vector<char> invect;									// Each character from the input is stored here.

	for (int i = 0; i < input.length(); i++)				// For each character in the input...
	{
		invect.push_back(input[i]);							// ...add that character to the vector.
	}

	while (!invect.empty())									// While the vector is not empty...
	{
		revin.push_back(invect.back());						// ...add the final character from the vector to the reverse string...
		invect.pop_back();									// ...remove the final character from the vector.
	}

	return revin;											// Return the reverse string once the vector is empty.
}

// This function is meant to take an input from the user
// and return the input in reverse order. The input is
// stored in a list. When the every character from the
// input is in the list, I add the character from the end
// of the list into another string and pop back to the next
// character in the list.
string stringReversal3(string input)
{
	string revin;											// The reverse of the input is stored here.
	list<char> inlist;										// Each character from the input is stored here.

	for (int i = 0; i < input.length(); i++)				// For each character in the input...
	{
		inlist.push_back(input[i]);							// ...add that character to the list.
	}

	while (!inlist.empty())									// While the list is not empty...
	{
		revin.push_back(inlist.back());						// ...add the final character from the list to the reverse string...
		inlist.pop_back();									// ...remove the final character from the list.
	}

	return revin;											// Return the reverse string once the list is empty.
}

// This function is meant to take an input from the user
// and return the input in reverse order. The input is
// stored in a vector from MyClass. When the every character from the
// input is in the vector, I add the character from the end
// of the vector into another string and pull the last character
// from the vector.
string stringReversal4(string input)
{
	string revin;											// The reverse of the input is stored here.
	MyStack instack;										// Each character from the input is stored in part of a MyStack object

	for (int i = 0; i < input.length(); i++)				// For each character in the input...
	{
		instack.push(input[i]);								// ...add that character to the MyStack object.
	}

	while (!instack.isEmpty())								// While the MyStack object is not empty...
	{
		revin.push_back(instack.pull());					// ...pull the last character from the MyStack object and put it into the reverse string.
	}

	return revin;											// Return the reverse string once the MyStack object is empty.
}

int main()
{
	string str;												// This stores the inputs for every instance of the stringReversal functions

	cout << "\n...:::  Stack Test  :::..." << endl << endl;
	cout << "Please input a string. I will reverse it:  ";	// Prompt the user's input.
	cin >> str;												// Get the user's input.
	cout << "Your string:  " << str << endl;				// Show the user's input before reversal.
	str = stringReversal1(str);								// Use stringReversal1 to reorder the user's input.
	cout << "Reverse string:  " << str << endl << endl;		// Show the reverse of the user's input.

	cout << "\n...:::  Vector Test  :::..." << endl << endl;
	cout << "Please input a string. I will reverse it:  ";	// Promput the user's input.
	cin >> str;												// Get the user's input.
	cout << "Your string:  " << str << endl;				// Show the user's input before reversal.
	str = stringReversal2(str);								// Use stringReversal2 to reorder the user's input.
	cout << "Reverse string:  " << str << endl << endl;		// Show the reverse of the user's input.

	cout << "\n...:::  List Test  :::..." << endl << endl;
	cout << "Please input a string. I will reverse it:  ";	// Prompt the user's input.
	cin >> str;												// Get the user's input.
	cout << "Your string:  " << str << endl;				// Show the user's input before reversal.
	str = stringReversal3(str);								// Use stringReversal3 to reorder the user's input.
	cout << "Reverse string:  " << str << endl << endl;		// Show the reverse of the user's input.

	cout << "\n...:::  MyStack Test  :::..." << endl << endl;
	cout << "Please input a string. I will reverse it:  ";	// Prompt the user's input.
	cin >> str;												// Get the user's input.
	cout << "Your string:  " << str << endl;				// Show the user's input before reversal.
	str = stringReversal4(str);								// Use stringReversal4 to reorder the user's input.
	cout << "Reverse string:  " << str << endl << endl;		// Show the reverse of the user's input.

    return 0;
}

