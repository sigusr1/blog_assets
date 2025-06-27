#pragma once

#include <string>

class MyString {
public:
    MyString(const std::string& str);
    const char* c_str() const;

    ~MyString();

private:
    std::string mStr;
};