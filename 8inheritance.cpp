// #include <bits/stdc++.h>
// using namespace std;
// class person{
// public:
//     string name;
//     int age;
//     long long phone_no;
// };
// class male : public person{
// public:
//     string location;
//     void details(){
//         cout <<"Name is : "<< this->name << endl;
//         cout << "Age is : "<<this->age << endl;
//         cout << "Phone number is : "<<this->phone_no << endl;
//         cout << "Location is : "<<location << endl;
//     }
// };
// //  in this example male have inherit person class
// int main(){
//     male m1;
//     m1.name = "Parthh Gupta";
//     m1.age = 20;
//     m1.phone_no = 8194080607;
//     m1.location = "Agra";
//     m1.details();
// return 0;
// }

// avoid ambiguty 

#include <bits/stdc++.h>
using namespace std;
class A{
public:
    void fun(){
        cout<<"I am in A"<<endl;
    }
};
class B {
public:
    void fun(){
        cout<<"I am in B"<<endl;
    }
};
class C : public A, public B {
public:
    void fun(){
        cout<<"I am in C"<<endl;
    }
};
int main(){
    C c1;

    c1.A::fun();
    c1.B::fun();
    c1.fun();
return 0;
}
