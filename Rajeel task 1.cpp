// Task A1 -- Insert into Array
#include <iostream>
using namespace std;

int main() {
    int A[10] = {2,6,8,7,1};
    int size = 5;
    int pos = 3;
    int val = 9;
// Shift elements right from the end until position
    for (int i = size; i > pos; --i) {
        A[i] = A[i-1];
    }
    A[pos] = val;
    size++;

    cout << "After insertion: ";
    for (int i = 0; i < size; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
