#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int line_number = 1;
    while(line_number <= n){
        int stars=1;
        while(stars <= line_number){
            cout << "*";
            stars++;
        }
        cout << "\n";
        line_number++;
    }
    return 0;
}
