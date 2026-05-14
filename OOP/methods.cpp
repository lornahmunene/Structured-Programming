#include <iostream>
#include <string>
using namespace std;
class Base {
public:
int a_public;
protected:
int a_protected;
private:
int a_private;

};
class c1_pro:protected Base{
    public:
    void set_protected(int a){
        a_protected=a;
    }
    int get_protected(){
        return a_protected;
    }
};
