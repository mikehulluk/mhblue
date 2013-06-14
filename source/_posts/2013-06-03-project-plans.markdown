---
layout: post
title: "Initial plans"
date: 2013-06-03 14:23
comments: true
categories: 
---




One of the main aims of this project is to explore the issues 
surrounding how simulations of nervous systems, composed of 
interconnected neurons, can be solved efficiently on electronic 
hardware.

To begin this project, I will start by:

1. Spending a few hours sitting down with the collaborators in the group
   working on the FPGAs, in order to understand the toolchain and how code is
   uploaded and run on the chips.
2. Come up with a simple C-model that can be used as basis for hand-mapping
   onto the FPGA's. My plan is a small simulation of small numbers of different
   types of (HH-type) neurons, synapses and gap junctions. The idea here is
   understand the basic principles of how these can be mapped onto the FPGA. I
   will start by looking at the C-tadpole model written by colleagues at the
   University of Plymouth group. If this is more complex than what we need, I
   think its only a couple of days work to reduce it to its bare-bones and
   write it from scratch C. This will give us a simple test-case to work
   against.

