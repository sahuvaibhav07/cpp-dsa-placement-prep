#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    
    cout << "Stack Example" << endl;
    cout << "Pushing: 10, 20, 30" << endl;
    
    st.push(10);
    st.push(20);
    st.push(30);
    
    cout << "Popping elements: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    
    return 0;
}
