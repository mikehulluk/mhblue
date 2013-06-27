---
layout: post
title: "Preliminary simulation results"
date: 2013-06-14 16:40
comments: true
categories: 
---


It was possible to get the tadpole simulation to run on the NIOS processor.
This is a reduced tadpole model of just 30 dINs (electrically coupled, feedback NMDA)
connected by excitatory AMPA synapses to a population of 5 passive neurons. 


The code runs very slowly on the NIOS at the moment. For 10000 time-steps (1s) - using GCC -02, the code runs
almost instanteously on the desktop machine.


On the NIOS, if I comment out the 'core loop' for solving the update equations
(i.e. leaving the electrical coupling, and synaptic message passing features
on, then the code runs in ~15s

If I turn on the core loop, it takes ~10mins to run.



Below is some simulation traces from runnning on the NIOS.


![Alt text](images/week2/FriCPP_NIOS_ex1.png)

![Alt text](images/week2/FriCPP_NIOS_ex2.png)




There are several possibilities for why this is running slowly - particularly surrounding how the
NIOS and the memory are configured on the FPGA


Some optimisation possibilities ahead!









