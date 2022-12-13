#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstddef>
#include <iostream>

template <typename T>
class Array{

    public:
        Array(void):_array(NULL), _size(0){};
        Array(unsigned int n): _array(new T[n]), _size(n){};
        ~Array(void){delete []_array;};
        Array(const Array & A){*this = A;};
        Array&operator=(const Array & A){
            _array = new T[A._size];
            _size = A._size;
            for (unsigned int i = 0; i < _size; i++)
            {
                _array[i] = A._array[i];
            }
            return (*this);
        };
        T& operator[](unsigned int index)
        {
            if (index >= _size || index < 0 || !_array)
                throw OutOfArray();      
            return (_array[index]);
        };
        unsigned int size(void)
        {return this->_size;};

        private:
            T* _array;
            unsigned int _size;

        class OutOfArray: public std::exception{
            public:
                virtual const char* what() const throw(){return "Error: Index is out of the array";};
        };
};

#endif