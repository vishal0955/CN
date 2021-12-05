/*
Program 2: Write a program to generate LRC for a given Character.
Input: Character (Any digit or symbol)
(Generate binary according to the ASCII value)
Output: LRC with even/odd parity in 8 bits
C: 67: 10100110 //8 bits
E: 69: 10110010 //8 bits
LRC: 00010100
*/
#include <iostream>
using namespace std;
int main() 
{

    int n , binary[32];
    char alpha ;
    cin>>alpha;
    n = int(alpha) ;
   
    int i = 1;
    while (n > 0) {
 
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    int count1 = 0;
    for (int j = i - 1; j >= 0; j--)
   {
         if(binary[j] == 1)
            count1++ ;
   }

   if( count1 % 2 != 0 )
        binary[0] = 1 ;
    else
        binary[0] = 0 ;

    for (int j = i-1 ; j >= 0; j--)
   {
         cout<<binary[j] ;
   }
}
