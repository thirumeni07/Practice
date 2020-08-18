#include <iostream>
#include <unordered_map>

using namespace std;

bool isDist(int u){
    unordered_map<int,int>m;
    int r=u;
    while(r>0){
        ++m[r%10];
        r = r/10;
    }
    for ( auto it = m.begin(); it != m.end(); ++it ){
        if(it->second > 1){
            return false;
        }
    }
    return true;
}

int nYEAR(int w){
    while(true){
        w += 1;
        if(isDist(w)){
            return w;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<nYEAR(n);
    return 0;
}
