<h2><a href="https://codeforces.com/contest/1801/problem/A" target="_blank" rel="noopener noreferrer">1801A — The Very Beautiful Blanket</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1801A](https://codeforces.com/contest/1801/problem/A) |

## Topics
`bitmasks` `constructive algorithms`

---

## Problem Statement

<div class="header"><div class="title">A. The Very Beautiful Blanket</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Kirill wants to weave the <span class="tex-font-style-it">very beautiful</span> blanket consisting of $$$n \times m$$$ of the same size square patches of some colors. He matched some non-negative integer to each color. Thus, in our problem, the blanket can be considered a $$$B$$$ matrix of size $$$n \times m$$$ consisting of non-negative integers.</p><p>Kirill considers that the blanket is <span class="tex-font-style-it">very beautiful</span>, if for each submatrix $$$A$$$ of size $$$4 \times 4$$$ of the matrix $$$B$$$ is true:</p><ul><li> $$$A_{11} \oplus A_{12} \oplus A_{21} \oplus A_{22} = A_{33} \oplus A_{34} \oplus A_{43} \oplus A_{44},$$$</li><li> $$$A_{13} \oplus A_{14} \oplus A_{23} \oplus A_{24} = A_{31} \oplus A_{32} \oplus A_{41} \oplus A_{42},$$$</li></ul><p>where $$$\oplus$$$ means <a href="https://en.wikipedia.org/wiki/Exclusive_or">bitwise exclusive OR</a></p><p>Kirill asks you to help her weave a <span class="tex-font-style-it">very beautiful</span> blanket, and as colorful as possible!</p><p>He gives you two integers $$$n$$$ and $$$m$$$. </p><p>Your task is to generate a matrix $$$B$$$ of size $$$n \times m$$$, which corresponds to a <span class="tex-font-style-it">very beautiful</span> blanket and in which the number of different numbers maximized.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input data contains one integer number $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>The single line of each test case contains two integers $$$n$$$ and $$$m$$$ $$$(4 \le n, \, m \le 200)$$$ — the size of matrix $$$B$$$.</p><p>It is guaranteed that the sum of $$$n \cdot m$$$ does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, in first line output one integer $$$cnt$$$ $$$(1 \le cnt \le n \cdot m)$$$ — the maximum number of different numbers in the matrix.</p><p>Then output the matrix $$$B$$$ $$$(0 \le B_{ij}  \lt  2^{63})$$$ of size $$$n \times m$$$. If there are several correct matrices, it is allowed to output any one.</p><p>It can be shown that if there exists a matrix with an optimal number of distinct numbers, then there exists among suitable matrices such a $$$B$$$ that $$$(0 \le B_{ij}  \lt  2^{63})$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005945169059829656" id="id00704869950491829" class="input-output-copier">Copy</div></div><pre id="id005945169059829656"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">5 5</div><div class="test-example-line test-example-line-even test-example-line-2">4 4</div><div class="test-example-line test-example-line-odd test-example-line-3">4 6</div><div class="test-example-line test-example-line-even test-example-line-4">6 6</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0033714977143968894" id="id008333570434825689" class="input-output-copier">Copy</div></div><pre id="id0033714977143968894">25
9740 1549 9744 1553 9748
1550 1551 1554 1555 1558
10252 2061 10256 2065 10260
2062 2063 2066 2067 2070
10764 2573 10768 2577 10772
16
3108 3109 3112 3113
3110 3111 3114 3115
3620 3621 3624 3625
3622 3623 3626 3627
24
548 549 552 553 556 557
550 551 554 555 558 559
1060 1061 1064 1065 1068 1069
1062 1063 1066 1067 1070 1071
36
25800 25801 25804 25805 25808 25809
25802 4294993099 25806 4294993103 25810 4294993107
26312 26313 26316 26317 26320 26321
26314 4294993611 26318 4294993615 26322 4294993619
26824 26825 26828 26829 26832 26833
26826 4294994123 26830 4294994127 26834 4294994131
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, there is only 4 submatrix of size $$$4 \times 4$$$. Consider a submatrix whose upper-left corner coincides with the upper-left corner of the matrix $$$B$$$:</p><p>$$$ \left[ {\begin{array}{cccc} 9740 & 1549 & 9744 & 1553 \\ 1550 & 1551 & 1554 & 1555 \\ 10252 & 2061 & 10256 & 2065 \\ 2062 & 2063 & 2066 & 2067 \\ \end{array} } \right] $$$</p><p>$$$9740 \oplus 1549 \oplus 1550 \oplus 1551$$$ $$$=$$$ $$$10256 \oplus 2065 \oplus 2066 \oplus 2067$$$ $$$=$$$ $$$8192$$$;</p><p>$$$10252 \oplus 2061 \oplus 2062 \oplus 2063$$$ $$$=$$$ $$$9744 \oplus 1553 \oplus 1554 \oplus 1555$$$ $$$=$$$ $$$8192$$$.</p><p>So, chosen submatrix fits the condition. Similarly, you can make sure that the other three submatrices also fit the condition.</p></div>