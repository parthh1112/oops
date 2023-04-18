// #include <bits/stdc++.h>
// using namespace std;
// static int var1 = 0;
// void fun(){
//     int var2 = 0;
//     var1++;

// }
// int main(){
//     var1++;
//     fun();
//     cout<<var1<<endl;
// return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class car{
    public:
    int gate;
    static int sheat;
    static int print(){ 
        cout<<"I am print function"<<endl;
        return 10;
    }
};
int car :: sheat = 2;
int main(){

    cout<<car::sheat<<endl;



    car audi;
    // audi.sheat = 10;
    cout<<audi.sheat<<endl;

    cout<<car::sheat<<endl;


    cout<<car::print<<endl;
return 0;
}