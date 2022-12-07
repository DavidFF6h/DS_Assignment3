#include <iostream>
#include "StateData.h"

int main()
{
    StateData stateData; //Creating and instance of StateData
    stateData.InitializeMap(); //Initializing the map in our instance
    stateData.PrintMapData(); //Printing all of the values of our map
    stateData.ChangeCapital("Californio", "Los Angeles"); //Calling ChangeCapital with California misspelled to demonstrate the function not breaking  
    stateData.ChangeCapital("California", "Los Angeles"); //Using ChangeCapital to change the capital of California from Sacramento to Los Angeles
    stateData.PrintCapitalByState("Californai"); //Calling PrintCapitalByState with California misspelled to demonstrate the function not breaking 
    stateData.PrintCapitalByState("California"); //Calling PrintCapitalByState with California spelled correctly to demonstrate that the capital has changed to Los Angeles
}
