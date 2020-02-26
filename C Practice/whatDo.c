#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){

while(1){
	printf("Forking");
	fork();
}

return 0;

}
