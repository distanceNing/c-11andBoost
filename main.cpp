//
// Created by yangning on 18-1-17.
//
// Descriprion :
//
// Copyright (c) yangning All rights reserved.
//
#include "scope_guard/ScopeGuard.h"
//#include <cstdio>
int main()
{
    FILE* fp=fopen("../readme.md","r");

    ON_SCOPE_EXIT([&](){
        printf("close fp\n");
        fclose(fp);
    });

    return 0;
}

