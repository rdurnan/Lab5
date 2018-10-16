// Lab5MyStack.h
// Ryan Durnan
// COSC-2030-01
// Lab5
// 15 Oct 2018

#ifndef LAB5MYSTACK_H_
#define LAB5MYSTACK_H_

#include "stdafx.h"
#include <vector>

using::std::vector;

class MyStack
{
public:
	// Determines whether or not a MyClass object is empty
	bool isEmpty() const;

	// Adds a character to the end of the word vector
	void push(char& c);

	// Returns the last character from the word vector before removing it
	char pull();

private:
	// Stores characters from a given input
	vector<char> word;
};

#endif