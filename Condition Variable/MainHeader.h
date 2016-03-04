//
//  MainHeader.h
//  Example pthreads
//
//  Created by Laura del Pino Díaz on 29/2/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#ifndef MainHeader_h
#define MainHeader_h
#include <pthread.h>
#include <stdio.h>

extern pthread_cond_t cond_var;
extern pthread_mutex_t cond_mutex;
extern int count;

#endif /* MainHeader_h */

#ifndef Modules
#include "Module1.h"
#include "Module2.h"
#include "View.h"
#endif
