#include <iostream>
#include <math.h>
using namespace std;
int main()
{	
	int k;
	int n;
	int p=1;
	setlocale(LC_ALL,"Russian");
	cout<<"¬ведите число"<<endl;
	cin>>n;
	for (k=1;k<=n;k++){
		p*=k;
	}
	
	cout<<p<<endl;

}

