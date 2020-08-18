#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumSwaps(vector<int> arr) {
    int l=arr.size(), j=0, c=0, ans=0;
    pair<int,int>a[l];
    vector<bool> v(l, false);
    for(int i=0; i<l ;i++){
        a[i].first = arr[i];
        a[i].second = i;
    }
    sort(a, a+l);

    for(int i=0; i<l; i++){
        j=i;
        c=0;
        if(v[i] || a[i].second == i){
            continue;
        }
        while(!v[j]){
            v[j]=1;
            j=a[j].second;
            ++c;
        }
        if(c>0){
            ans += (c-1);
        }
    }
    return ans;
}

int main()
{
    vector<int> r = {4,3,2,1};
    cout<<minimumSwaps(r);
    return 0;
}
