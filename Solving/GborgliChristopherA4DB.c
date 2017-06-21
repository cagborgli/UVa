#include <stdio.h>
#include <mpi.h>  
   /* For MPI functions, etc */ 

const int SIZE = 100000000;
const  int Chunk = 100000;

int main() 
{
	
   int  *myArray = (int *)malloc(sizeof(int)*SIZE); /* String storing message */
   int       comm_sz;               /* Number of processes    */
   int       my_rank;               /* My process rank        */
   int 		 i,j;
   
   /* Start up MPI */
   MPI_Init(NULL, NULL); 
   /* Get the number of processes */
   MPI_Comm_size(MPI_COMM_WORLD, &comm_sz); 
   /* Get my rank among all the processes */
   MPI_Comm_rank(MPI_COMM_WORLD, &my_rank); 
   MPI_Request request;

   if (my_rank == 0) 
   { 
	  for (i = 0; i < SIZE; i++)//initializing all elements to Zero
		myArray[i]=0;
       
	   for (i = 0; i < 1000; i++)
	  {
         /* Send message to process 0 */
		MPI_Send(myArray+i*Chunk,Chunk, MPI_INT, 1, 0, MPI_COMM_WORLD); 
      } 
      
   }
   else
   {  
	  int  *Result = (int *)malloc(sizeof(int)*SIZE); 
	  int  *A = (int *)malloc(sizeof(int)*Chunk); 
	  int  *B = (int *)malloc(sizeof(int)*Chunk); 
	  double start=MPI_Wtime();
	  int *Temp;
	  
	  MPI_Recv(B, Chunk, MPI_INT, 0, 0, MPI_COMM_WORLD,MPI_STATUS_IGNORE);
	  for (i = 1; i < 1000; i++)
	  {
         /* Receive message from process 1 */
		MPI_Irecv(A, Chunk, MPI_INT, 0, 0, MPI_COMM_WORLD, &request);
		for(j=0;j<Chunk;j++)
		{
			Result[j+(i-1)*Chunk]=B[j]+1*1*1;
		}
		MPI_Wait(&request,MPI_STATUS_IGNORE);
	
		Temp=A;
		A=B;
		B=Temp;
      } 
	  for(j=0;j<Chunk;j++)
	  {
		Result[j+(i-1)*Chunk]=B[j]+1*1*1;
	  }
	double Finish = MPI_Wtime();
	printf("%d %d",Result[0],Result[SIZE-1]);
  
	 printf( "Elapsed time is %f\n",Finish - start ); 
   }
   /* Shut down MPI */
   MPI_Finalize(); 

   return 0;
}  /* main */
