#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N : ";
    cin >> n;
    // int num=1;
    for(int i = 0 ; i < n ; i++){
        for(int j = i ; j < n; j++){
        cout << "* ";
        // num++;
        }
        cout << endl;
    }
    return 0;
}
