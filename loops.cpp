
#include <iostream>

using namespace std;

int main()
{
    // calc max number
    int n;
    cin>> n;
    int i = 1 , mx=-1;
    while(i <= n){
        int x;
        cin >> x;
        if (x > mx){
            mx=x;
        }
        i++;
    }
    cout<< mx;

    return 0;
}
