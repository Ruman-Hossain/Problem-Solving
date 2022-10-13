#include <bits/stdc++.h>
using namespace std;

struct LinkListNode{
    int data;
    LinkListNode *next;

    LinkListNode(int x){
        data = x;
        next = NULL;
    }
};

typedef LinkListNode* node;

node InsertListNode(node currentList,int data){
    if(currentList == NULL){
        return new LinkListNode(data);
    }
    currentList->next = InsertListNode(currentList->next,data);
    return currentList;
}
void printLinkList(node head){
    if(head == NULL )
        return void (cout<<endl);
    cout<< head->data <<" ";
    printLinkList(head->next);
}

void reverseLinkList(node head, node &reversedHead){
    if(head == NULL)
        return;

    reverseLinkList(head->next, reversedHead);
    reversedHead->next = new LinkListNode(head->data);

    cout<< reversedHead->data <<" "<< reversedHead->next->data <<endl;

    reversedHead = reversedHead->next;
}

int main () {
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    node currentNode=NULL;
    int n;
    while(cin>>n){
        while(n--){
            int input;
            cin>>input;
            currentNode = InsertListNode(currentNode,input);
        }
    }
    cout<<"Original List : "<<endl;
    printLinkList(currentNode);


    node reversedHead = new LinkListNode(0); // dummy node
    node reversedHeadRef = reversedHead;
    reverseLinkList(currentNode,reversedHead);
    cout<<"Reversed Link List : "<<endl;
    printLinkList(reversedHeadRef->next);

    return 0;
}
