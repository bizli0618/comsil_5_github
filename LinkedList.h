#include <iostream>
using namespace std;

template <class T>
class Node {
	public:
		T data;
		Node *link;
		Node(T element){
			data = element;
			link = 0;
		}
};

template <class T>
class LinkedList {
	protected:
		Node<T> *first;
		int current_size;
	public:
		LinkedList() {
			first = 0;
			current_size = 0;
		};
		int GetSize() {
			return current_size;
		}
		void Insert(T element);
		virtual bool Delete(T &element);
		void Print();
};

template <class T>
void LinkedList<T>::Insert(T element) {
	Node<T> *newnode = new Node<T>(element);
	newnode->link = first;
	this->first = newnode;
	(this->current_size++);
}

template <class T>
bool LinkedList<T>::Delete(T &element) {
	if (first == 0)
		return false;
	Node<T> *current = first, *previous = 0;
	while (1) {
		if (current->link == 0) {
			if (previous)
				previous->link = current->link;
			else
				first = first->link;
			break;
		}
		previous = current;
		current = current->link;
	}
	element = current->data;
	delete current;
	current_size--;
	return true;
}

template <class T>
void LinkedList<T>::Print(){
	if (first == 0)
		return;
	Node<T> *current = first, *previous = 0;
	for (int i = 1;;i++){
		if (!current)
			break;
		if (current != first)
			cout << "->";
		cout << "[" << i << "|" << current->data << "]";
		current = current->link;
	}
	cout << endl;
}
