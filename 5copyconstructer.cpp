// swallow copy

// #include <bits/stdc++.h>
// using namespace std;

// class hero{
//     public :
//     int health;
//     char *name;
//     char level;

//     hero(){
//         name = new char[100];
//     }

//     void setHealth(int health) { this->health = health; }
//     void setLevel(char level) { this->level = level; }
//     void setName(char name[]) { this->name = name; }
//     int getHealth() { return this->health; }
//     char getlevel() { return this->level; }
//     void printt() {cout<<this->health<<" "<<this->level<<" "<<this->name<<endl;}
//     // hero(hero &h){
//     //     this->health = h.health;
//     //     this->level = h.level;
//     // }
// };
// int main(){
//     hero h1;
//     char name[100] = "Parth";
//     h1.setHealth(80);
//     h1.setLevel('B');
//     h1.setName(name);
//     hero h2 = h1;
//     h1.printt();
//     h2.printt();

// cout<<"..........\n";
//     h2.name[0] = 'C';

//     h1.printt();
//     h2.printt();

// cout<<"\nSwollow copy \nwe change the name of h2 , but h1 name is also get change .\n";

    
// return 0;
// }





// deep copy

// in this we create a new copy constructor , 


#include <bits/stdc++.h>
using namespace std;

class hero{
    public :
    int health;
    char *name;
    char level;

    hero(){
        name = new char[100];
    }

    void setHealth(int health) { this->health = health; }
    void setLevel(char level) { this->level = level; }
    void setName(char name[]) { this->name = name; }
    int getHealth() { return this->health; }
    char getlevel() { return this->level; }
    void printt() {cout<<this->health<<" "<<this->level<<" "<<this->name<<endl;}
    // new copy constror in made
    hero(hero &h){
        char *tName = new char[100];

        for(int i=0;i<100;i++){
            tName[i] = h.name[i];
        }
        this->name = tName;
        this->health = h.health;
        this->level = h.level;
    }
};
int main(){
    hero h1;
    char name[100] = "Parth";
    h1.setHealth(80);
    h1.setLevel('B');
    h1.setName(name);
    hero h2 = h1;
    h1.printt();
    h2.printt();

cout<<"..........\n";
    h2.name[0] = 'A';



    h1.printt();
    h2.printt();



    cout<<"\nproblem solvedz"<<endl;

    
return 0;
}

