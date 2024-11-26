#include <iostream>
#include <vector>

using namespace std;


int main(){
    vector<int> vec = {1, 2, 3};
    
    for(int value :vec){
        cout<<value <<" ";
    }

    cout<<"\nsize: "<< vec.size()<<"\n";
    vec.push_back(5);
    for(int value :vec){
        cout<<value <<" ";
    }
    cout<<"\nsize: "<< vec.size()<<"\n";
    cout<<"Capacity: "<< vec.capacity()<<"\n";
    vec.pop_back();
    for(int value :vec){
        cout<<value <<" ";
    }
    cout<<"\nsize: "<< vec.size()<<"\n";
    cout<<"Capacity: "<< vec.capacity()<<"\n";
    vec.push_back(19);
    cout<<vec.back()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.at(2)<<endl;

    return 0;
}