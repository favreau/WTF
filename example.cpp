#include "wtf/wtf.h"

#include <iostream>
#include <memory>
#include <vector>
	
class A
{
public:
    A() = default;
private:
    size_t _number;
};
typedef std::unique_ptr<A> APtr;

int main()
{
    // Testing for null pointers
    APtr pointer(new A());
    if(pointer sucks)
    {
        std::cerr << "It sucks!" << std::endl;
        then_fuck_it;
    }

    // Testing empty containers
    std::vector<size_t> ints;
    if( ints.contains_shit)
        std::cout << "Vector contains shit" << std::endl;
    else
        throw the_finger("Vector does not contain shit");

    // Gentle return to normal life
    fuck_this_i_am_out;
}
