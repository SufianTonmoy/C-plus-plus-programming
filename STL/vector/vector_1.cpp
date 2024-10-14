#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int>v ;
    //vector<int>v1(10); //----->declaring 10 size vector and initialize it with 0 .
    //vector<int>v1(10,3); //----->declaring 10 size vector and initialize it with 3 .
    //vector<int>v1({1,2,3,4,5});
    //vector<int>v1={1,2,3,4,5};
    //v1.push_back(100);
    //  for(int i=0;i<v1.size();i++)
    //  {
    //      cout<<v1[i]<<" ";
    //  }
   //  cout<<endl ;

    v.push_back(1);
    v.push_back(2) ;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<v[0]<<" " ;
    cout<<v[1]<<" " ;
    cout<<v[2]<<" " ;
    cout<<v[3]<<" " ;
    cout<<v[4]<<endl ;

    cout<<v.at(4)<<endl ;
    cout<<v.size()<<endl;
    //print using loop

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl ;
    cout<<v.front()<<endl ;
    cout<<v.back()<<endl ;
//clear all element from vector
   // v.clear();
  //  cout<<v.size()<<endl ;

    if(v.empty())
    {
        cout<<"Empty"<<endl ;
    }
    else
        cout<<"Not empty"<<endl ;

//delete last value
//v.pop_back();
/*for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }*/
//erase element from vector
 //v.erase(v.begin()+0);
 //v.erase(v.begin()+0);
 //erase first 3 element
 v.erase(v.begin(),v.begin()+3);
 for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl ;
   // cout<<v[0]<<" ";
    //cout<<v[3]<<" ";
  //  cout<<v[4] ;
  /*cout<<v[0]<<" ";
  cout<<v[2]<<" ";
  cout<<v[3]<<" ";
  cout<<v[4] ;*/




}
