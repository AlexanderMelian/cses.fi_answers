#include <bits/stdc++.h>

using namespace std;

int main(){
    int act = 1, max = 0;
    char inp[1000000], help;
    cin >> inp;
    help = inp[0];
    for(int i = 1; i<strlen(inp); i++){
        if(inp[i] == help){
            act += 1;
        }
        else{
            help = inp[i];
            if(act>max){
                max = act;
            }
            act = 1;
        }
    }
    if(act>max){
        max = act;
    }
    cout << max;
}
