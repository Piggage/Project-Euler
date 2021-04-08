#include <iostream>
#include <string>

#define OUT

bool IsPalindrome(int i, int j, long int& largestPalindrome);

int main()
{
    // Is a palindromed 
    int largestI;
    int largestJ;
    long int largestPalindrome = 0;
    for(int i = 100; i < 1000; i++)
    {
        for(int j = 100; j < 1000; j++)
        {
            IsPalindrome(i, j, OUT largestPalindrome);
        }
    }
    std::cout << "Largest Palindrome: " << largestPalindrome << "\n";
}

bool IsPalindrome(int i, int j, long int& largestPalindrome)
{
    long int sum = i * j;
    std::string strSum = std::to_string(sum);
    std::string strSumBackwards = strSum;
    std::reverse(strSumBackwards.begin(), strSumBackwards.end());
    if(strSum == strSumBackwards)
    {
        std::cout << "Largest palindrome so far: " << strSum << "\n";
        if(sum > largestPalindrome)
        {
            largestPalindrome = sum;
        }
    }
    return strSum == strSumBackwards;
}