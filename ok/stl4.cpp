//stack
#include<iostream>
#include<stack> 
using namespace std;
int main(){
    stack<int>s;
    s.push_back(4);
    s.pushback(5);
    s.pushback(1);
    cout<<s.top()<<endl;// top is last element added ;;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;


}
/// QUERY
#include<iostream>
#include<query>//// first in first out 
using namespace std;
int main(){
    query<string>a;
    a.push("hlo");
    a.push("mlo");
    a.push("chaco");
    cout<<a.front()<<endl;/// -->hlo
    a.pop;/// as query so elemnt removed from front
    
    cout<<a.front<<endl;//-->mlo
    

}
