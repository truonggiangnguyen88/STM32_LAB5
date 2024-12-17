#include "global.h"
uint8_t temp = 0;
uint8_t buffer[BUFFER_SIZE];
uint8_t buffer_flag = 0;
uint8_t index_buffer = 0;

uint8_t command_buffer[BUFFER_SIZE];
uint8_t response_buffer[BUFFER_SIZE];
uint8_t command_index  = 0;
uint8_t command_ready_flag = 0;

int parser_state = PARSER_WAIT;
int comm_state = COMM_RST;
