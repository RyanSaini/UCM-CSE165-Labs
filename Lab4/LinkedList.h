#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>

using namespace std;

struct LinkedList { 
    struct Link { 
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt) {
			data = dat;
			next = nxt;
		} 
	}* head;

    Link *end;
    int size;
    
    // This should initialize fields for the empty LinkedList
    void initialize() {
        head = 0;
        end = 0;
	}
	
    /* 
     * This adds an element containing *dat 
     * to the end of the LinkedList.
     * It assumes that *dat is dynamically allocated
     */
    void add(void* dat) {
        Link* newLink = new Link;
        newLink -> initialize(dat, NULL);
        if(head ==NULL && end == NULL){
            head = newLink;
            end = newLink; 
        }
        else{
            end->next = newLink;
            end = end->next; 
        }
    }
	
    /* 
     * This returns the data at position index 
     */
    void* get(int index) {
        int count = 0;
        Link* tempLink = head;

        while(count != index){
            tempLink = tempLink->next;
            count++;
        }

        return tempLink->data;
    }


    /* 
     * Frees the memory of the LinkedList
     */
    void cleanup() {
        while(head!=0){
            Link* oldHead = head;
            head = head->next;
            delete oldHead;
        }
        if(head == 0){
            cout<<"Linked List is empty \n";
        }
    }
};
#endif
