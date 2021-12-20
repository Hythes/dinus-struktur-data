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
    nodeBaru->next = head;
    nodeBaru->prev = NULL;

    if(isEmpty()){
        tail = nodeBaru ;
    }else{
        head->prev = nodeBaru;
    }
    head = nodeBaru;


    cout<<data<<" Berhasil ditambahkan didepan"<<endl;
}

void tambahBelakang(int data){
       Node *nodeBaru;
    nodeBaru = new Node;

    nodeBaru->data = data;
    nodeBaru->next = NULL;
    nodeBaru->prev = tail;

    if(isEmpty()){
        head = nodeBaru;
    }else{
        tail->next = nodeBaru;
    }
        tail = nodeBaru;


    cout<<data<<" Berhasil ditambahkan dibelakang"<<endl;
}

void hapusDepan(){

    if(!isEmpty()){
        head = head->next;
        cout<<" Berhasil menghapus depan"<<endl;
    }else{
        cout<<"Tidak ada data yang bisa dihapus"<<endl;
    }

}


void hapusBelakang(){

    if(!isEmpty()){
        tail = tail->prev;
        cout<<" Berhasil menghapus belakang"<<endl; 
    }else{
        cout<<"Tidak ada data yang bisa dihapus"<<endl;
    }

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
    hapusDepan();
    tampil();
      tambahBelakang(55);
    tampil();
      tambahBelakang(21);
    tampil();
      hapusBelakang();
    tampil();
    return 0;
}