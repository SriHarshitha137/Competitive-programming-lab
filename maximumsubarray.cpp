#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int maxsum=INT_MIN;
    int sum=0;
    int n;
    cin>>n;
    vector<int>vec(n,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        // cout<<vec[i];
    }
    for(int j=0;j<n;j++){
        sum+=vec[j];
        // cout<<sum;
        if(maxsum<sum){
            maxsum=sum;
        }
        // cout<<maxsum;
        if(sum<0){
            sum=0;
        }
        
    }
    
    cout<<maxsum;
     
    return 0;
}
