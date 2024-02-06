#pragma once

#include <cinttypes>

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
        Double( double _cpp_type_double );
         /**
        *   @brief Standard Constructor invoke new object passing std int value
        *   @param standard cpp int value
        */
        Double(const Double &double) noexcept ;
         /**
        *   @brief Standard Constructor invoke new object passing std int value
        *   @param standard cpp int value
        */
        Double& operator=(double _cpp_type_double) noexcept ;
        /**
        *   @brief Standard Constructor invoke new object passing std int value
        *   @param standard cpp int value
        */
        Double& operator=(const Double &double) noexcept ;
        /**
        *   @brief Standard Constructor invoke new object passing std int value
        *   @param standard cpp int value
        */
        int toPrimitiveInt( ) const ;
        /**
        *   @brief Return as Int32 stdint
        *   @return int32 type 
        */
        int32_t Int32() const ;
        /**
        *   @brief Return as Int64 stdint
        *   @return int64 type 
        */
        int64_t Int64() const ;
};