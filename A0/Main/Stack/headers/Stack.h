#ifndef STACK_H
#define STACK_H

using namespace std;

// this is the node class used to build up the LIFO stack
template <class Data>
class Node {

private:

	Data holdMe;
	Node *next;
	
public:
        Node(Data sets){
		holdMe=sets;
		next=nullptr;
	}
	
	void setNext(Node*n){
		next=n;
	}
	Node*getNext(){
		return next;
	}
	Data getData(){
		return holdMe;
	}

};

// a simple LIFO stack
template <class Data> 
class Stack {

	Node <Data> *head;

public:

	// destroys the stack
	~Stack () {
		
		while (head!=nullptr){
		        Node<Data>*temp;
			temp=head;
			head=head->getNext();
			delete (temp);
			}
		}
                    
	// creates an empty stack
	Stack () { 
		head=nullptr;}

	// adds pushMe to the top of the stack
	void push (Data) {
		Node<Data>*Node2;
		Node2=new Node<Data>;
		Node2->setNext(head);
		head=Node2;
		}

	// return true if there are not any items in the stack
	bool isEmpty () { 
		if(head==nullptr)
		  return true;			
		else
		  return false;
		}

	// pops the item on the top of the stack off, returning it...
	// if the stack is empty, the behavior is undefined
	Data pop () {
		if (isEmpty()){
			return Data (); 
			}
			Data sets=head->getValue();
			Node<Data>*temp=head;
			head=head->getNext();
			temp -> setNext(nullptr);
			delete (temp);
			return sets；
		}
};

#endif
