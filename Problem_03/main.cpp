#include <iostream>

int main()
{
    long long int largestPrimeFactor;
    long long int target = 600851475143;
    /* 
    Smaller version of target just over 1/3 of its value 
    to reduce iterations since a factor of an odd number 
    must be at least 3 times smaller than it.
    */
    long long int largestPossibleFactor = 200851475143;
    bool prime = false;
    /* 
    start at 3 and add 2 each iteration because only odd 
    numbers will be prime factors
    */
    for(long long int i = 3; i <= largestPossibleFactor; i+=2)
    {
        // Skip multiples of 5 because target ends in 3
        if(i % 5 == 0)
        {
            continue;
        }
        // Is i a prime number?
        for (long long int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                prime = false;
                break;
            }
        }
        // If i is not a prime, skip to next
        if(!prime)
        {
            prime = true;
            continue;
        }
        // Since it is a prime, check if it is a factor of target;
        if(target % i == 0)
        {
            largestPrimeFactor = i;
            std::cout << "largest prime factor so far: " << 
            largestPrimeFactor << "\n";
        }
    }
    std::cout << "largest prime factor: " << largestPrimeFactor << "\n";
}