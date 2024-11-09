/* Pattern_10 : Inverted Number Right-Angled Triangle Pattern

4444
333
22
1

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of Rows : ";
    cin>>n;
    int i=n;
    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            cout << i;
            j++;
        }
        cout << endl;
        i--;
    }
}