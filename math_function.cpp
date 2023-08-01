#include <iostream>
#include <math.h>
#include <stdlib.h> // only for rand()  function

using namespace std;

int main()
{

    cout << "Ans is : " << ceil(2.8) << endl; // round up value
    cout << "Ans is : " << ceil(-9.8) << endl;

    cout << "Ans is : " << floor(2.8) << endl; // round down value
    cout << "Ans is : " << floor(-9.8) << endl;

    cout << "Ans is : " << round(2.8) << endl; // rounded value
    cout << "Ans is : " << round(-2.3) << endl;

    cout << "Ans is : " << abs(2.8) << endl; // absoulate value
    cout << "Ans is : " << abs(-9.3) << endl;

    cout << "Ans is : " << pow(2, 3) << endl; // x to the power y
    cout << "Ans is : " << pow(3, 4) << endl;

    cout << "Ans is : " << sqrt(16) << endl; // square root
    cout << "Ans is : " << sqrt(5) << endl;

    cout << "Ans is : " << rand() << endl;       // random value guess
    cout << "Ans is : " << rand() % 10 << endl;  // only 0 t0 9 can guess
    cout << "Ans is : " << rand() % 100 << endl; // only 0 to 99
}