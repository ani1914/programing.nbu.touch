#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>& numbers){
    cout<<"Size"<<numbers.size()<<endl;
    cout<<"Capacity"<<numbers.capacity()<<endl;
    cout<<"Values";
    for(auto n : numbers){
        cout<<n<<" ";

    }
    cout<<endl<<endl;
}
int sum(const vector<int>& numbers){
    int s=0;
    for(auto n: numbers){
        s+=n;
    }
    return s;
}


int main(int argc, char*argv[]){
    int size;
    cin>>size;
    vector<int> numbers(size);
    print(numbers);
    for(int i=010;)
    numbers.reserve(100);
    int x;

    
    cout<<sum(numbers)<<endl;
    return 0;
}