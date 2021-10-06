#include <iostream>
#include <string>
using namespace std;
int main()
{
string bit;
string BFrame ="01111110";
int count=0;
cout<<"Enter the bit string ";
getline(cin , bit);

for (int i=0;i<bit.length();i++)
{
	
	if(bit[i]=='1')
		count++;
	else
		count=0;
	
	if(count==5)
		{
			bit.insert(i+1,"0") ;
			count=0;
		}
}

string Sbit = BFrame + " " + bit + " " + BFrame;
cout<<"After stuffing: "<<Sbit; 
return 0;	
}
