#include <iostream>

using namespace std;
#define MAX 8

struct Antrian{
    int data [MAX];
    int head;
    int tail;
};

Antrian antre;
void create();
bool isEmpty();
bool isFull();
void enqueue(int);
int dequeque();
void tampil();

//1. membuat fungsi utama supaya queue bisa dijalankan
int main()
{
    create();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    tampil();
    return 0;

}
void create(){
    antre.head = antre.tail = -1;
}
bool isEmpty(){
    if(antre.tail == -1){
        return true;
    }
    else{
        return false;
    }

}

bool isFull(){
    if(antre.tail == MAX -1){
        return true;
    }
    else
    {
        return false;
    }
}

//2.cek apakah queue penuh, jika penuh tampilkan tulisan queue penuh. jika tidak, enqueue ke queue
void enqueue(int data){
    if(isFull())
    {
        cout << "queue penuh" << endl;
    }else
    {

    }

    if(isEmpty()){
        antre.head = antre.tail = 0;
        antre.data[antre.tail] = data;
    }
    else{
        antre.tail++;
        antre.data[antre.tail] = data;
    }
    cout << data << " " << "dimasukan ke antrian" << " ";

}

//3. cek apakah queue kosong, jika iya tampilkan tulisan queue kosong, jika tidak, dequue dari queue
int dequeue(){
    if(isEmpty()){
        cout << "queue kosong" << " ";
    }
    else{
    int i;
    int e = antre.data[antre.head];
    for(i = antre.head;i = antre.tail= 1;i++){
        antre.data[i] = antre.data[i+1];
    }
    antre.tail--;
    cout << antre.data[i];
    return e;
    }
}

void tampil(){
    if(!isEmpty()){
        for(int i = antre.head;i <= antre.tail; i++){
            cout << antre.data[i] << " ";
        }
    }
    else{
        cout<<"data kosong";
    }
}
