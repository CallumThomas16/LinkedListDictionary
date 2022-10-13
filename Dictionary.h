#pragma once
#include <string>

struct Node 
{
    Node* next;
    int key;
    std::string item;
    Node(int key, std::string item);
};

class Dictionary
{
    private:
        Node* head;

    public:
    Dictionary();
    std::string* lookup(int, std::string);
    void insert(int key, std::string item);
};