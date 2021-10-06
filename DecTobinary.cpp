#include<iostream>
using namespace std;

int main()
{
	int Decno ;
	cout<<"Enter a decimal number: ";
	cin>>Decno ;
	int Binary[8] = {0};

    for(int i=7;i>=0;i--) 
	{
        Binary[i] = Decno % 2 ;
        Decno = Decno / 2 ;
    }
    cout<<"Binary Number is : " ;
	for(int i=0 ;i<8;i++)
	{
		cout<<Binary[i]<<" ";
	}
	
}
