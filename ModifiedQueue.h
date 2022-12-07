#pragma once
#include <iostream>
#include <queue>

//Creating ModifiedQueue class
class ModifiedQueue
{
public:
	std::queue<std::string> MyQueue; //Creating the queue
	void move_to_rear(); //Moves the first index in the queue to the back of the queue
	void initialize_queue(); //Initializes the queue with values set in the .cpp file
	void print_queue(); //Prints each item in the queue to the console
};

