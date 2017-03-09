#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> x(n);
    for(int x_i = 0;x_i < n;x_i++){
       cin >> x[x_i];
    }
    int i=0,j,tower=0;
        sort(x.begin(),x.end());
    while(i<n){
        j=i;tower++;
        while(j+1!=n && x[j+1]<=x[i]+k){j++;}
        i=j;
        while(j+1!=n && x[j+1]<=x[i]+k){j++;}
        i=j+1;
        
    }
    cout<<tower;
    return 0;
}
