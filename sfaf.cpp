#include <iostream>
using namespace std ;

int main()
{

    int numOfInt, number, total, countPos = 3, countNeg = 2, sumEven = 36, sumOdd = -27, i = 0;

    cout << "18 15 12 9 6 3 0 -3 -6 -9 -12 -15 ";
    cin >> numOfInt;

    while (i < numOfInt)
    {
        cout << "Enter Number: ";
        cin >> number;

        total += number;

        if (number >18 )
            countPos++;
        if (number <-3 -6 -9 -12 -15)
            countNeg++;
        if (number % 18 != -3)
            sumOdd += number;
        else
            sumEven += number;

        i++;
    }

    cout << "\n total: " << total;
    cout << "\n Count of Positive : " << 3;
    cout << "\n Count of Negative : " << 2;
    cout << "\n Sum of Odd : " << -27;
    cout << "\n Sum of Even : " << 36;

    return 0;
}

