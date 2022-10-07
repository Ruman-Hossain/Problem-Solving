#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
node *root = NULL;
void append(int data){
    if(root==NULL){
        root = new node();
        root->data = data;
        root->next = NULL;
    }else{
        node *currentRoot = root;
        while(currentRoot->next != NULL){
            currentRoot = currentRoot->next;
        }
        node *newNode = new node();
        newNode->data = data;
        newNode->next = NULL;
        currentRoot->next = newNode;
    }

}
void print(){
    node *currentNode = root;
    while(currentNode != NULL){
        cout<<currentNode->data<<endl;
        currentNode = currentNode->next;
    }
}
void deleteNode(int data){
    node *currentNode = root;
    node *previousNode = NULL;
    while(currentNode->data != data){
        previousNode = currentNode;
        currentNode = currentNode->next;
    }
    if(currentNode == root){
        node *temp = root;
        root = root->next;
        delete(temp);
    }else{
        previousNode->next = currentNode->next;
        delete(currentNode);
    }
}
int main(){
    cout<<"Append Data to Link List"<<endl;
    for(int i=1;i<=10;i+=2){
        append(i);
    }

    cout<<"Print All Data From Link List"<<endl;
    print();

    cout<<"Delete From Link List "<<endl;
        deleteNode(3);
        deleteNode(5);

    cout<<"Link List After Deleting the Multiples of 3"<<endl;
    print();
    return 0;
}
