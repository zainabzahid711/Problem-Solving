#include <iostream>
using namespace std;
// linked list

//----------------general singly linked list

class list
{
public:
    int id;
    float gpa;
    list *next;
    list() {}
    list(int ID, float GPA)
    {
        id = ID;
        gpa = GPA;
        list *next = NULL;
    }
};

list *first = NULL;

void add(int id, float gpa)
{
    // insert at head

    if (first == NULL)
    {
        first = new list;
        cout << "enter id for first_" << endl;
        cin >> first->id;
        cout << "enter gpa for first _" << endl;
        cin >> first->gpa;
        first->next = NULL;
    }
    else
    {
        list *scnd = new list;
        cout << "enter the id of next std _" << endl;
        cin >> scnd->id;
        cout << "enter the gpa of nxt std _" << endl;
        cin >> scnd->gpa;
        scnd->next = first;
        first = scnd; // insert at start thats why scnd must be assigned to first
    }
}
void display(int id, float gpa)
{
    // tmp used for traversing in list
    list *tmp = first;
    if (first == NULL)
    {
        cout << "list is empty _" << endl;
    }
    else
    {
        do
        {
            cout << "id is_" << tmp->id << endl;
            cout << "gpa is_ " << tmp->gpa << endl;
            tmp = tmp->next; // moving in list next must be stored in temp
        } while (tmp != NULL);
    }
}
bool search(int id)
{
    int num;
    cout << "enter no to search _";
    cin >> num;
    if (first == NULL)
    {
        cout << "list is empty _" << endl;
        return false;
    }
    else
    {
        list *temp = first;
        // temp is for search in list

        if (temp->id == num)
            return true;

        return search(id); // recur the remaning list
    }
    return 0;
}
void Delete()
{ // from first
    list *p = first;
    if (first == NULL)
    {
        cout << "list is empty _";
    }
    else
    {
        first = first->next;
        delete (p);
    }
}
// void inserAtMid(int id, float gpa){
//     if(pos!=count){
//         cout<<"pos dosn't exist";
//     }
//     else{
//         while(i<pos){
//             midNode->next = temp->next;
//             temp->next = midNode;
//             i++;
//         }
//     }
// }
void insertAtLast(int id, float gpa)
{
    // FIRST creat a node for add at last, SCND traverse at last of the list,
    // and THIRD link last node with prev, chk if list is empty than just creat node at first

    list *newNode = new list; // to add at last
    if (first == NULL)
    {
        first = new list;
        cout << "id of first_";
        cin >> first->id;
        cout << "gpa _";
        cin >> first->gpa;
        first->next = newNode;
    }
    else
    {
        cout << "enter id _";
        cin >> newNode->id;
        cout << "gpa _";
        cin >> newNode->gpa;
        newNode->next = NULL;
        list *temp = first; // to traverse in list
        while (temp != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void deleteFromLast()
{ // from last
    list *scndLast = first;
    if (first == NULL)
    {
        cout << "list is empty _";
    }
    else
    {
        while (scndLast->next->next != NULL)
        {
            scndLast = scndLast->next; // the adress of deleted node must be stored in prev node
        }
        delete (scndLast->next);
        scndLast->next = NULL;
    }
}
int main()
{
    int n, num, choice;
    list *first = new list;
    do
    {
        cout << " MENU \n"
             << endl;
        cout << "1- for add at start" << endl
             << "2- display" << endl
             << "3- for search" << endl
             << "4- for add at last " << endl
             << "5- for deletion from first" << endl
             << "6- for delete from last " << endl
             << "7- exit" << endl;
        cout << "enter your choice _" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            add(1, 3.4);
            break;
        case 2:
            display(1, 3.4);
            break;
        case 3:
            search(2) ? cout << "found" : cout << "not found";
            break;
        case 4:
            insertAtLast(1, 3.4);
            cout << "data inserted at last ";
            break;
        case 5:
            Delete();
            cout << "data deleted from first ";
            break;
        case 6:
            deleteFromLast();
            cout << "delete from last ";
            break;
        }
    } while (choice != 7);
}