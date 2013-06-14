---
layout: post
title: "C++ Implementation of tadpole swimming model"
date: 2013-06-10 08:52
comments: true
categories: 
---

Having looked at the C-code for the tadpole swimming model written 
by our colleagues in Plymouth, I decided that it would be simpler to 
reimplement the model from scratch, rather than use the existing 
code base. 

I began with a slightly simplified version of the model for initial 
testing. During tadpole swimming, a population of interneurons on 
each side of the nervous systems with descending axons, (dINs), are 
the first neurosn to fire on each cycle. These neurons are central 
to swimming and also have some interesting features: a) they are 
electrically coupled via thier axons; and b) they make mutual feedback
NMDA-receptor synapses back onto themselves.

It is proposed that the feedback NMDA synapses allow the network to 
produce sustained activity following a brief stimulus. It is also 
proposed that the electrical coupling between the neurons causes 
thier activity to become synchronised.


The C++ model runs on my desktop computer. The dIN population is 30 
neurons, but in the following graphs, the traces of 10 neurons are 
shown. In all cases, all neurons are given a step current injection of 50pA 
for t=0.05 to t=0.2 (times in milliseconds). All the neurons are given identical 
parameters, but there is variation in the network connectivity.

In the first experiment, there is no NMDA and no electrical 
coupling. Activity is not sustained after the initial current injection.

![Alt text 1](week1/Voltage.png)

In the second experiment, there are feedback NMDA synapses, but no 
electrical coupling. Activity is sustained after the initial current 
injection, but it is not synchronised and the variation in the 
network connections mean it quickly becomes desynchronised.

![Alt text 2](week1/Voltage_NMDA.png)

In the third experiment, there are feedback NMDA synapses and 
electrical coupling between the neurons. Activity is sustained after the initial current 
injection, but it is synchronised. 

![Alt text 3](week1/Voltage_NMDA_EC.png)
