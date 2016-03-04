//
//  main.cpp
//  Condition Variable
//
//  Created by Laura del Pino Díaz on 4/3/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include "MainHeader.h"

pthread_cond_t cond_var = PTHREAD_COND_INITIALIZER;
pthread_mutex_t cond_mutex = PTHREAD_MUTEX_INITIALIZER;
int count = 0;

int main(int argc, const char * argv[]) {

    pthread_t threads[2];
    
    pthread_create(&threads[0], NULL , init_module1, NULL );
    pthread_detach(threads[0]);

    pthread_create(&threads[1], NULL , init_module2, NULL );
    pthread_detach(threads[1]);

    
    pthread_exit(NULL);
}
