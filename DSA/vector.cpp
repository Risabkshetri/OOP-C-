// vector is basically resizable array

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cout << "Enter size of array : " << endl;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    };
    cout<<"Array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}