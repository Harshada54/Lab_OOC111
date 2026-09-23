#include<iostream>
using namespace std;
class Myclass
{
    private:
    int value;
    public:
    Myclass(int val)
    :value(val)
    {
    }
// Overloading the equality operator (==)
bool operator==(const MyClass& other) const
{
// Compare the value of this object with the value of 'other'
return value == other.value;
}
// Overloading the inequality operator (!=)
bool operator!=(const MyClass& other) const
{
// Utilize the already overloaded '==' operator
return !(*this == other);
}
// Overloading the less than operator (<)
bool operator<(const MyClass& other) const
{
// Compare the value of this object with 'other' for less than
return value < other.value;
}
// Overloading the greater than operator (>)
bool operator>(const MyClass& other) const
{
// Compare the value of this object with 'other' for greater than
return value > other.value;
}
// Overloading the less than or equal to operator (<=)