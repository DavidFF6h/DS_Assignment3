#pragma once
#include <string>
#include <iostream>
#include <map>
class StateData
{
public:
	std::map<std::string, std::string> stateDataMap; //Creating the map
	void InitializeMap(); //Initializes the map with data set in the .cpp file
	void PrintMapData(); //Prints each state and capital pair stored in the map
	void PrintCapitalByState(std::string state); //Prints the capital of a state determined by the user 
	void ChangeCapital(std::string state, std::string capital); //Allows the user to change the capital of a specified state
};

