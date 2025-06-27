#pragma once

#include <stdio.h>

class DemoClass {
public:
    DemoClass(int value);

    int value() const;

    ~DemoClass();

private:
    int* mValue;
};