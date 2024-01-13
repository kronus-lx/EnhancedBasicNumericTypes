#pragma once

class Float
{
    private:
        float _cpp_float;
        unsigned int _size;
    public:
        Float( float cpp_type_float );
        Float(const Float &float_object) noexcept ;
        Float& operator=(float cpp_type_float) noexcept ;
        Float& operator=(const Float &float_object) noexcept ;
}