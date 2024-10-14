#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


class Hero{

//properties

    private:
    int health ;
    public:
    char level ;


    Hero(){
        cout<<"Constructor called " <<endl ;
    }

    int getHealth(){
        return health ;
    }
    char getLavel(){
        return level ;
    }
    void setHealth(int h){
        health=h ;
    }
    void setLevel(char ch){
        level = ch ;
    }



};




int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif



Hero sakib ;



/*
//static allocation
     Hero a ;
a.setHealth(80) ;
    a.setLevel('B') ;
cout<<"level is : "<<a.level<<endl ;
cout<<"health is : "<<a.getHealth()<<endl ;

//Dynamic allocation

    Hero *b =new Hero ;
    b->setHealth(70);
b->setLevel('A');

    
cout<<"level is : "<<(*b).level<<endl ;
cout<<"health is : "<<(*b).getHealth()<<endl ;


cout<<"level is : "<<b->level<<endl ;
cout<<"health is : "<<b->getHealth()<<endl ;


*/


// //creation fo objects

// Hero sakib ;

// //sakib.health=70 ;
// cout<<"Sakib health is : "<<sakib.getHealth()<<endl ;

// sakib.setHealth(70) ;
// sakib.level ='A' ;

// // cout<<"health is : "<<sakib.health<<endl ;
// cout<<"Sakib health is : "<<sakib.getHealth()<<endl ;
// cout<<"level is : "<<sakib.level<<endl ;






    return 0;
}
