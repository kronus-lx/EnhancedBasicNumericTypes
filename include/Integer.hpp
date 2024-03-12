#ifndef __INTEGER_H__
#define __INTEGER_H__

#ifdef _WIN32
    #define INTEGER_API __declspec(dllexport)
#else
    #define INTEGER_API
#endif

#ifdef __cplusplus
    #include <string>
#endif

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
        INTEGER_API Integer(int c_type_integer);
        /**
        *   @brief Standard Constructor invoke new object passing std int value
        *   @param instance of Integer class
        */
        INTEGER_API Integer(const Integer &integer) noexcept;
        /**
        * @brief Assignement operator
        * @param instance of Integer class
        */
        INTEGER_API Integer& operator=(const Integer &integer) noexcept;

        /**
        * @brief assingment of primitive integer type
        */
        INTEGER_API Integer& operator=(int c_type_integer) noexcept;
        
        /**
        * @brief signed value of integer
        * @return signed value of int
        */
        INTEGER_API int value() const ;
        
        /**
        * @brief signed size in bytes
        * @return signed size in bytes
        */
        INTEGER_API unsigned int size() const ;

        /**
        * @brief string representation of binary value of int
        * @return string_view (C++17) value of binary value of int
        */
        INTEGER_API const char* binary() const ; 
        
        /**
        * @brief is a prime number
        * @return boolean state (0 if no | 1 if yes )
        */
        INTEGER_API bool isPrime() const ;

        /**
        * @brief returns the factorial of the provided integer
        * @return factorial (long) of provided integer
        */
        INTEGER_API long Factorial() const ;

        /**
        * @brief returns the floating-point version of the respective integer
        * @return returns (float) version of the integer primitive type
        */
        INTEGER_API float toFloat() const ;

        /**
        * @brief returns the double version of the respective integer
        * @return returns (double) version of the integer primitive type
        */
        INTEGER_API double toDouble() const ;
        
        /**
        * @brief return as a std::string
        * @return string version of integer
        */
        INTEGER_API std::string str();
};
#endif