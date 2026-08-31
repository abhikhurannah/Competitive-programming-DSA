<h2><a href="https://codeforces.com/contest/1151/problem/B" target="_blank" rel="noopener noreferrer">1151B — Dima and a Bad XOR</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1151B](https://codeforces.com/contest/1151/problem/B) |

## Topics
`bitmasks` `brute force` `constructive algorithms` `dp`

---

## Problem Statement

<div class="header"><div class="title">B. Dima and a Bad XOR</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Student Dima from Kremland has a matrix $$$a$$$ of size $$$n \times m$$$ filled with non-negative integers.</p><p>He wants to select exactly one integer from each row of the matrix so that the <span class="tex-font-style-tt">bitwise exclusive OR</span> of the selected integers is strictly greater than zero. Help him!</p><p>Formally, he wants to choose an integers sequence $$$c_1, c_2, \ldots, c_n$$$ ($$$1 \leq c_j \leq m$$$) so that the inequality $$$a_{1, c_1} \oplus a_{2, c_2} \oplus \ldots \oplus a_{n, c_n}  \gt  0$$$ holds, where $$$a_{i, j}$$$ is the matrix element from the $$$i$$$-th row and the $$$j$$$-th column.</p><p>Here $$$x \oplus y$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR operation</a> of integers $$$x$$$ and $$$y$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n, m \leq 500$$$) — the number of rows and the number of columns in the matrix $$$a$$$.</p><p>Each of the next $$$n$$$ lines contains $$$m$$$ integers: the $$$j$$$-th integer in the $$$i$$$-th line is the $$$j$$$-th element of the $$$i$$$-th row of the matrix $$$a$$$, i.e. $$$a_{i, j}$$$ ($$$0 \leq a_{i, j} \leq 1023$$$). </p></div><div class="output-specification"><div class="section-title">Output</div><p>If there is no way to choose one integer from each row so that their bitwise exclusive OR is strictly greater than zero, print "<span class="tex-font-style-tt">NIE</span>".</p><p>Otherwise print "<span class="tex-font-style-tt">TAK</span>" in the first line, in the next line print $$$n$$$ integers $$$c_1, c_2, \ldots c_n$$$ ($$$1 \leq c_j \leq m$$$), so that the inequality $$$a_{1, c_1} \oplus a_{2, c_2} \oplus \ldots \oplus a_{n, c_n}  \gt  0$$$ holds. </p><p>If there is more than one possible answer, you may output any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00012308660049389464" id="id00927460144261481" class="input-output-copier">Copy</div></div><pre id="id00012308660049389464">3 2
0 0
0 0
0 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005160569736293457" id="id009471006445419882" class="input-output-copier">Copy</div></div><pre id="id005160569736293457">NIE
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008985388755979942" id="id009227195376526391" class="input-output-copier">Copy</div></div><pre id="id008985388755979942">2 3
7 7 7
7 7 10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004248210181652554" id="id00997024887633579" class="input-output-copier">Copy</div></div><pre id="id004248210181652554">TAK
1 3 
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, all the numbers in the matrix are $$$0$$$, so it is impossible to select one number in each row of the table so that their bitwise exclusive OR is strictly greater than zero.</p><p>In the second example, the selected numbers are $$$7$$$ (the first number in the first line) and $$$10$$$ (the third number in the second line), $$$7 \oplus 10 = 13$$$, $$$13$$$ is more than $$$0$$$, so the answer is found.</p></div>