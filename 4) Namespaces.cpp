#include <iostream>

/*Namespaces allow for identically named entities so long as the namepaces are different.
    Usually if 2 names are the same, the identities will conflict 
    with each other*/

namespace first { //namespace 1
    int x=1;
}

namespace second { //namespace 2
    int x=4;
}


int main(){ //main function
    using namespace first; //"using" tells computer we are using prefix of this particular namespace until forther said otherwise

    //int x = 0; //local version of entity
    std::cout << second::x;

    return 0;
}
