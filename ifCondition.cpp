
#include <iostream>

using namespace std;

int main()
{
    int x ;
    cin >> x;
    x / 1000;
    if (x%2==0){
        cout<< "Even";
    }else{
        cout<< "odd";
    };
    cout<< "\n";

    ////////// Nested if  === && , ||

    cout<< "Nested if" << "\n";
    int id , password;
    cin>> id >> password;
    if (id ==123 && password == 123){
        cout<< "you are logged in ";
    }else{
        cout<< "invalid id or password";
    }
    return 0;
}
