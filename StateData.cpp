#include "StateData.h"

void StateData::InitializeMap()
{
    stateDataMap["Nebraska"] = "Lincoln";
    stateDataMap["New York"] = "Albany";
    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["California"] = "Sacramento";
    stateDataMap["Massachusetts"] = "Boston";
    stateDataMap["Texas"] = "Austin";
    return;
}

void StateData::PrintMapData()
{
    for (std::map<std::string, std::string>::iterator i = stateDataMap.begin(); i != stateDataMap.end(); i++) 
    {
        std::cout << "State: " << i->first << ", Capital: " << i->second << std::endl;
    }
    return;
}

void StateData::PrintCapitalByState(std::string state)
{
     std::map<std::string, std::string>::iterator i = stateDataMap.find(state);
     if (i == stateDataMap.end()) 
     {
        std::cout << state << " is not in our map" << std::endl;
     }
     else 
     {
         std::cout << "The capital of " << state << " is " << i->second << std::endl;
     }
     return;
}


void StateData::ChangeCapital(std::string state, std::string capital)
{
    std::map<std::string, std::string>::iterator i = stateDataMap.find(state);
    if (i == stateDataMap.end())
    {
        std::cout << state << " is not in our map" << std::endl;
    }
    else
    {
        stateDataMap[state] = capital;
        std::cout << "The capital of " << state << " has been changed to " << capital << std::endl;
    }
    return;
}
