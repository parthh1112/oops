#include <bits/stdc++.h>
using namespace std;
class hero{
    public:
    int power;
    char level;
    hero(){
        // cout<<"hello i am a constructer\n";
    }
    hero(int power,char level){
        // cout<<this<<endl;
        this->level = level;
        this->power = power;
    }
    // copy constreter
    hero(hero &t){
        this->level = t.level;
        this->power = t.power;
    }
};
int main(){
    // hero h;
    hero h1(90,'B');
    // cout<<&h<<endl;
    // cout<<&h1<<endl;
    // h.level = 'A';
    // h.power = 80;
    // cout<<h.level<<endl;
    // cout<<h.power<<endl;
    // cout<<endl;
    // cout<<h1.level<<endl;
    // cout<<h1.power<<endl;



// copy constructer
    hero h3(h1);
    cout<<h3.level<<endl;
    h3.level = 'c';
    cout<<h3.level<<endl;
    cout<<h1.level<<endl;
    cout<<h3.power<<endl;
return 0;
}