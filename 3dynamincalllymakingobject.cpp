#include <bits/stdc++.h>
using namespace std;
class hero{
    public:
    char cls;
    int power;
};
int main(){
    // static 
    hero h1;



    // dynamic
    hero (*h) = new hero;

    (*h).power = 80;
    // (*h). == h->
    h->cls = 'A';
    cout<<h->cls<<endl;
    cout<<h->power<<endl;

return 0;
}