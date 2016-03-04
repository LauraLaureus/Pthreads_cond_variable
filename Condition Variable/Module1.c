//
//  Module1.cpp
//  Condition Variable
//
//  Created by Laura del Pino Díaz on 4/3/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include "MainHeader.h"


void* init_module1(void* args){

    pthread_mutex_lock(&cond_mutex);
    printf("Module1: GET cond_mutex");
    if (count < 10) {
        pthread_cond_wait(&cond_var, &cond_mutex);
        pthread_mutex_unlock(&cond_mutex);
    }
    printf("Module1: SIMULATE function");
    pthread_exit(NULL);
}