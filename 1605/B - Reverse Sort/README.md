<h2><a href="https://codeforces.com/contest/1605/problem/B" target="_blank" rel="noopener noreferrer">1605B — Reverse Sort</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1605B](https://codeforces.com/contest/1605/problem/B) |

## Topics
`greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Reverse Sort</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Ashish has a binary string $$$s$$$ of length $$$n$$$ that he wants to sort in non-decreasing order.</p><p>He can perform the following operation: </p><ol> <li> Choose a subsequence of any length such that its elements are in non-increasing order. Formally, choose any $$$k$$$ such that $$$1 \leq k \leq n$$$ and any sequence of $$$k$$$ indices $$$1 \le i_1 \lt i_2 \lt \ldots \lt i_k \le n$$$ such that $$$s_{i_1} \ge s_{i_2} \ge \ldots \ge s_{i_k}$$$. </li><li> Reverse this subsequence in-place. Formally, swap $$$s_{i_1}$$$ with $$$s_{i_k}$$$, swap $$$s_{i_2}$$$ with $$$s_{i_{k-1}}$$$, $$$\ldots$$$ and swap $$$s_{i_{\lfloor k/2 \rfloor}}$$$ with $$$s_{i_{\lceil k/2 \rceil + 1}}$$$ (Here $$$\lfloor x \rfloor$$$ denotes the largest integer not exceeding $$$x$$$, and $$$\lceil x \rceil$$$ denotes the smallest integer not less than $$$x$$$) </li></ol><p>Find the minimum number of operations required to sort the string in non-decreasing order. It can be proven that it is always possible to sort the given binary string in at most $$$n$$$ operations.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ $$$(1 \le t \le 1000)$$$  — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains an integer $$$n$$$ $$$(1 \le n \le 1000)$$$  — the length of the binary string $$$s$$$.</p><p>The second line of each test case contains a binary string $$$s$$$ of length $$$n$$$ containing only $$$0$$$s and $$$1$$$s.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$1000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output the following:</p><ul> <li> The <span class="tex-font-style-bf">minimum</span> number of operations $$$m$$$ in the first line ($$$0 \le m \le n$$$). </li><li> Each of the following $$$m$$$ lines should be of the form: $$$k$$$ $$$i_1$$$ $$$i_2$$$ ... $$$i_{k}$$$, where $$$k$$$ is the length and $$$i_1 \lt i_2 \lt ... \lt i_{k}$$$ are the indices of the chosen subsequence. For them the conditions from the statement must hold. </li></ul></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008992640849672237" id="id000646385731774709" class="input-output-copier">Copy</div></div><pre id="id008992640849672237">3
7
0011111
5
10100
6
001000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001398082057037049" id="id008942288708564672" class="input-output-copier">Copy</div></div><pre id="id001398082057037049">0
1
4 1 3 4 5 
1
3 3 5 6 
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the binary string is already sorted in non-decreasing order.</p><p>In the second test case, we can perform the following operation: </p><ul> <li> $$$k = 4:$$$ choose the indices $$$\{1, 3, 4, 5\}$$$<p>$$$\underline{1}$$$ $$$0$$$ $$$\underline{1}$$$ $$$\underline{0}$$$ $$$\underline{0}$$$ $$$\rightarrow $$$ $$$\underline{0}$$$ $$$0$$$ $$$\underline{0}$$$ $$$\underline{1}$$$ $$$\underline{1}$$$ </p></li></ul><p>In the third test case, we can perform the following operation:</p><ul> <li> $$$k = 3:$$$ choose the indices $$$\{3, 5, 6\}$$$<p>$$$0$$$ $$$0$$$ $$$\underline{1}$$$ $$$0$$$ $$$\underline{0}$$$ $$$\underline{0}$$$ $$$\rightarrow $$$ $$$0$$$ $$$0$$$ $$$\underline{0}$$$ $$$0$$$ $$$\underline{0}$$$ $$$\underline{1}$$$</p></li></ul></div>