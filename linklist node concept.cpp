#include <iostream>
#include <memory>

struct node
{
    char data;
    std::unique_ptr<node> next;
};

class linked_list
{
private:
    std::unique_ptr<node> head;
    node* tail;
public:
    linked_list()
    : tail( nullptr )
    {
    }

    void add_node()
    {
        auto tmp = std::make_unique<node>();
        std::cin >> tmp->data;

        if(head == nullptr)
        {
            head = std::move(tmp);
            tail = head.get();
        }
        else
        {
            tail->next = std::move(tmp);
            tail = tail->next.get();
        }
    }
    void print()
    {
        auto tmp=head.get();
        while(tmp!=nullptr)
        {
            std::cout << tmp->data;
            tmp = tmp->next.get();
            std::cout << "\n";
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
