#ifndef LA10_Counter_h
#define LA10_Counter_h

using namespace std;

class Counter {

public:

    int ID = 0;
    static int count;

    Counter() :ID(count++)
    {
        cout << this->ID << " created\n";
    }
    ~Counter()
    {
        cout << this->ID << " destroyed\n";
    }

    void* operator new(size_t temp){
        cout<<"new \n";
        void *space = malloc(temp); //alocates space
        return space;
    }

    void operator delete(void *temp){
        cout<<"delete \n";
        free(temp); //deletes mem
        
    }

    void* operator new[](size_t temp){

        cout<<"new "<<temp/sizeof(Counter) - 2<<" counting at "<<count<<"\n"; //did -2 when calcualtion was done
        void *space = malloc(temp);
        return space;
    }

    void operator delete[](void *temp){
        cout<<"delete \n";
        free(temp);
        
    }

};

#endif