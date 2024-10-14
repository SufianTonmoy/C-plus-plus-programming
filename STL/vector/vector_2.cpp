#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    vector<int>v1;
    vector<int>v2;

    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(10);

    for(int i=0;i<v.size();i++)
    {

        cout<<v[i]<<" ";
    }
    cout<<endl ;

    //v.insert(v.begin()+1,1) ;
   // v.insert(v.begin(),3,1) ;
   // v.insert(v.end(),7) ;
   // v.insert(v.end()-1,7) ;


    for(int i=0;i<v.size();i++)
    {

        cout<<v[i]<<" ";
    }
    cout<<endl ;
    cout<<"_______________"<<endl;
    v1.push_back(15);
    v1.push_back(25);
    v1.push_back(35);
    v2.push_back(50);
    v2.push_back(100);
    v2.push_back(150);

    cout<<"Element of vector v1 :"<<endl ;
    for(int i=0;i<v1.size();i++)
    {

        cout<<v1[i]<<" ";
    }
    cout<<endl ;

     cout<<"Element of vector v2 :"<<endl ;

    for(int i=0;i<v2.size();i++)
    {

        cout<<v2[i]<<" ";
    }
    cout<<endl ;

    // swap function

    swap(v1,v2) ;
    cout<<"\nafter swaping : \n"<<endl;
    cout<<"Element of vector v1 :"<<endl ;
    for(int i=0;i<v1.size();i++)
    {

        cout<<v1[i]<<" ";
    }
    cout<<endl ;

     cout<<"Element of vector v2 :"<<endl ;

    for(int i=0;i<v2.size();i++)
    {

        cout<<v2[i]<<" ";
    }
    cout<<endl ;

    //sort function

    sort(v.begin(),v.end());//choto theke boro(assending order)
    //sor(v.begin(),v.end(),greater<int>()); //boro theke choto(discending order)
    //sort(v.rbegin(),v.rend());//boro theke choto(discending order)

    cout<<"\nafter sorting vector v : \n"<<endl ;
    for(int i=0;i<v.size();i++)
    {

        cout<<v[i]<<" ";
    }
    cout<<endl ;

    //reverse function

    reverse(v.begin(),v.end());
    cout<<"\nafter reversing vector v : \n"<<endl ;
    for(int i=0;i<v.size();i++)
    {

        cout<<v[i]<<" ";
    }
    cout<<endl ;

    //iteration (work like a pointer)
    vector<int>::iterator it;

    //it=v.begin();

    //cout<< *it<<endl ;

    for(it=v.begin();it!=v.end();it++)
    {
        cout<< *it<<endl ;

    }

}
