#include<iostream>
using namespace std;

void TOH(int num,char A,char B,char C)
{
  if(num>0)
  {
    TOH(num-1, A, C, B);
    cout<<"Move a disk "<<num<<" from "<<" "<<A<<" to"<<" "<<C<<endl;
    TOH( num-1, B, A, C);
  }
}
int main(){
  int disk;
  cout<<"Enter the no. of disks"<<endl;
  cin>>disk;

  TOH(disk,'A','B','C');
  cout<<endl;
}
