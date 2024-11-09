/* Pattern_03 : Alphabet Triangle Pattern ( Left-Aligned )

A
BB
CCC
DDDD

*/

#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the number of Rows : ";
    cin>>n;
    int i,j;
    char ch='A';
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<ch;
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }
}