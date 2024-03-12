#include <Double.hpp>

int Double::Int( ) const 
{
    return static_cast<int>(_double_number);
}

int32_t Double::Int32() const 
{
    return static_cast<int32_t>(_double_number);
}

int64_t Double::Int64() const 
{
    return static_cast<int64_t>(_double_number);
}

std::string Double::str() const
{
    return static_cast<std::string>(_double_number);
}