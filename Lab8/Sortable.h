#ifndef Sortable_h
#define Sortable_h
class Sortable {
    
public:
    virtual bool compare (const Sortable * s) = 0;
    virtual void print () = 0;
};

#endif