//1. Binary to decimal conversion
#include<iostream>
#include<stdlib.h>
using namespace std;

void decToBin( int num )
{
	int binArr[8] = {0};
	int index = 7 ;
    while (index >= 0 ) 
	{
        binArr[index] = num % 2 ;
        num = num / 2 ;
        index-- ;
    }
    
	while( index++ < 7 )
	{
		cout<<binArr[index]<<" ";
	}
}

int main()
{
	int dec ;
	cout<<"Enter a decimal number: ";
	cin>>dec ;
	
	decToBin(dec);
}