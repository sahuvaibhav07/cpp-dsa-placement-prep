#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    
    cout << "Queue Example" << endl;
    cout << "Enqueueing: 10, 20, 30" << endl;
    
    q.push(10);
    q.push(20);
    q.push(30);
    
    cout << "Dequeueing elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    
    return 0;
}
