#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,j;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n-1; i++){
        cin >> j;
        arr[j] = 1;
    }
    for(int i = 1; i <= n;i++){
        if(arr[i] != 1){
            cout << i;
            break;
        }
    }

}
