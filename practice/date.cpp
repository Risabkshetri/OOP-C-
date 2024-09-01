#include <iostream>
#include <ctime>
using namespace std;
 

int main(){
    time_t timestamp;
    time(&timestamp);

    cout << ctime(&timestamp);
    return 0;
}