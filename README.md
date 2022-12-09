# DS_Assignment3

# Part 1: (move_to_rear)

## Description:
  In this program I created and implemented a function that moves the first item in a queue to the back of the queue, using front(), pop(), and push()
  
## How to run:
  1: Get files: ModifiedQueue.h, ModifiedQueue.cpp, and Assignment3_Queue.cpp from github
  
  2: Bring those files into your IDE of choice
  
  3: Build and run
  
## ModifiedQueue.h:
  This is the programs header file, containing all of the member function declarations of the ModifiedQueue class
  
  ### In the public section it contains definitions for:
   - std::queue<std::string> MyQueue, which is the Queue we will be acting on
   - void move_to_rear(), which moves the first index to the rear of the queue when called 
   - void initialize_queue(), which fills the queue with initial values for testing purposes
   - void print_queue(), which prints the contents of the queue to show that move_to_rear() functions properly 
    
## ModifiedQueue.cpp:
  This is the implementation file containing all of the logic for the functions declared in ModifiedQueue.h
  
   ### void ModifiedQueue::move_to_rear()
   This function starts by creating a string variable called temp, and sets it equal to the first item in the queue through use of the front() function. Then, it uses the pop() function to remove the first element, before finally using push(temp) to place what was originally the first item to the back of the queue.
      
   ### void ModifiedQueue::initialize_queue()
   This function simply uses the push() funtion to fill the queue with hard-coded strings for testing purposes
    
   ### void ModifiedQueue::print_queue()
   This function creates a copy of our queue, enters a for loop, utilizes front() to print the queues items to the console, and uses pop() and push() to iterate through the queue. After the for loop terminates, it uses endl, several hyphens, and then endl once more to assist with readability in the console.
      
## Assignment3_Queue.cpp:
  This is the test file
  
  In int main() I begin by creating an instance of the ModifiedQueue class, then I call initialize_queue() to fill the queue with data. print_queue() is called to display the order of the queue, then move_to_rear() is called, then print_queue() is called once more to show that everything works as intended.
  
