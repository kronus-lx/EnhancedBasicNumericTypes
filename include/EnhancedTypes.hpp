#ifndef __ENHANCEDTYPES_H__
#define __ENHANCEDTYPES_H__

#ifdef _MSC_VER
    #define NUMERIC_API __declspec(dllexport)
#else
    #define NUMERIC_API
#endif

#ifdef __cplusplus
    #include <string>
#endif

namespace EnhancedTypes
{
    class EnhancedTypes
    {
        public:
            NUMERIC_API virtual Numeric::INumeric& new_Integer() = 0;
            NUMERIC_API virtual Numeric::IDouble& new_Double() = 0 ;
            NUMERIC_API virtual Numeric::IFloat& new_Float() = 0;
    };
    namespace Numeric
    {
        class IInteger
        {        
            NUMERIC_API virtual int value() const = 0;
            NUMERIC_API virtual unsigned int size() const = 0;
            NUMERIC_API virtual const char* binary() const = 0;
            NUMERIC_API virtual bool isPrime() const = 0;
            NUMERIC_API virtual long Factorial() const = 0;
            NUMERIC_API virtual float toFloat() const = 0;
            NUMERIC_API virtual double toDouble() const = 0;
            NUMERIC_API virtual std::string str() const = 0 ;
        };

        class IDouble
        {

        };
    }
}
#endif