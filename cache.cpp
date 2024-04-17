#include "cache.h"
#include <iostream>

// TODO: 필요한 함수 구현

Cache::Cache() {
    // 생성자 구현



}

Cache::~Cache() {
    // 소멸자 구현
}

void Cache::add(std::string key, int value){
    std::cout << key;
    std::cout << value;
};

void Cache::add(std::string key, double value){
    std::cout << key;
    std::cout << value;

};

bool Cache::get(std::string key, int &value){
    std::cout << key;
    return false;
};

bool Cache::get(std::string key, double &value){
    std::cout << key;

    return false;
};

std::string Cache::toString(){
    std::string result;

    return result;
};




