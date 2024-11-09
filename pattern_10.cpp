/* Pattern_10 : Inverted Star Right-Angled Triangle Pattern

****
***
**
*

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
            cout << "*";
            j++;
        }
        cout << endl;
        i--;
    }
}
