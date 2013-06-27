---
layout: post
title: "Optimising simulation on the NIOS II"
date: 2013-06-17 10:35
comments: true
categories: 
---

It seemed likely that the slowly could come from one of 2 places: either a lot
of cache misses leading to slow memory lookups for intructions & data, or slow
floating point calculations.

I looked again at the NIOS II settings, and foudn the defaults for the cache
sizes were small and so increased them. I also enabled hardware division on the
NIOS II.  Rerunning the simulation still took ~10 mins.


It seems as though floating point calculations are implemented in a software library on top of the integer operations.



