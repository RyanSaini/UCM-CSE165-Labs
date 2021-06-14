#ifndef STACK_H
#define STACK_H

#include <iostream>

struct Stack {
	void (*funcPtr)(void * pt); //declare a func pointer
	int size;
	struct Link {
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;
	
	void initialize(){
		head = 0;
		size = 0;
	}
	
	void push(void* dat){
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
		size++;
	}
	
	void* peek(){
		if (head == 0){
			std::cout << "Stack is empty";
		}
		return head->data;
	}
	
	void* pop(){
		if(head == 0)
			return 0;
		size--;
		void* result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	
	void cleanup(){
		int temp = size; //so size isn't altered when calling pop.
		for(int i = 0; i<temp; i++){
			funcPtr(pop()); // pop returns a void pointer
		}
		if (head == 0){
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
	}

	void setDeleteCallback(void (*del_func_ptr)(void * pt)){ //setting member var = to this
		funcPtr = del_func_ptr;
	}
};
#endif