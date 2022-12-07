#include <iostream>
#include "ModifiedQueue.h"

int main()
{
	ModifiedQueue modifiedQueue; //Creating an instance of our ModifiedQueue class
	modifiedQueue.initialize_queue(); //Initializing the queue instance with the hardcoded values
	modifiedQueue.print_queue(); //Printing the contents of the queue to show a "before" state
	modifiedQueue.move_to_rear(); //Calling the move_to_rear function
	modifiedQueue.print_queue(); //Printing a second time to show that the function works as intended
}