/* Pattern_01 : Star Half Pyramid ( Left-Aligned )

*
**
***
****
*****

 */


#include<iostream>
using namespace std;


int main(){
	int n;
    cout<<"Enter the number of Rows : ";
	cin>>n;
	int i,j;
	i=1;
	while(i<=n){
		j=1;
		while(j<=i){
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
}