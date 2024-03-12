#ifndef __DOUBLE_H__
#define __DOUBLE_H__

#ifdef _WIN32
    #define DOUBLE_API __declspec(dllexport)
#elif _WIN64
    #define DOUBLE_API __declspec(dllexport)
#else  
    #define DOUBLE_API
#endif

#ifdef __cplusplus
    #include <cinttypes>
    #include <string>
#endif

class Double 
{
    private:
        double _double_number;
        unsigned int _size;
    public:
        /**
        *   @brief Standard Constructor invoke new object passing std int value
        *   @param standard cpp int value
        */
        DOUBLE_API Double( double _cpp_type_double );
         /**
        *   @brief Standard Constructor invoke new object passing std int value
        *   @param standard cpp int value
        */
        DOUBLE_API Double(const Double &double) noexcept ;
         /**
        *   @brief Standard Constructor invoke new object passing std int value
        *   @param standard cpp int value
        */
        DOUBLE_API Double& operator=(double _cpp_type_double) noexcept ;
        /**
        *   @brief Standard Constructor invoke new object passing std int value
        *   @param standard cpp int value
        */
        DOUBLE_API Double& operator=(const Double &double) noexcept ;
        /**
        *   @brief Standard Constructor invoke new object passing std int value
        *   @param standard cpp int value
        */
        DOUBLE_API int toPrimitiveInt( ) const ;
        /**
        *   @brief Return as Int32 stdint
        *   @return int32 type 
        */
        DOUBLE_API int32_t Int32() const ;
        /**
        *   @brief Return as Int64 stdint
        *   @return int64 type 
        */
        DOUBLE_API int64_t Int64() const ;
        /**
        *  @brief return a string representation
        *  @return str of double
        */
        DOUBLE_API std::string str() const ;
};
#endif