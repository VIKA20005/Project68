#pragma once
#ifndef RAM_H
#define RAM_H
class 
{
private:
    int size; // В мегабайтах
    char* type;

public:
    RAM(int size, const char* type);
    ~RAM();

    int getSize() const;
    const char* getType() const;

    void setSize(int size);
    void setType(const char* type);
};

#endif 
