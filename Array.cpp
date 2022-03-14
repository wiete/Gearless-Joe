#include<iostream>
#include<iomanip>
#include"Array.h"
using namespace std;
int main(){
    Array<int>a(10);
    int count=0;
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        bool is = true;
        for(int j=0;j<count;j++)
           if(i%a[j]==0){
               is=false;
               break;
           }
        if(is){
            if(count==a.get())
              a.resize(count*2);
            a[count++]=i;
        }
    }
    for(int i=0;i<count;i++)
      cout<<setw(4)<<a[i];
}
