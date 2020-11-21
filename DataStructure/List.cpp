#include<iostream>

// class List
// {
// public:
// 	bool empty(void) const;
// 	size_t size(void) const;
// 	void push_back(int i);
// 	void pop_back(void);
// private:
// 
// };

struct Node
{
	int m_data;
	Node* m_next;
};

struct List
{
	void PushBack(int value);
	Node* m_head;
};

void List::PushBack(int value)
{
	auto fast = m_head;
	auto slow = fast;
	while (fast != nullptr)
	{
		slow = fast;
		fast = fast->m_next;
	}
	if (slow != nullptr)
	{
		auto node = new Node;
		slow->m_next = node;
		node->m_data = value;
		node->m_next = nullptr;
	}
	else
	{
		m_head = new Node;
		m_head->m_data = value;
		m_head->m_next = nullptr;
	}
}

void PrintList(List l)
{
	auto p = l.m_head;
	while (p != nullptr)
	{
		std::cout << p->m_data << ",";
		p = p->m_next;
	}
}

int main() 
{
// 	List l;
// 	l.push_back(1);
// 	if (l.size() > 0)	
// 	{
// 
// 	}
	List list;
	list.m_head = nullptr;
	list.PushBack(1);
	list.PushBack(2);
	PrintList(list);
	return 0;
}