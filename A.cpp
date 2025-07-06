#include <iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        for(int i=0;i<k;i+=1){
            cout << "1";
        }
        for(int i=0;i<n-k;i+=1){
            cout << '0';
        }
        cout << endl;   
    }
    return 0;
}