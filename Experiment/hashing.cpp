#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* ptr;
};
struct linkedList
{
    struct node* head=NULL;
};

struct node* createnode(int data)
{
    struct node* pt = (struct node*)malloc(sizeof(struct node));
    pt->data = data;
    pt->ptr = NULL;
    return pt;
}

struct node* insert(struct node* ptr,int data)
{
    if(ptr==NULL)
    {
        ptr = createnode(data);
    }
    else if(ptr!=NULL){
    struct node* temp;
    temp = ptr;
    while(temp->ptr!=NULL)
    {
       temp = temp->ptr;
    }
    temp->ptr = createnode(data);}
    return ptr;
}

int search(struct node* hd,int val)
{
      struct node* temp = hd;
      while(temp!=NULL)
      {
          if(temp->data==val)
          return 1;
          temp = temp->ptr;
      }
      return 0;
}

void print_list(struct node* h)
{
    struct node* itr = h;
    while(itr!=NULL)
    {
        cout<<itr->data<<"-->";
        itr = itr->ptr;
    }
    cout<<endl;
}

int main()
{
    struct linkedList* arr = new struct linkedList[10];
    cout<<"Enter the elements:(press -1 to exit)\n";
    while(true)
    {
        int data;
        cin>>data;
        if(data==-1)
        break;
        arr[data%10].head=insert(arr[data%10].head,data);
    }
    cout<<"Enter the element to be searched\n";
    int to_search;
    cin>>to_search;
    if(search(arr[to_search%10].head,to_search))
    cout<<"Yes,element exists\n";
    else
    cout<<"No,the element doesn't exists\n";
    for(int x=0;x<=9;x++)
    print_list(arr[x].head);
}