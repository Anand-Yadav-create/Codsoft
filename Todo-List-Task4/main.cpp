#include <bits/stdc++.h>
using namespace std;


const int MAX = 100;


struct Task{
    string  desc;
    bool  done;
};
int main(){

    Task  mytask[MAX];

    int notask=0;
    cout<<"Todo List Application"<<endl;

    while(true){
        
        cout<<"Enter 1 for Add Task in list"<<endl;
        cout<<"Enter 2 for view Task in list"<<endl;
        cout<<"Enter 3 for Mark as completed"<<endl;
        cout<<"Enter 4 for Remove the task"<<endl;
        cout<<"Enter 5 for Exit"<<endl;

        cout<<"Enter YOur choice..."<<endl;

        int choice;
        cin>>choice;

        if(choice==1){
            if(notask<MAX){
                cout<<"Enter the description of task...";
                cin.ignore();//ignore the enter
                getline(cin,mytask[notask].desc);
                mytask[notask].done=false;
                notask++;
                cout<<"Task is add"<<endl;
                

            }else{
                cout<<"To-do list is full"<<endl;
            }
        }else if(choice==2){
            if(notask>0&&notask<=MAX){
                cout<<"Id\tCompleted\t\tDescription"<<endl;
                for(int i=0;i<notask;i++){

                    cout<<i+1;
                    if(mytask[i].done==true){

                        cout<<"\t True";
                    }else{
                        cout<<"\t False";
                    }
                    
                    cout<<"\t\t"+mytask[i].desc<<endl;
                   
                    
                }
            }else{
                cout<<"Todo List is Empty"<<endl;
            }
        }
        else if(choice==3){
            if(notask>0&&notask<=MAX){
                cout<<"Enter the id of task..."<<endl;
                int id;
                cin>>id;
                for(int i=0;i<notask;i++){
                    if((id-1)==i){
                        mytask[i].done=true;
                    }
                }
                cout<<"Task is completed"<<endl;
            }else{
                cout<<"Todo List is Empty"<<endl;
               
            }
        }
        else if(choice==4){
            if(notask>0&&notask<=MAX){
                cout<<"Enter the id of task to delete.."<<endl;
                int id;
                cin>>id;
                int prev=0;
                for(int i=0;i<notask;i++){
                    if((id-1)==i){
                        continue;
                    }else{
                        mytask[prev].desc=mytask[i].desc;
                        mytask[prev].done=mytask[i].done;
                        prev++;

                    }
                }
                notask--;
                cout<<" Task is removed"<<endl;
            }else{
                cout<<"Todo List is Empty"<<endl;
            }
        }
        else if(choice==5){
            cout<<"Good BYe"<<endl;
            break;
        }else{
            cout<<"Invalid choice Please try again..."<<endl;
        }



    }
    return 0;




   
}