/*==============================================================================
Copyright (C) Andrzej Adamczyk (at https://blackdev.org/). All rights reserved.
==============================================================================*/

	#include	"../config.h"
	#include	"../library/sys.c"

	uint8_t hello_string[ 15 ] = "Hello, World!\n";

void entry() {
	// display text on console
	system_stream_out( hello_string, sizeof( hello_string ) );

	// exit
	system_close();
}
