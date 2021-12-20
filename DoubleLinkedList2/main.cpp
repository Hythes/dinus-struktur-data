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
        if(head->next == NULL){
            head = NULL;
        }else{
            Node *temp = head;
            while(temp->next->next != NULL){
                temp = temp->next;
            }
            Node *last = temp->next;
            temp->next = NULL;
        }
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
    awal();
    int i,input;
    while(i != 6){
        cout<<"================="<<endl;
        cout<<"Double Linked List"<<endl;
        cout<<"================="<<endl;
        cout<<"1. Lihat Data"<<endl;
        cout<<"2. Tambah Depan"<<endl;
        cout<<"3. Tambah Belakang"<<endl;
        cout<<"4. Hapus Depan"<<endl;
        cout<<"5. Hapus Belakang"<<endl;
        cout<<"6. Keluar"<<endl;
        cout<<"Pilih Angka : ";
        cin>>i;

        switch(i){
            case 1:
                system("cls");
                tampil();
                break;
            case 2:
                cout<<"Masukkan angka : ";
                cin>>input;
                tambahDepan(input);
                tampil();
                break;
            case 3:
                cout<<"Masukkan angka : ";
                cin>>input;
                tambahBelakang(input);
                tampil();
                break;
            case 4:
                system("cls");
                hapusDepan();
                break;
            case 5:
                system("cls");
                hapusBelakang();
                break;
            case 6:
                return 0;
                break;
            default:
                cout<<"Tidak ditemukan!";
                system("cls");
                break;
        }
    }

    return 0;
}