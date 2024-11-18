﻿#include <iostream>

using namespace std;

template<typename T>
class CircleLinkedList
{
private:
	int size;

	struct Node
	{
		T data;
		Node * next;
	};

	Node * head;
public:
	CircleLinkedList()
	{
		size = 0;
		head = nullptr;
	}

    void PushBack(T data)
	{
		Node * newNode = new Node;

		newNode->data = data;

		if (head == nullptr)
		{
			head = newNode;

			newNode->next = head;
		}
		else
		{
			newNode->next = head->next;

			head->next = newNode;

			head = newNode;
		}

		size++;
	}

	void PushFront(T data)
	{
		Node * newNode = new Node;

		newNode->data = data;

		if (head == nullptr)
		{
			head = newNode;

			newNode->next = head;
		}
		else
		{
			newNode->next = head->next;

			head->next = newNode;
		}

		size++;
	}

	void Show()
	{
		if (head != nullptr)
		{
			Node* currentNode = head->next;

			for (int i = 0; i < size; i++)
			{
				cout << currentNode->data << " ";

				currentNode = currentNode->next;
			}
		}
	}
};

int main()
{
	CircleLinkedList<int> circleLinkedList;

	circleLinkedList.PushBack(10);
	circleLinkedList.PushBack(20);
	circleLinkedList.PushBack(30);

	circleLinkedList.PushFront(5);

	circleLinkedList.Show();

	return 0;
}
