#include "Palindrome.h"

bool is_palindrome(std::string s, int b, int e)
{
    if (b >= e) //If true, we have iterated through the entire string, so the string must be a palindrome
        return true;
    if (s[b] != s[e]) //If s[b] != s[e], the string can't be a palindrome, returns false
        return false;
    return is_palindrome(s, ++b, --e); //Calls is_palindrome recursively, passing in same string, but the characters compared are different
}
