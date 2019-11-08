#include <iostream>
using namespace std;
int add(int x, int y){
return x-y;
}


unsigned readPercentage(istream &in )
{
    unsigned a;
    while(in>>a&&a>100){

    cout<<"Place enter a parcentage betwen 0 and 100"<<endl;

    }
    return a;
}
unsigned readPercentage( ){
return readPercentage(cin);
}

   int main(){
       unsigned a,b,c;

   a=readPercentage();
b=readPercentage();
c=readPercentage();

    cout<<a<<"%"<<b<<"%"<<c<<"%"<<endl ;
    return 0;
}
