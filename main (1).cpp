// print all prime number in given range

#include<iostream>
using namespace std;

int main()
{
  int a,b;
  cout<<"enter two number:";
  cin>>a>>b;

  for(int num=a;num<b;num++){
    int i;
    for(i=2;i<num;i++){
      if(num%i==0)
        break;
    }
    if(num==i)
      cout<<"number:"<<num<<endl;
  }
  return 0;
  
}
