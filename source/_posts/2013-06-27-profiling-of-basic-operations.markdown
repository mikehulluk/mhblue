---
layout: post
title: "Profiling of basic arithmetic operations"
date: 2013-06-27 11:28
comments: true
categories: 
---


I began with a basic project, including a NIOS2, and a large 1MB block. The DDR
RAM is not used in this example to avoid latency delays and block RAM is used
instead.

Integer operations:
-------------------


{% codeblock %}
+---------------+-----+-----------+---------------+-----------+
| Section       |  %  | Time (sec)|  Time (clocks)|Occurrences|
+---------------+-----+-----------+---------------+-----------+
|expf           |   73|    0.00414|         827186|          1|
+---------------+-----+-----------+---------------+-----------+
|mul            |0.886|    0.00005|          10038|          1|
+---------------+-----+-----------+---------------+-----------+
|div            | 23.9|    0.00136|         271167|          1|
+---------------+-----+-----------+---------------+-----------+
|add            | 0.62|    0.00004|           7026|          1|
+---------------+-----+-----------+---------------+-----------+
|add-indiv      |0.531|    0.00003|           6011|          1|
+---------------+-----+-----------+---------------+-----------+

{% endcodeblock %}


The times given show the time taken for 1000 operations. (expf, mul, div and add are performed in a loop or a thousand iterations, add\_indiv is hand-unrolled.
The calculated times for individual operations are then:

<table>
    <tr> <th>Add:</th> <td> 6/7</td> </tr>
    <tr> <th>Mul:</th> <td> 10 </td> </tr>
    <tr> <th>Div:</th> <td> 270</td> </tr>
    <tr> <th>Exp:</th> <td> 827</td> </tr>
</table>

The multiplication is misleading because the results are actually written back
to an array - so an addition instruction is needed to work out the target
memory location (pointer + offset)


When a hardware division block was added to the NIOS, and the results were written to a volatile variable
instead of an array, the results are as follows:


{% codeblock %}

-Performance Counter Report--
Total Time: 0.00467397 seconds  (934793 clock-cycles)
+---------------+-----+-----------+---------------+-----------+
| Section       |  %  | Time (sec)|  Time (clocks)|Occurrences|
+---------------+-----+-----------+---------------+-----------+
|expf           | 88.5|    0.00414|         827573|          1|
+---------------+-----+-----------+---------------+-----------+
|mul            |0.966|    0.00005|           9032|          1|
+---------------+-----+-----------+---------------+-----------+
|div            | 7.92|    0.00037|          74023|          1|
+---------------+-----+-----------+---------------+-----------+
|add            |0.751|    0.00004|           7018|          1|
+---------------+-----+-----------+---------------+-----------+
|add-indiv      |0.643|    0.00003|           6009|          1|
+---------------+-----+-----------+---------------+-----------+

{% endcodeblock %}

<table>
    <tr> <th>Add:</th> <td> 6/7</td> </tr>
    <tr> <th>Mul:</th> <td> 9 </td> </tr>
    <tr> <th>Div:</th> <td> 74</td> </tr>
    <tr> <th>Exp:</th> <td> 827</td> </tr>
</table>




Floating Point operations:
--------------------------

First, I ran the same simulations, switching 'int' for 'float' dataypes,
without adding the floating point unit, so the calculations will be emulated in
software.

{% codeblock %}
--Performance Counter Report--
Total Time: 0.0267399 seconds  (5347987 clock-cycles)
+---------------+-----+-----------+---------------+-----------+
| Section       |  %  | Time (sec)|  Time (clocks)|Occurrences|
+---------------+-----+-----------+---------------+-----------+
|expf           | 76.8|    0.02053|        4105562|          1|
+---------------+-----+-----------+---------------+-----------+
|mul            |  3.7|    0.00099|         197715|          1|
+---------------+-----+-----------+---------------+-----------+
|div            | 8.73|    0.00233|         466832|          1|
+---------------+-----+-----------+---------------+-----------+
|add            | 3.93|    0.00105|         210113|          1|
+---------------+-----+-----------+---------------+-----------+
|add-indiv      | 3.37|    0.00090|         180199|          1|
+---------------+-----+-----------+---------------+-----------+
{% endcodeblock %}


<table>
    <tr> <th>Add:</th> <td> 180/210</td> </tr>
    <tr> <th>Mul:</th> <td> 197 </td> </tr>
    <tr> <th>Div:</th> <td> 466</td> </tr>
    <tr> <th>Exp:</th> <td> 4105</td> </tr>
</table>


{% codeblock %}
+---------------+-----+-----------+---------------+-----------+
| Section       |  %  | Time (sec)|  Time (clocks)|Occurrences|
+---------------+-----+-----------+---------------+-----------+
|expf           |   96|    0.02065|        4129860|          1|
+---------------+-----+-----------+---------------+-----------+
|mul            |0.861|    0.00019|          37051|          1|
+---------------+-----+-----------+---------------+-----------+
|div            |  1.4|    0.00030|          60045|          1|
+---------------+-----+-----------+---------------+-----------+
|add            |0.814|    0.00018|          35057|          1|
+---------------+-----+-----------+---------------+-----------+
|add-indiv      |0.419|    0.00009|          18025|          1|
+---------------+-----+-----------+---------------+-----------+
{% endcodeblock %}



<table>
    <tr> <th>Add:</th> <td> 35</td> </tr>
    <tr> <th>Mul:</th> <td> 37</td> </tr>
    <tr> <th>Div:</th> <td> 60</td> </tr>
    <tr> <th>Exp:</th> <td> 4129</td> </tr>
</table>


I also ran the same code, but increased the complexity of the add operation to
include several operations. Each additional operations added ~30 clock cycles
(6 add operations took 173 cycles).



<!--
{% include_code lang:c week3/profile1.c %} 
-->
