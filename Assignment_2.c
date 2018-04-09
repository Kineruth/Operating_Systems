#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include<sys/wait.h>
int main() {

	pid_t id = fork(); //on node 1
	
	if(!id){
	    id = fork(); //on node 2
	    if(!id){
	        id = fork();//on 4
	        if(!id){
	            id = fork();//on node 8
	            if(!id){
	                printf("The 1 ID is: %d number of childrens is: %d\n",getpid(), 13);//for process 1
	            }
	            else{//go to 15
	                printf("The 8 ID is: %d number of childrens is: %d\n",getpid(), 0);//for process 8
	                
	            }
	        }
	        else{//go to 9 
	            id = fork();//on node 9
	            if(!id){
	                id = fork();//on node 16
	                if(!id){
	                    id = fork(); //on node 22
	                    if(!id){
	                        printf("The 5 ID is: %d number of childrens is: %d\n",getpid(), 3);//for process 5
	                    }
	                    else{//go to 27
	                        printf("The 14 ID is: %d number of childrens is: %d\n",getpid(), 0);//for process 14
	                    }
	                }
	                else{//go to 23
	                    printf("The 12 ID is: %d number of childrens is: %d\n",getpid(), 0);//for process 12
	                }
	            }
	            else{//go to 17
	                printf("The 9 ID is: %d number of childrens is: %d\n",getpid(), 0);//for process 9
	            }
	        }
	    }
	    else{//go to 5
	        id = fork();//on node 5
	        if(!id){
	            printf("The 3 ID is: %d number of childrens is: %d\n",getpid(), 3);//for process 3
	        }
	        else{//go to 11
	            id = fork();//on node 11
	            if(!id){
	                id = fork();//on node 18
	                if(!id){
	                    printf("The 6 ID is: %d number of childrens is: %d\n",getpid(), 2);//for process 6
	                }
	                else{//go to 25
	                    printf("The 13 ID is: %d number of childrens is: %d\n",getpid(), 0);//for process 13
	                }
	            }
	            else{//go to 19
	                printf("The 10 ID is: %d number of childrens is: %d\n",getpid(), 0);//for process 10
	            }
	        }
	    }
	}
	else{//go to 3
	    id = fork();//on node 3
	    if(!id){
	        printf("The 2 ID is: %d number of childrens is: %d\n",getpid(), 3);//for process 2
	    }
	    else{//go to 7
	        id = fork();//on node 7
	        if(!id){
	            id = fork();//on node 12
	            if(!id){
	                printf("The 4 ID is: %d number of childrens is: %d\n",getpid(), 2);//for process 4
	            }
	            else{//go to 21
	                printf("The 11 ID is: %d number of childrens is: %d\n",getpid(), 0);//for process 11
	            }
	        }
	        else{//go to 13
	            printf("The 7 ID is: %d number of childrens is: %d\n",getpid(), 0);//for process 7
	        }
	    }
	    while(1){
	        
	    }
	}
	return 0;
}