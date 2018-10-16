// Lab5MyStack.cpp
// Ryan Durnan
// COSC-2030-01
// Lab5
// 15 Oct 2018

#include "stdafx.h"
#include "Lab5MyStack.h"
#include <vector>

// Determines whether or not a MyClass object is empty
bool MyStack::isEmpty() const
{
	if (word.empty())						// If the vector is empty...
	{
		return true;						// ...return true.
	}

	else
	{
		return false;						// Otherwise, return false.
	}
}

// Adds a character to the end of the word vector
void MyStack::push(char& c)
{
	word.push_back(c);						// Add the character to the vector
	return;
}

// Returns the last character from the word vector before removing it
char MyStack::pull()
{
	char last = word.back();				// Store the last character from the vector
	word.pop_back();						// Remove the last character from the vector
	return last;							// Return the last character using its special variable
}