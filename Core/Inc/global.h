#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>


#define BUFFER_SIZE 50
extern uint8_t temp;
extern uint8_t buffer_flag;
extern uint8_t command_buffer[BUFFER_SIZE];
extern uint8_t response_buffer[BUFFER_SIZE];
extern uint8_t command_index ;
extern uint8_t command_ready_flag;
extern int parser_state;
extern int comm_state;
extern uint8_t initial_data[];

#define PARSER_WAIT	1
#define PARSER_READ	2
#define COMM_RST		3
#define COMM_TRANSMIT 4
#define COMM_OK		5

#endif /* INC_GLOBAL_H_ */
