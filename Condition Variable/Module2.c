//
//  Module2.cpp
//  Condition Variable
//
//  Created by Laura del Pino Díaz on 4/3/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include "MainHeader.h"


void* init_module2(void* args){

    pthread_mutex_lock(&cond_mutex);
    printf("Module2: OVERITING the count value");
    count = 10;
    if (count == 10) {
        
        pthread_mutex_unlock(&cond_mutex);
        pthread_cond_signal(&cond_var);
        printf("Module2: Signal send");
        
    }
    pthread_exit(NULL);
}