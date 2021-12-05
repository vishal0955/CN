/*Program 1: Write a program to generate VRC for a given Character.
Input: Character (Any Letter, digit or symbol) (ASCII value to binary)
(Generate binary (8 bits) according to the ASCII value)
Output: VRC with even/odd parity in 9 bits
A= 65  binary  count ‘1’ bits  if even, parity bit = 0, else parity
bit = 1 
*/

#include <iostream>
using namespace std;

void decToBinary(int n){

    int binaryNum[32];

    int i = 0,count=0,bit=0;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;

    }
    
 	for (int j = i - 1; j >= 0; j--)
 	{
 	 if(binaryNum[j]==1)
 	  {  
 	  count++;
  		}
 	 }
 	 cout<<"count : "<<count<<endl;
 	 if(count%2 !=0)
 	 {
 	 	bit=1;
	  }
	  cout<<"bits : ";
    for (int j = i - 1; j >= 0; j--)
		{
		
        cout << binaryNum[j];
    }
    cout<<bit;
}
 
int main()
{
   int n = 18;
    decToBinary(n);

    return 0;
}
