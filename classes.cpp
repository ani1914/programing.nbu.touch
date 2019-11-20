#include <iostream>
using namespace std;
struct Point2D{
    int x;
    int y;
};
int gcd(int a,int b){
int r;
if(a<b){
    swap(a,b);}
    r=a%b;
    while(r){
        a=b;
        b=r;
        r=a%b;
    }
    return b;
};
class Frac{
public:
    Frac(){
    num=1;
    denom=1;

}
Frac(int n,int d){
num=n;
denom=d;
}
double decimal(){
return (double)num/denom;
}
Frac add(Frac b){
    Frac result;
    result.num=b.num*denom+num*b.denom;
    result.denom=denom*b.denom;
    result.normalize();
    return result;}
    void print(ostream &out){
    out<<num<<"/"<<denom;
    }



    int getNumerator(){
    return num;}
    void normalize(){
    int a=num;
    int b=denom;
    int r;
    if(a<b){
    swap(a,b);}
    r=a%b;
    while(r){
        a=b;
        b=r;
        r=a%b;
    } num/=b;
    denom/=b;
    }
private:
    int num;
    int denom;
};
int main(){
    Frac a(1,3);
        Frac b(1,3);
        Frac c=a.add(b);

    cout<<c.decimal()<<endl;
    c.normalize();
    c.print(cout);
    cout<<endl;

return 0;}
