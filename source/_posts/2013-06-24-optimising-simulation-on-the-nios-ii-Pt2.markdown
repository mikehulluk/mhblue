---
layout: post
title: "Optimising simulation on the NIOS II"
date: 2013-06-17 10:35
comments: true
categories: 
---


Results from profiling - 
{% codeblock %}

N2T-WRAP >> Done--Performance Counter Report--
N2T-WRAP >> Total Time: 35.4501 seconds  (7090029913 clock-cycles)
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> | Section       |  %  | Time (sec)|  Time (clocks)|Occurrences|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> |::step()       | 97.5|   34.55897|     6911794887|       1000|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> |dIN::step()    | 87.5|   31.00537|     6201074476|     100000|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> |dIN~currents   | 15.4|    5.46835|     1093669374|     100000|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> |dIN~states     | 71.8|   25.45252|     5090504637|     100000|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> |dIN~dV         |0.193|    0.06850|       13700254|     100000|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> |dIN~RC_AB      | 55.8|   19.77230|     3954459060|     400000|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> |dIN~RC_ABB     | 15.1|    5.35172|     1070343960|     100000|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
{% endcodeblock %}


Most of the time is being taken up with calculating the forward and backward
rate constants. When these lines are removed and replaced with fixed values for inf and tau, the simulation time drops from  35s to 10s.


N2T-WRAP >> Done--Performance Counter Report--
N2T-WRAP >> Total Time: 10.3293 seconds  (2065860895 clock-cycles)
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> | Section       |  %  | Time (sec)|  Time (clocks)|Occurrences|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> |::step()       | 92.8|    9.58454|     1916907904|       1000|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> |dIN::step()    | 56.7|    5.85270|     1170539530|     100000|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> |dIN~currents   | 53.5|    5.52568|     1105135584|     100000|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> |dIN~states     | 2.35|    0.24302|       48603537|     100000|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> |dIN~dV         |0.658|    0.06800|       13600242|     100000|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> |dIN~RC_AB      |0.0484|    0.00500|        1000070|     400000|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+
N2T-WRAP >> |dIN~RC_ABB     |0.0194|    0.00200|         400058|     100000|
N2T-WRAP >> +---------------+-----+-----------+---------------+-----------+



Interestingly,  RC_AB is taking nearly 10000 clock cycles, and further investigation showed that the expf function was taking almost half of those.


