#ifndef __INTEGER_H__
#define __INTEGER_H__

#ifdef _MSC_VER
    #define INTEGER_API __declspec(dllexport)
#else
    #define INTEGER_API
#endif

#ifdef __cplusplus
    #include <EnhancedTypes.hpp>
#endif
/*********************************************************************
* @brief Integer Class Encapsulatuing Integer Methods and Attributes
*********************************************************************/
namespace EnhancedTypes
{
    namespace Numeric
    {
        namespace Integer
        {
            class Integer : public EnhancedTypes::Numeric::IInteger
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
                    * @brief assingment of primitive integer type
                    */
                    Integer& operator=(int c_type_integer) noexcept;
                    
                    /**
                    * @brief signed value of integer
                    * @return signed value of int
                    */
                    int value() const override ;
                    
                    /**
                    * @brief signed size in bytes
                    * @return signed size in bytes
                    */
                    unsigned int size() const override ;

                    /**
                    * @brief string representation of binary value of int
                    * @return string_view (C++17) value of binary value of int
                    */
                    const char* binary() const override ; 
                    
                    /**
                    * @brief is a prime number
                    * @return boolean state (0 if no | 1 if yes )
                    */
                    bool isPrime() const override ;

                    /**
                    * @brief returns the factorial of the provided integer
                    * @return factorial (long) of provided integer
                    */
                    long Factorial() const override ;

                    /**
                    * @brief returns the floating-point version of the respective integer
                    * @return returns (float) version of the integer primitive type
                    */
                    float toFloat() const override ;

                    /**
                    * @brief returns the double version of the respective integer
                    * @return returns (double) version of the integer primitive type
                    */
                    double toDouble() const override ;
                    
                    /**
                    * @brief return as a std::string
                    * @return string version of integer
                    */
                    std::string str() const ;
            };
        }
    }
}
#endif