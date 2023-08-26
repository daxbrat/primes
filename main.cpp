#include "std_lib_facilities.h"

int main()
{
	
    cout << "Prime numbers between 1 and 100 are:\n";

    for (int number = 2; number <= 100; ++number) {
        bool isPrime = true;

        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << number << " ";
        }
    }

    return 0;
}