## Output Screenshots:
  - The first line displays the contents of the queue before move_to_rear() was called, while the third line displays the contents of the queue after move_to_rear() was called 

  ![Mtr](https://user-images.githubusercontent.com/113874835/206347634-f4647871-08d7-44da-9dfb-7332f6d6e0da.png)

# Part 2: (Recursive Palindrome):

## Description:
  In this program I created and implemented a function that uses recursion to determine whether or not its argument string is a palindrome 
  
## How to run:
  1: Get files: Palindrome.h, Palindrome.cpp, and Assignment3_RecursivePalindrome.cpp from github
  
  2: Bring those files into your IDE of choice
  
  3: Build and run
  
## Instructions: 
  The user is given the choice of either entering 0 to see if a string is a palindrome or entering 1 to terminate the program.
  After choosing 0, simply enter any string to see if it is a palindrome or not.
  
## Palindrome.h:
  This is the header file, which only contains a declaration for one function:
  
  - bool is_palindrome(std::string s, int b, int e), which takes as arguments a string, an integer b which represents the forward moving iterator that starts at the first character of the string, and an integer e which represents the backwards moving iterator which moves backwards from the end of the string.

## Palindrome.cpp:
  This is the implementation file, containing the logic for:
  
  ### bool is_palindrome(std::string s, int b, int e)
   This function begins by using an if statement to check if b >= e, if true there is one character in the string, or we have iterated through the entire string without returning false, so the string must be a palindrome. After the first if statement, we have another one comparing the element of the string corresponding to b and e. If string[b] != string[e] then the string cannot be a palindrome and the function returns false. If neither of the above return cases are executed the function returns is_palindrome(s, ++b, --e).
    
## Assignment3_RecursivePalindrome.cpp:
 This is the test file
  
  Prior to int main() I forward declare:
   - std::string ProcessInputStr(), which allows the user to enter a string while protecting against errors due to user input
   - int ProcessInputInt(), which allows the user to enter an integer value while protecting against errors due to user input
   - void InputLoop(), which as its name implies, prints the choices and promts the user to choose one, and loops until the user decides to end the program. If the user enters 0 as their choice, Do_IsPalindrome() is called, if 1 is entered the program terminates.
   - void Do_IsPalindrome(), which prompts the user to enter a string and calls ProcessInputStr() to collect user input. However, rather than just calling the is_palindrome() function with that input, it creates a copy of the string, named t, and uses the transform() function to convert the copy of the string to full lowercase, and calls is_palindrome() with the now lowercase copy as the string argument. This is to prevent an uppercase character in a palindrome from causing the function to return false. 0 in passed in for int b (the forward iterator that starts at the beginning of the string), and t.length() - 1 is passed in for int e (the backwards moving iterator that starts at the end of the string). The function then uses an if statement to print whether or not the users input string is a palindrome based on what is returned by is_palindrome(t, 0, t.length() - 1). When printing the result, the original string entered by the user is used.
    
   In int main(), all that is called is InputLoop()
    
## Input and Output Screenshots:
  - Upon running the program, the user is greeted with:
  
  ![p1](https://user-images.githubusercontent.com/113874835/206528220-a86f7180-6266-44df-b2a0-e6c0b331f6f3.png)
    
  - After entering 0 the user is prompted to enter a string. "pokemon" is entered, and because pokemon isn't a palindrome "pokemon is not a palindrome!" is printed, then the user is prompted for input once more.
  
  ![p2](https://user-images.githubusercontent.com/113874835/206529010-5c418be4-1f8b-42cd-9840-2205b193fe90.png)
    
  - The user enters 0 to check if a string is a palindrome, and this time enters "racecar", which is a palindrome, so "racecar is a palindrome!" is printed, then the user is prompted for input once more.
  
  ![p3](https://user-images.githubusercontent.com/113874835/206529783-617931af-de97-4d19-beca-a89261a67519.png)
    
  - Next, the user checks to see if "Hannah" is a palindrome. Thanks to the transform() function, the string is converted to lowercase before being passed into the is_palindrome() function to combat the issue of H not being equal to h. "Hannah is a palindrome!" is displayed to the user. Notice that "Hannah" is printed with the same capitalization the user entered; I prefer it this way, and it's the reason a copy of the users string is converted to lowercase and used for comparison rather than the original.
  
  ![p4](https://user-images.githubusercontent.com/113874835/206531929-11a289a3-c289-49b1-9d70-ee3920f70abd.png)
    
  - Then, the user checks to see if "RaCEcAr" is a palidrome, and "RaCEcAr is a palindrome!" is printed out. This is just to show that everything still works with strange patterns of capitalization.
  
  ![p5](https://user-images.githubusercontent.com/113874835/206532583-62e32876-4445-4cd5-b57b-af16d4e8a94b.png)

# Part 3: (Map<State, Capital>)

## Description:
  In this program I create a class containing a map container, stateDataMap, that stores pairs of strings in the form (state, capital). In this class I also created functions to: fill the map with specific data, print all of the data pairs within the map, print one specific pair within the map specified by the user, and to change the capital (value) of a specified pair depending on the state (key) entered by the user.
  
## How to run:
  1: Get files: StateMap.h, StateMap.cpp, and Assignment3_Map.cpp from github
  
  2: Bring those files into your IDE of choice
  
  3: Build and run

## StateData.h:
  This is the headerfile, containing the declaration of our map, and all of the functions that act upon our map.
  
  ### In the public section it contains definitions for:
  
  - std::map<std::string, std::string> stateDataMap, which is the map that we will be acting upon
	- void InitializeMap(), which initializes the map by filling it with the key and value pairs required by the assignment
	- void PrintMapData(), which prints all of the map's contents, as required by the assignment
	- void PrintCapitalByState(std::string state), prints a the data for a single state when the state is passed into the function as an argument
	- void ChangeCapital(std::string state, std::string capital), which allows the user to change the capital of a specified state, and is used in the program to change the capital of California to Los Angeles, as required by the assignment
	
## StateData.cpp:
  This is the implementation file, containing the logic for:
  
  ### void StateData::InitializeMap()
   This function simply adds keys (states) and their corresponding values (capitals) to our map.
   
  ### void StateData::PrintMapData()
   This function uses a for loop to iterate from stateDataMap.begin() to stateDataMap.end(). In each iteration the corresponding state and its capital are printed to the console.
   
  ### void StateData::PrintCapitalByState(std::string state)
   This function uses stateDataMap.find(state) to find an iterator corresponding to the state the user is looking for. If the state exists in the map, the function prints: "The capital of " (state entered by user) " is " (corresponding capital). If the state doesn't exist in the map, it prints: (state entered by user) " is not in our map".
  
  ### void StateData::ChangeCapital(std::string state, std::string capital)
   Like PrintCapitalByState(), this function uses stateDataMap.find(state) to find an iterator corresponding to the state the user is looking for. If the state exists in the map, the function sets stateDataMap[state] equal to  the capital entered by the user, and prints "The capital of " (state entered by user) " has been chaged to " (capital entered by user). If the state doesn't exist in the map, it prints: (state entered by user) " is not in our map".

## Assignment3_Map.cpp:
 This is the test file
 
 In int main() I begin by creating an instance of the StateData class and calling stateData.Initialize() to initialize the map with the values and keys required by the assignment. Then, stateData.PrintMapData() is called to to display the initial contents of the map. stateMap.ChangeCapital() is called with California spelled incorrectly as an argument, showcasing that this doesn't cause any issues. stateMap.ChangeCapital() is called once again, with California (now spelled correctly) and Los Angeles as arguments, which changes California's capital to Los Angeles, as required by the assignment. Then, stateData.PrintCapitalByState() is called with California spelled incorrectly to once again demonstrate that this doesn't cause issues, and then stateData.PrintCapitalByState() is called one last time with California spelled correctly to demonstrate that the ChangeCapital() function worked as intended.
 
## Output Screenshots:
 - The contents of the initialized map being printed to the console by the PrintMapData() function:
 
 ![m1](https://user-images.githubusercontent.com/113874835/206604865-cd9f40c4-9452-4e47-9a1f-7a813750f25d.png)
  
 - After ChangeCapital() is called with California spelled incorrectly:

 ![m2](https://user-images.githubusercontent.com/113874835/206605139-32b98936-c82c-43d8-811b-f31ffb7b7ed9.png)
 
 - After ChangeCapital() is called with California spelled correctly, and Los Angeles is passed in as the capital argument:
 
 ![m3](https://user-images.githubusercontent.com/113874835/206605250-61269828-a629-4962-ab39-576249f2b2f0.png)

 - After PrintCapitalByState() is called with California spelled incorrectly:
 
 ![m4](https://user-images.githubusercontent.com/113874835/206605323-cd40822d-6e9f-486e-b4e5-06a9624482a6.png)
  
 - After PrintCapitalByState() is called with California spelled correctly:
 
 ![m5](https://user-images.githubusercontent.com/113874835/206605445-5fa6d18f-6aa5-45c1-8a4f-ca92019178f6.png)


