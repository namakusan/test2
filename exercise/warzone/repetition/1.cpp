#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    for(int i=0; i<10; i++){
        cout<<i+1<<" ";

        this_thread::sleep_for(chrono::seconds(1))
    }
    return 0;
}