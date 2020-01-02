#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <algorithm>
vector<string>names;
vector<int>qty;

void add(){
 string name;
 int count;
 cin>>name>>count;
 auto found=find(names.begin(),names.end(),name);
 if(found !=names.end()){
     int index=found-names.begin();
     qty[index]+=count;
     cerr<<"Updated"<<names[index]<<"x"<<qty[index]<<endl;
 }
 else{
 
 names.push_back(name);
 qty.push_back(count);
 cerr<<"ADDED"<<names.back()<<"x"<<qty.back()<<endl;}
}

void take(){
 string name;
 int count;
 cin>>name>>count;
 auto found=find(names.begin(),names.end(),name);
 if(found !=names.end()){
     int index=found-names.begin();
     if(qty[index]<count){
         cout<<"NOT ENOUGHSTOCK"<<endl;
     }
     else{
     qty[index]-=count;
     cerr<<"Took"<<names[index]<<"x"<<qty[index]<<endl;

 
 if(qty[index]==0){
     names.erase(names.begin()+index);
     qty.erase(qty.begin()+index);
     cerr<<"SIZE"<<names.size()<<""<<qty.size()<<endl;
 }
 }
}else{
    cout<<"OUT OF STOCK"<<endl;
}
}

void shaw(){
    string name;
    cin>>name;
    auto found=find(names.begin(), names.end(),name);
    if(found !=names.end()){
        int index=found-names.begin();
        cout<<qty[index]<<endl;
    }else {
cout<<0<<endl;
    }
}

 
int main(int argc, char*argv[]){
    string cmd;
    while(cin>>cmd){
        if(cmd=="add"){
            add();
        } 
        else if(cmd=="take"){
            take();
        } 
        else if(cmd=="show"){
           shaw();
        } else {
            cerr<<"Erroe"<<cmd<<endl;
        } 
    }
    return 0;
}