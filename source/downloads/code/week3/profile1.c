/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "altera_avalon_performance_counter.h"
#include "system.h"


#include <math.h>

#define N 1000


//typedef float DataType;
typedef int DataType;

DataType src_data[N];
//DataType dst_data[N];


int main()
{
  int i;
  printf("Hello from Nios II!\n");



  volatile DataType output;
  for(i=0;i<N;i++)
  {
    src_data[i] = ((float)rand()) / RAND_MAX;
  }

  printf("Trying float-exp!\n");

  PERF_RESET(PERFORMANCE_COUNTER_0_BASE);
  PERF_START_MEASURING(PERFORMANCE_COUNTER_0_BASE);


    PERF_BEGIN(PERFORMANCE_COUNTER_0_BASE, 1);
  for(i=0;i<N;i++)
  {
    output = expf(src_data[i]);
  }
    PERF_END(PERFORMANCE_COUNTER_0_BASE, 1);


  printf("Trying float-multiplication!\n");
    PERF_BEGIN(PERFORMANCE_COUNTER_0_BASE, 2);
  for(i=0;i<N;i++)
  {
    output = 100 *  src_data[i];
  }
    PERF_END(PERFORMANCE_COUNTER_0_BASE, 2);


  printf("Trying float-div!\n");
    PERF_BEGIN(PERFORMANCE_COUNTER_0_BASE, 3);
  for(i=0;i<N;i++)
  {
    output = 100 /  src_data[i];
  }
    PERF_END(PERFORMANCE_COUNTER_0_BASE, 3);

  printf("Trying float-add!\n");
  PERF_BEGIN(PERFORMANCE_COUNTER_0_BASE, 4);
  for(i=0;i<N;i++)
  {
    output = 100 +  src_data[i];
  }
    PERF_END(PERFORMANCE_COUNTER_0_BASE, 4);


  volatile int y,z;
  y=z=0;


  int aa=0;
  for(aa=0;aa<2;aa++)
  {

  if(aa==1) PERF_BEGIN(PERFORMANCE_COUNTER_0_BASE, 5);


  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;
  y = z + 1;
  z = y + 1;

  //PERF_END(PERFORMANCE_COUNTER_0_BASE, 5);
  if(aa==1) PERF_END(PERFORMANCE_COUNTER_0_BASE, 5);
  }












  PERF_STOP_MEASURING(PERFORMANCE_COUNTER_0_BASE);
    perf_print_formatted_report(
        (void*) PERFORMANCE_COUNTER_0_BASE,
        ALT_CPU_FREQ, 5,
        "expf",
        "mul",
        "div",
        "add",
        "add-indiv"
    );


  printf("Done!\n");
  return 0;
}