#include <iostream>

int main()
{
    int fibA = 1;
    int fibB = 2;
    int sum = 0;
    while(fibA < 4000000 || fibB < 4000000)
    {
        // Calculate sum of even terms
        if(fibA % 2 == 0 && fibA < 4000000) 
        {
            sum += fibA;
        }
        if(fibB % 2 == 0 && fibB < 4000000)
        {
            sum += fibB;
        }
        // Incrementing fibonacci sequence on both fibA and B
        fibA += fibB;    
        fibB += fibA;
    }
    std::cout << sum << "\n";
}