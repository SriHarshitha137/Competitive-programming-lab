// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
//     int n,m;
//     cin>>n>>m;
     
//     vector<int>vec1(n,0);
//     vector<int>vec2(m,0);
    
//     for(int i=0;i<n;i++){
//         cin>>vec1[i];
//     }
//     for(int j=0;j<m;j++){
//         cin>>vec2[j];
//     }
//     int j=0;
//     int num1=0;
//     int num2=0;
//     int res=(m+n)/2;
//     if((m+n)%2==0){
//         res=res;
//     }
//     int i=0;
//    // int j=0;
//    int prev=0;
//    int count=0;
//     while( (i<(n)) && (j<(m))){
//         count++;
//       prev=num1;
//       if(vec1[i]<vec2[j]){
//        num1=vec1[i];           i++;
     
      
//       if((count)==(res)){
//          if((m+n)%2==0){
//             cout<<(num1+prev)/2.0;
//          }
//          else{
//             cout<<num1;
//          }
        
//     }
//       }
    
//     else{
//      num1=vec2[j];   j++;
        
    
//     if((count)==(res)){
//          if((m+n)%2==0){
//             cout<<(prev+num1)/2.0;
//          }
//          else{
//             cout<<num1;
//          }
        
//     }
//     }
    
//     }
//     return 0;
    
    
    
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> vec1(n);
    vector<int> vec2(m);

    for (int i = 0; i < n; i++)
        cin >> vec1[i];

    for (int i = 0; i < m; i++)
        cin >> vec2[i];

    int total = n + m;
    int target = total / 2;

    int i = 0, j = 0;
    int count = 0;
    int prev = 0, curr = 0;

    while (i < n && j < m) {
        prev = curr;

        if (vec1[i] <= vec2[j]) {
            curr = vec1[i];
            i++;
        } else {
            curr = vec2[j];
            j++;
        }

        if (count == target) {
            if (total % 2 == 0)
                cout << (prev / 2.0 + curr / 2.0);
            else
                cout << curr;
            return 0;
        }

        count++;
    }

    while (i < n) {
        prev = curr;
        curr = vec1[i++];
        if (count == target) {
            if (total % 2 == 0)
                cout << (prev / 2.0 + curr / 2.0);
            else
                cout << curr;
            return 0;
        }
        count++;
    }

    while (j < m) {
        prev = curr;
        curr = vec2[j++];
        if (count == target) {
            if (total % 2 == 0)
                cout << (prev + curr) / 2.0;
            else
                cout << curr;
            return 0;
        }
        count++;
    }

    return 0;
}
