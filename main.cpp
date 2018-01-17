//
// Created by yangning on 18-1-17.
//
// Descriprion :
//
// Copyright (c) yangning All rights reserved.
//
#include "scope_guard/ScopeGuard.h"
#include "init_const_new/Foo.h"
#include <cstdio>
int main()
{
    FILE* fp=fopen("../readme.md","r");

    ON_SCOPE_EXIT([&](){
        printf("close fp\n");
        fclose(fp);
    });

    std::cout<<sizeof(long)<<std::endl;
    std::cout<<sizeof(Foo)<<std::endl;

    Foo* ptr = new Foo;
    delete ptr;

    Foo* ptr2 = new Foo[5];
    delete[] ptr2;

    return 0;
}

