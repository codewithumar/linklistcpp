#include <iostream>
using namespace std;
struct node
{
    char data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail,*tmp;
public:
    linked_list()
    {
        head = nullptr;
        tail = nullptr;
    }

    void add_node()
    {
        tmp = new node;
      	cin>> tmp->data;
        tmp->next = nullptr;

        if(head == nullptr)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    void print()
	{
		tmp=head;
		while(tmp!=nullptr)
		{
			cout<<tmp->data;
			tmp=tmp->next;
			cout<<endl;
		}		
	}
};
int main()
{
    linked_list a;
    a.add_node();
    a.add_node();
    a.add_node();
	a.add_node();
	a.print();
    return 0;
}
