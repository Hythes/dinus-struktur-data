#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
};

Node *head;
Node *tail;


void awal(){
    head == NULL;
    tail == NULL;
}


bool isEmpty(){
    if(head == NULL){
        return true;
    }

    return false;
}

void tambahDepan(int data){
    Node *nodeBaru;
    nodeBaru = new Node;

    nodeBaru->data = data;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;

    if(isEmpty()){
        head = nodeBaru;
        tail = nodeBaru ;
        head->prev = NULL;
        head->next = NULL;
    }else{
        nodeBaru->next = head;
        head->prev = nodeBaru;
        head = nodeBaru;
    }

    cout<<data<<" Berhasil ditambahkan"<<endl;
}

void tampil(){
    Node *current;
    current = head;
    if(!isEmpty()){
        while(current != NULL){
            cout<<"<- "<<current->data<<" -> ";
            current = current->next;
        }
        cout<<endl;;
    }else{
        cout<<"Belum ada data di DLL "<<endl;
    }

}

int main(){

    tambahDepan(10);
    tampil();
    tambahDepan(2);
    tampil();
    tambahDepan(7);
    tampil();
    return 0;
}