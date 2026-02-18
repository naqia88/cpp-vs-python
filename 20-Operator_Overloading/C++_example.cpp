#include <iostream>

class Box{
public:
    int width;

    Box(int w){
        width = w;
    }

    //Operator Overloading (+)
    Box operator +(Box b){
        return Box(width + b.width);
    }

    //Operator Overloading (==)
    bool operator == (Box b){
        return width == b.width;
    }
};

int main(){
    Box b1(10), b2(20);

    Box b3 = b1 + b2;           //+ overloaded
    std::cout << "Total Width: " << b3.width << std::endl;

    if(b1 == b2){               //== overloaded
        std::cout << "Boxes are Equal";
    }
    else{
        std::cout << "Boxes are Not Equal";
    }

    return 0;
}

