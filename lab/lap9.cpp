// funtion template
#include<iostream>
using namespace std;

template <typename T> T myMax(T x, T y){
    return (x>y)? x : y;
};
int main(){
    int max;
    cout << "Max = " << myMax<int>(2, 4) << endl;
    cout << "Max = " << myMax<float>(6.9, 8.8) << endl;
    cout << "Max = " << myMax<char>('g', 'e');
}
// class template
#include<iostream>
using namespace std;

template <typename T> 
class Array{
    private:
       T* ptr;
       int size;
    
    public:
       Array(T arr[], int s){
           size = s;
           ptr = new T[s];
           for(int i = 0; i<size; i++){
               ptr[i] = arr[i];
           };
       };
       
       void print(){
            cout << "List = ";
           for(int i = 0; i<size; i++){
               cout << ptr[i] << " ";
           };
       };
       
       ~Array(){
           delete[] ptr;
       };
};

int main(){
    int arr[5] = {1,2,3,4,5};
    Array<int> a(arr, 5);
    a.print();
    return 0 ;
}