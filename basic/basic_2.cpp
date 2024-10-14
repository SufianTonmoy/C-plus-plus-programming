#include<bits/stdc++.h>
using namespace std ;
/* int main()
{
    int a=100000 ;
    int b=100000 ;
    long long int  c  =a* 1LL *b ;

    long long d=1e10 ;
      
    cout << c <<endl ;
      
    cout << d <<endl ;
  
} */

/* int main()
{
    int n;
    for(int i=0; ;i++)
    {
        cin >> n;
        if (n==42)
        {
            break ;
        }
        cout<< n<<endl;

    }

} */

/* int main()
{
    string s="hello" ;

    //cout<< s.size();

    for (int i = 0; i < s.size(); i++)
    {
        cout<< s[i] <<endl ;
    }
    


} */
/* int main()
{
   
    string str ;

   // cin >> str ;
    
   // getline(cin,str) ;
    cout<<str ;

} */
/* int main()
{
   
    string str ;

    int t;

    cin>>t ;

    cin.ignore() ;

    while(t--)
    {
        getline(cin,str);
        cout<<str <<endl;
    }
} */
int main()
{
   string str ;
   cin >> str ;
   string str_rev ;
    
    for (int i = str.size()-1; i >= 0; i--)
    {
        str_rev.push_back(str[i]);
    }
    cout<< str_rev ;
    

}
