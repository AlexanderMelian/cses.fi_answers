#include <bits/stdc++.h>

using namespace std;


int main(){
    long long n;
    cin >>n;
    if (n == 3 || n == 2){
        cout << "NO SOLUTION";
    }
    else{
        for(long long i = 2; i <= n; i+=2){
            cout << i << " ";
        }
        for(long long i = 1; i <= n; i+=2){
            cout << i << " ";
        }
    }


}
