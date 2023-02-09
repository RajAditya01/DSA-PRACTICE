#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v;

//Creating a vector of size 5 and element 1
    vector<int> a(5,1);

//copy vector a
    vector<int> last(a);
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    
    v.push_back(1);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(2);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    

    v.push_back(3);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    cout<<"Element at 2nd index"<<v.at(2)<<endl;
    
    cout<<"Front"<<v.front()<<endl;
    cout<<"back"<<v.back()<<endl;

    return 0;
}