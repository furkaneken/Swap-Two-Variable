#include <iostream>

using namespace std;

int main()
{
    int first;
    int second;
    cout << "Please give a number as 1st variable: " ;
    cin >> first;
    cout << "Please give a number as 1st variable: ";
    cin >> second;
    
    // i solve this problem by using + and - operators but i didnt like it because it may overflow if i give too high values to first and second
    // so i search for it and figure it out i can use XOR operators too. But i didnt like this solution neither.
    // Because XOR operator compares every bit and its time complexity is too high for this problem. Also its lack of readibility.
    // I dont know function parameters is count in variable limit if they dont i would use two function and use their 
    // shallow copy feature by dont reference to parameters.
    // anyway XOR solution is here:
    
    first = first ^second;
    second = first ^second;
    first = first ^second;
    
    cout << "The value of the 1st variable: " << first << endl;
    cout << "The value of the 2nd variable: " << second;
}
