#include "SampleApi.h"

#include <stdio.h>

void Hello()
{
    printf("Hello\n");
}

Foo::Foo() : m_X(0)
{
}

Foo::~Foo()
{
}

int Foo::getX()
{
    return m_X;
}

void Foo::setX(int x)
{
    m_X = x;
}
