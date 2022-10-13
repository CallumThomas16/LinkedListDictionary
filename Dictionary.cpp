#include "Dictionary.h"

Dictionary::Dictionary()
{
	head = nullptr;
}

std::string* Dictionary::lookup(int key, std::string item)
{
	Node* currentNode = head;
	while (currentNode != nullptr)
	{
		if (currentNode->key == key)
		{
			return &currentNode->item;
		}
	}
	return nullptr;
	/*if key is present :
		 return the pointer to the item
		 else:
		 return a nullptr
		 */
	return nullptr;
}

void Dictionary::insert(int key, std::string item)
{
	Node* temp = head;
	while (temp != nullptr) 
	{
		if (temp->key == key) 
		{
			temp->item = item;
			return;
		}
		if (temp->next == nullptr) 
		{
			Node *newNode = new Node(key, item);
			temp->next = newNode;
			return;
		}
		temp = temp->next;
	}

}

Node::Node(int key, std::string item)
{
	this->key = key;
	this->item = item;
	next = nullptr;
}
