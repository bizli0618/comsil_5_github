#include "LinkedList.h"

using namespace std;

template <class T>
class Stack : public LinkedList<T> {
	public:
		virtual bool Delete (T &element);
};

template <class T>
bool Stack<T>::Delete(T &element) {
	if (this->first == 0)
		return false;
	Node<T> *newfirst = (this->first)->link;
	element = (this->first)->data;
	delete this->first;
	this->first = newfirst;
	(this->current_size)--;
	return true;
}
