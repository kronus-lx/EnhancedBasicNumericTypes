#pragma once

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
};