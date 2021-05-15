#include <bits/stdc++.h>


using namespace std;


int main(){
    long long n;
    cin >> n;
    int arr[n], b=0;
    long long cMoves = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(b == 0){
            b = 1;
            continue;
        }
        if(arr[i] < arr[i-1]){
            cMoves = cMoves + arr[i-1]-arr[i];
            arr[i] = arr[i] + (arr[i-1]-arr[i]);
        }
    }
    cout << cMoves;
    
}
