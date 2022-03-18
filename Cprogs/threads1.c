#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
void thread_function()
{
printf("hello POSIX thread.....\n");
printf("the thread id is %d\n",pthread_self());
}
int main()
{
pthread_t mythread;
pthread_create(&mythread, NULL, thread_function,NULL);
printf("Hi there\n");
pthread_join(mythread, NULL);
printf("Bye there");
return 0;
}