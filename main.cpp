#include <vector>
#include <iostream>

void squaresByReference(std::vector<int> &squares){

    for(int i = 0; i < squares.size(); i++)
        squares[i] = (i + 1) * (i + 1);

}

std::vector<int> squaresByValue(){
    std::vector<int> squares(5);

    for(int i = 0; i < squares.size(); i++)
        squares[i] = (i + 1) * (i + 1);

    return squares;
}

int main() {

    std::vector<int> squares = squaresByValue();
    squaresByReference(squares);

    for(int i = 0; i < squares.size(); i++)
        std::cout << squares[i] << std::endl;

    return 0;

}
