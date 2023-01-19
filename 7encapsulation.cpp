#include <bits/stdc++.h>
using namespace std;

class customer
{
public:
    string user_id;
    string name;
    string address;
    string phone_no;
    string email;
    void setPassword(string password){ this -> password = password;}
    // string getPassword(){ return this -> password;}
private:
    string password;
};

int main()
{
    customer parth;
    parth.address = "30/40 Peepal Mandi , opposite to Bahram Kumari Aasharam , near Rawat Rara road , Agra , Uttar Pradesh, India";
    parth.email = "parthgupta0824@gmail.com";
    parth.name = "Parth Gupta";
    parth.phone_no = "+91 8194080607";
    parth.user_id = "parthgupta0824";

    parth.setPassword("Cough150ml");




    return 0;
}