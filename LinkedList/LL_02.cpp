#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

class Node{

public:
int data ;
Node* next ;

Node(int data){
    this->data =data ;
    this->next=NULL ;
}

};

void print(Node* &head){

Node* temp=head ;

while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next ;
}
cout<<"NULL"<<endl ;

}

void insertAtHead(Node* &head,int d){

    Node* temp =new Node(d) ;

    temp->next =head ;
    head=temp ;
}
void insertAtTail(Node* &tail,int d){

    Node* temp=new Node(d) ;
    tail->next=temp ;
    tail=temp ;
}

void insertAtposition(Node* &tail,Node* &head,int position,int d){

    Node* temp=head ;
    int cnt =1 ;

//insert at first position
    if(position == 1){
        insertAtHead(head,d) ;
        return  ;
    }



    while(cnt <position-1){
        temp=temp->next ;
        cnt++ ;
    }

//insert at last position
    if(temp->next == NULL){

        insertAtTail(tail,d) ;
        return ;

    }

//insert at middle position
    Node* nodeToInsert = new Node(d) ;
    nodeToInsert->next=temp->next ;
    temp -> next=nodeToInsert ;
    
    
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

Node* node1 =new Node(10) ;

// cout<<node1 -> data<<endl ;
// cout<<node1 -> next<<endl ;

Node* head=node1 ;
Node* tail=node1 ;

print(head) ;

insertAtHead(head,20) ;

print(head) ;

insertAtHead(head,30) ;

print(head) ;

insertAtTail(tail,100) ;

print(head) ;

insertAtTail(tail,200) ;

print(head) ;

insertAtposition(tail,head,4,500) ;
print(head) ;

insertAtposition(tail,head,5,600) ;
print(head) ;
insertAtposition(tail,head,4,500) ;
print(head) ;

insertAtposition(tail,head,1,700) ;
print(head) ;
insertAtposition(tail,head,10,300) ;
print(head) ;

cout<<head->data<<"   "<<tail->data<<endl ;


    return 0;
}
