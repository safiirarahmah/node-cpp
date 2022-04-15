#include <iostream>
using namespace std;

struct	{
	int data; 
	TNode *next;
};

TNode *head;

void init(){
	head = NULL;
}

bool isEmpty(){
	if (head == NULL)
		return true;
	else
		return false;
}

void tambahDepan(int databaru){
	TNode *baru;
	baru = new TNode;
	baru->data =databaru;
	baru->next = NULL;
	if (isEmpty()==true){
		head=baru;
		head->next = NULL;
	}
	else{
		baru->next = head;
		head =baru;
	}
	cout<< "Data berhasil ditambahkan"<<endl;
}

void tambahbelakang(int databaru){
	TNode *baru, *bantu;
	baru =new TNode;
	baru->data =databaru;
	baru->next =NULL; 
	if (isEmpty()==true){
		head =baru;
		head->next =NULL;
	}
	else{
		bantu = head;
		while (bantu->next!=NULL){
			bantu=bantu->next;
		}
		bantu->next=baru;
	}
	cout<<"Data berasil ditambahkan"<<endl;
}

void printlist(){
	TNode *bantu;
	bantu = head;
	while(bantu->next!=NULL){
		cout<<bantu->data<<endl;
		bantu =bantu->next;
	}
}



int main(){
	system("cls");
	tambahDepan(30);
	tambahBelakang(20);
	tambahDepan(40);
	tambahBelakang(10);
	tambahDepan(10);
	printList();
	
}
