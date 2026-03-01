#include "vect2.hpp"

vect2::vect2()
{
    this->x = 0;
    this->y = 0;
}

vect2::vect2(int n1, int n2)
{
    this->x = n1;
    this->y = n2;
}

vect2::vect2(const vect2& s)
{
    *this = s;
}

vect2& vect2::operator=(const vect2& s)
{
    if (this != &s)
    {
        this->x = s.x;
        this->y = s.y;
    }
    return (*this);
}

int vect2::operator[](int i) const
{
    if (i == 0)
        return (this->x);
    return (this->y);
}

int& vect2::operator[](int i)
{
    if (i == 0)
        return (this->x);
    return (this->y);
}

vect2 vect2::operator-() const
{
    vect2 tmp = *this;
    tmp[0] = -tmp[0];
    tmp[1] = -tmp[1];
    return (tmp);
}

vect2 vect2::operator*(int n) const
{
    vect2 tmp;

    tmp.x=this->x * n;
    tmp.y=this->y * n;
    return (tmp);
}

vect2& vect2::operator*=(int n)
{
    this->x *= n;
    this->y *= n;
    return(*this);
}

vect2& vect2::operator+=(const vect2& o)
{
    this->x += o.x;
    this->y += o.y;
    return (*this);
}

vect2& vect2::operator-=(const vect2& o)
{
    this->x -= o.x;
    this->y -= o.y;
    return (*this);
}

vect2& vect2::operator*=(const vect2& o)
{
    this->x *= o.x;
    this->y *= o.y;
    return (*this);
}

vect2 vect2::operator+(const vect2& o) const
{
    vect2 tmp = *this;
    tmp.x += o.x;
    tmp.y += o.y;
    return (tmp);
}

vect2 vect2::operator-(const vect2& o) const
{
    vect2 tmp=*this;
    tmp.x-=o.x;
    tmp.y-=o.y;
    return tmp;
}

vect2 vect2::operator*(const vect2& o) const
{
    vect2 tmp = *this;
    tmp.x *= o.x;
    tmp.y*=o.y;
    return tmp;
}

vect2& vect2::operator++()
{
    this->x+=1;
    this->y+=1;
    return *this;
}

vect2 vect2::operator++(int)
{
    vect2 tmp = *this;

    ++(*this);
    return(tmp);
}

vect2& vect2::operator--()
{
    this->x -=1;
    this->y -=1;
    return(*this);
}

vect2 vect2::operator--(int)
{
    vect2 tmp = *this;
    
    --(*this);
    return(tmp);
}

bool vect2::operator==(const vect2& o) const
{
    if((this->x == o.x) && (this->y == o.y))
        return true;
    return false;
}

bool vect2::operator!=(const vect2& o) const
{
    if((this->x != o.x) && (this->y != o.y))
        return true;
    return false;
}
vect2::~vect2()
{

}

vect2 operator*(int n, const vect2& o)
{
    vect2 tmp(o);
    tmp *= n;
    return(tmp);
}

std::ostream& operator<<(std::ostream& os, const vect2& o)
{
    std::cout << "{" << o[0] << ", " << o[1] << "}";
    return os;
}