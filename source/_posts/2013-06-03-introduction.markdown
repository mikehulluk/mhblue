---
layout: post
title: "Project Overview"
date: 2013-06-03 14:00
comments: true
categories: 
---

From snails to scorpions to sea-lions, the nervous systems of 
animals play a central role in generating behaviours. Nervous 
systems are though to be composed of billions of specialised nerve 
cells, or *neurons*.  These neurons have remarkable electrical 
properties and can actively respond to certain types of 
stimulation.  Neurons can connect together either via direct 
electrical connections, or via more complex chemical synapses.  In 
more complex animals, like mammals, one hypothesis is that 
information is encoded in electrical signals in the brain and that 
the different types of neurons and the specific connections between 
them allows incoming sensory information to be filtered and processed.

In simpler animals, such as leechs & crabs, it has been possible to 
isolate parts of the nervous systems that generate specific 
behaviours such as the heartbeat and chewing in the stomach. In 
many cases, the electrical signals that drive these rhythmic 
behaviours are generated intrinsically, without the need for 
sensory feedback, by a population of neurons known as a 
pattern-generator-circuit. This is important because it means we 
can try to understand how the neuronal network works, without 
worrying about feedback from the animal moving.


Since we can model the individual components, and the interactions 
between them, a natural question to ask is do our models of nervous 
systems generate similar outputs to those seen experimentally? Is 
the whole really the sum of the parts?  Unfortunately, these systems 
are mathematically non-tractable and need to be solved by simulation.


Unfortunately, these systems can also be large! The human nervous 
system contains XX neurons. We need to find efficient ways to run 
our simulations. One approach we will try to exploit is that some 
parts neuronal systems seem to be *embarrassingly parallel*, and 
that by carefully structuring our calculations, we can process the 
activity inside many neurons in parallel.


At the Computer Architecture group in Cambridge, Dr Simon Moore is 
leading research looking at how FPGA's can be used to implement 
efficient compute. One hypothesis that is being investigated is that 
in many cases compute systems, are not limited by the processing, 
but rather the communication, between other processors and with 
memory. Using interconnected FPGAs would provide away around this 
problem, and also offers other advantages such as the ability to 
vectorise calculations and the ability to write custom hardware 
processors. The group have built a project called BlueHive, which 
consists of XX interconnected ?? Altera Boards.

Over the next months, I will be working with Simon Moore and Robert 
Cannon on this project, looking at how particular types of neuronal 
network models can be effectively parallelised. 







