//
//  ModuleB.c
//  DynamicRegisterModule
//
//  Created by guowei on 19/10/2016.
//  Copyright © 2016 guowei. All rights reserved.
//

#include <stdio.h>
#include "Module.h"

static void my_module_b_print()
{
    printf("my_module_b_print\n");
}

ModuleInfo my_module_b_info = {
    .name = "module_b",
    .print = my_module_b_print,
};
