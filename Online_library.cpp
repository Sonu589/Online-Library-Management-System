#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class Library{
    public:
    int book_id;
    char book_name[1000];
    char book_author[1000];
    char student_name[1000];
    int book_price;
    int book_pages;
};
int main()
{
    Library lib[20];
    int input=0;
    int count=0;
    while(input!=3){
        cout<<"Enter 1 for input details like book id, book name, book author, student name, book price, book pages"<<endl;
        cout<<"Enter 2 for display details"<<endl;
        cout<<"Enter 3 for exit"<<endl;
        cin>>input;
        switch(input){
            start:
            case 1:
                 cout<<"Enter book Id: "<<endl;
                 cin>>lib[count].book_id;
                 cout<<"Enter book name also enter @ to stop: "<<endl;
                 cin.getline(lib[count].book_name,1000,'@');
                 cout<<"Enter book author also enter @ to stop: "<<endl;
                 cin.getline(lib[count].book_author,1000,'@');
                 cout<<"Enter student name also enter @ to stop: "<<endl;
                 cin.getline(lib[count].student_name,1000,'@');
                 cout<<"Enter book price: "<<endl;
                 cin>>lib[count].book_price;
                 cout<<"Enter Book pages: "<<endl;
                 cin>>lib[count].book_pages;
                 count++;
                 break;
            case 2:
                for(int i=0;i<count;i++){
                    cout<<"Book id: "<<lib[i].book_id<<endl;
                    cout<<"Book name: "<<lib[i].book_name;
                    cout<<"Book author: "<<lib[i].book_author;
                    cout<<"Student name: "<<lib[i].student_name;
                    cout<<"Book price: "<<lib[i].book_price<<endl;
                    cout<<"Book pages: "<<lib[i].book_pages<<endl;
                }
                break;
            case 3:
                exit(0);
                break;
            default: 
                cout<<"You have enter wrong value please type again"<<endl;
                goto start;
        }
    }
    return 0;
}