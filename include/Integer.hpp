#include <string_view>
#pragma once
    /**
    * @brief Integer Class Encapsulatuing Integer Methods and Attributes
    */
    class Integer
    {
        private:
            int _c_integer;
            unsigned int _size;
        public:
            /**
            *   @brief Standard Constructor invoke new object passing std int value
            *   @param standard cpp int value
            */
            Integer(int c_type_integer);
            /**
            *   @brief Standard Constructor invoke new object passing std int value
            *   @param instance of Integer class
            */
            Integer(const Integer &integer) noexcept;
            /**
            * @brief Assignement operator
            * @param instance of Integer class
            */
            Integer& operator=(const Integer &integer) noexcept;
            
            /**
            * @brief signed value of integer
            * @return signed value of int
            */
            int value() const ;
            
            /**
            * @brief signed size in bytes
            * @return signed size in bytes
            */
            unsigned int size() const ;

            /**
            * @brief string representation of binary value of int
            * @return string_view (C++17) value of binary value of int
            */
            std::string_view binary() const ; 
            
            /**
            * @brief is a prime number
            * @return boolean state (0 if no | 1 if yes )
            */
            bool isPrime() const ;

            /**
            * @brief returns the factorial of the provided integer
            * @return factorial (long) of provided integer
            */
            long Factorial() const ;

            /**
            * @brief returns the floating-point version of the respective integer
            * @return returns (float) version of the integer primitive type
            */
            float toFloat() const ;

            /**
            * @brief returns the double version of the respective integer
            * @return returns (double) version of the integer primitive type
            */
            double toDouble() const ;
    };