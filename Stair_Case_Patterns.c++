#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 6;

    for(int i=1; i<=n; i++){

        for(int j=0; j< i+(i % 2); j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}