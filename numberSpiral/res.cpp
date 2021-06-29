#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
    int tests;
    ll y,x;
    ll res;
    bool isy = true;
    cin >> tests;

    while(tests--){
        cin >> y >> x;
        if(y>x){
            isy = true;
        }
        else{
            isy = false;
        }
        res = 1;
        if(isy){
            // for(ll i = 0, j = 0; i < y;i++){
            //     res = res+j;
            //     j+=2;
            // }
            res = (y*(y-1))+1;
            if(y%2==0){
                res += y-x;
            }else{
                res -=y-x;
            }
        }else{
            // for(ll i = 0, j = 0; i < x;i++){
            //     res = res+j;
            //     j+=2;
            // }
            res = (x*(x-1))+1;
            if(x%2==0){
                res -= x-y;
            }else{
                res +=x-y;
            }
        }
        cout << res << "\n";
    }
}

/*
1 = 1
2 = 3
3 = 7
4 = 13
5 = 21

3 = 7
(3 * 2) + 1 = 7
(n * (n-1)) + 1

*/
/*
3
2 3
1 1
4 2

res=
8
1
15

*/

/*
1
1000000000 1000000000

*/