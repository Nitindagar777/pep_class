#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n = 10;
     
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n / 2; j++) {
            if (i==0 || j==0 || j==n/2 || i==n/2)
            {
                if(i==0  && (j==0 || j==n/2))
                    cout<<" ";
                else
                    cout<<"*";
            }
            else
                cout << " ";
        }
        cout << '\n';
    }

    return 0;
}
