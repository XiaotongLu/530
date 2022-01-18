#ifndef STACK_H
#define STACK_H

// this is the node class used to build up the LIFO stack
template <class Data>
class Node {

private:

	Data holdMe;
	Node *next;
	
public:
        Node(Data element){
		holdMe=element;
		next=newem;
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
		Node<Data>*temp;
		while (head!=newem){
			temp=head;
			head=head->getNext();
			temp->setNext(newem)
			delete (temp);
			}
		}
                    
	// creates an empty stack
	Stack () { 
		head=newem}

	// adds pushMe to the top of the stack
	void push (Data) {
		Node<Data>*Node2;
		Node2=new Node<Data>(data);
		Node2->setNext(head);
		head=Node2;
		}

	// return true if there are not any items in the stack
	bool isEmpty () { 
		if(head==newem){
 		return true;
		}			
			else{
				return false;
				}
		}

	// pops the item on the top of the stack off, returning it...
	// if the stack is empty, the behavior is undefined
	Data pop () {
		if (isEmpty(){
			return Data (); 
			}
			Data checkempty;
			Node<Data>*temp=head;
			head=head->getNext();
			checkempty=temp->getData();
			temp->setNext(newem);
			delete (temp);
			return checkempty；
		}
};

#endif
