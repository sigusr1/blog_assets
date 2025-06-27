#pragma once

#include <string>

class MyString {
public:
    MyString(const std::string& str);

    ~MyString();

private:
    std::string mStr;
};