#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){

    vi a;
    int b=5;
    for(int  i=0; i<b; i++){
        int x; cin>>x;
        a.push_back(x);
    }

    for(int i=0; i<b; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
    return 0;
}