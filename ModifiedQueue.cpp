#include "ModifiedQueue.h"

void ModifiedQueue::move_to_rear()
{
	std::string temp = MyQueue.front(); //Temp variable = the first item in the queue
	MyQueue.pop(); //Removes the first item
	MyQueue.push(temp); //Adds our temp variable to the back of the queue
	return;
}

void ModifiedQueue::initialize_queue()
{
	//Using MyQueue.push() to initialize the queue
	MyQueue.push("Congrats");
	MyQueue.push("on");
	MyQueue.push("the");
	MyQueue.push("hackathon");
	MyQueue.push("win!");
	return;
}

void ModifiedQueue::print_queue()
{
	std::queue<std::string> temp = MyQueue; //Creating a copy of our queue
	for (size_t i = 0; i < temp.size(); i++)//Using a for loop, cout << temp.fromt(), and temp.pop() to iterate through our queue
	{
		std::cout << temp.front() << " ";
		temp.push(temp.front());
		temp.pop();
	}
	std::cout << std::endl << "----------" << std::endl;//For clarity 
	return;
}
