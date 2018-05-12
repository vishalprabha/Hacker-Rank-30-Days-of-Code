#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public: Node* insert(Node *head,int data)
     {
         if(head == NULL)
         {
             Node * head = new Node(data);
             return head;
         }
         else{
             Node * inst;
             inst = head;
             while(inst->next != NULL)
             {
                 inst = inst -> next;
             }
             Node * temp = new Node(data);
             inst-> next = temp;
             return head;
         }
     }

     void display(Node *head)
     {
         Node *start=head;
         while(start)
         {
             cout<<start->data<<" ";
             start=start->next;
         }
     }
};
int main()
{
 Node* head=NULL;
   Solution mylist;
   int T,data;
   cin>>T;
   while(T-->0){
       cin>>data;
       head=mylist.insert(head,data);
   }
 mylist.display(head);

}