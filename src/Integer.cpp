#include <Integer.hpp>
#include <vector>
#include <algorithm>
#include <string>

Integer::Integer(int c_type_integer){
    _c_integer = c_type_integer;
    _size = sizeof(this->_c_integer);
}

Integer::Integer(const Integer &integer ) noexcept 
    :_c_integer(integer._c_integer),_size(integer._size) 
{}

Integer& Integer::operator=(const Integer& integer) noexcept {
    _c_integer = integer._c_integer;
    _size = sizeof(int);
    return *this;
}

int Integer::value() const {
    return this->_c_integer;
}

unsigned int Integer::size() const {
    return this->_size;
}

std::string_view Integer::binary() const {
    std::string strOutput;
    std::vector<unsigned char> binary;   
    int v = _c_integer;
    if(v == 0) binary.push_back(0);
    else {
        while(v != 0){
            unsigned char y = static_cast<unsigned char>( v % 2);
            binary.push_back(y);
            v /= 2;
        }
    }
    std::reverse(binary.begin(), binary.end());
    for(auto i = binary.begin(); i != binary.end(); i++){
        strOutput += std::to_string(*i);
    }
    
    std::string_view output = strOutput;

    return output;
} 

bool Integer::isPrime() const {
    int x = _c_integer;
    bool isPrime = true;
    if(x == 0 || x == 1){
        isPrime = false;
    }
    for(int i = 2; i <= x/2; ++i ){
        if(x % i == 0){
            isPrime = false;
            break;
        }
    }
    return isPrime;
} 

long int Integer::Factorial() const {
    int x = _c_integer;
    long factorial = 0;
    for(int i = 1; i <= x; ++i){
        factorial *= i;
    }
    return factorial;
}
