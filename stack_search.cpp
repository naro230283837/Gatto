#include "StackLinked.h"
using namespace std;

int main() {
    StackLinked numbers;
    int target;

    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    numbers.push(40);
    numbers.push(50);

    cout << "Enter a number to search: ";
    cin >> target;

    numbers.search(target);

    return 0;
}
