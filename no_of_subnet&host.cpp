/*
program 9 : Write a Program to calculate total number of subnets and
total number of hosts given subnet mask (dotted decimal notation) as
input by the user for classful addressing.
Input: 255.255.240.0
Output: No. of Subnets: 14
 No. of Hosts: 4094
 */

 #include<bits/stdc++.h>
 #include <cmath>
 using namespace std;
 string d_to_b(int d)
 {
    int binaryNum[8]={0,0,0,0,0,0,0,0};
    int i = 0;
    string b;
    while (d > 0) {
        binaryNum[i] = d % 2;
        d = d / 2;
        i++;
    }
    if(i==0)
    {
       i=8;
     for (int j = i - 1; j >= 0; j--)
    {
      b=b+to_string(binaryNum[j]);
    }
    }
    else
    {
    for (int j = i - 1; j >= 0; j--)
    {
      b=b+to_string(binaryNum[j]);
    }
    }
     
         return b;
 }


 string dot_dec_to_dot_bin(string sb)
 {
    int octet;
    string s1="",bsb="",bin="";
   for(int i=0;i<sb.length();i++)
   {
      if(sb[i]=='.')
      {
        bin+=d_to_b(stoi(s1));
        s1="";
        continue;
      }
      s1=s1+sb[i];
   }
   return bin;
 }


 int main()
 {
    int h_id=0,N_id_s_id=0, s_id=0;
  string sb;
  cout<<"Enter the Subnet mask:\n";
  cin>>sb;
  sb+=".";
  string sb_binary=dot_dec_to_dot_bin(sb);
  for(int i=0;i<sb_binary.length();i++)
  {
    if(sb_binary[i]=='0')
    {
      h_id++;
    }

  }
  N_id_s_id=sb_binary.length()-h_id;
  cout<<"\nFor class A : \n";
  cout<<"Total No. of hosts per each Network: "<<pow(2,h_id)-2<<endl;
  s_id=N_id_s_id-8;
  if(s_id>=0)
  {
  cout<<"Total no. of subnets: "<<pow(2,s_id)<<endl;
  }
  else
  {
     cout<<"No subnetting possible"<<endl;
  }


  cout<<"\nFor class B : \n";
  cout<<"Total No. of hosts per each Network: "<<pow(2,h_id)-2<<endl;
  s_id=N_id_s_id-16;
   if(s_id>=0)
   {
  cout<<"Total no. of subnets: "<<pow(2,s_id)<<endl;
   }
   else
  {
     cout<<"No subnetting possible"<<endl;
  }

  cout<<"\nFor class C : \n";
  cout<<"Total No. of hosts per each Network: "<<pow(2,h_id)-2<<endl;
  s_id=N_id_s_id-24;
  if(s_id>=0)
  {
  cout<<"Total no. of subnets: "<<pow(2,s_id)<<endl;
  }
  else
  {
     cout<<"No subnetting possible"<<endl;
  }
  
 

 }
