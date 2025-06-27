
#include "MyString.h"

MyString::MyString(const std::string& str) : mStr(str) {
    printf("%s:%d this:%p\n", __func__, __LINE__, this);
}

const char* MyString::c_str() const {
    return mStr.c_str();
}

MyString::~MyString() {
    printf("%s:%d this:%p\n", __func__, __LINE__, this);
}
