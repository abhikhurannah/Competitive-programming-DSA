<h2><a href="https://codeforces.com/contest/1788/problem/B" target="_blank" rel="noopener noreferrer">1788B — Sum of Two Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1788B](https://codeforces.com/contest/1788/problem/B) |

## Topics
`constructive algorithms` `greedy` `implementation` `math` `probabilities`

---

## Problem Statement

<div class="header"><div class="title">B. Sum of Two Numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The sum of digits of a non-negative integer $$$a$$$ is the result of summing up its digits together when written in the decimal system. For example, the sum of digits of $$$123$$$ is $$$6$$$ and the sum of digits of $$$10$$$ is $$$1$$$. In a formal way, the sum of digits of $$$\displaystyle a=\sum_{i=0}^{\infty} a_i \cdot 10^i$$$, where $$$0 \leq a_i \leq 9$$$, is defined as $$$\displaystyle\sum_{i=0}^{\infty}{a_i}$$$.</p><p>Given an integer $$$n$$$, find two non-negative integers $$$x$$$ and $$$y$$$ which satisfy the following conditions.</p><ul> <li> $$$x+y=n$$$, and </li><li> the sum of digits of $$$x$$$ and the sum of digits of $$$y$$$ differ by at most $$$1$$$. </li></ul><p>It can be shown that such $$$x$$$ and $$$y$$$ always exist.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10\,000$$$). </p><p>Each test case consists of a single integer $$$n$$$ ($$$1 \leq n \leq 10^9$$$)</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print two integers $$$x$$$ and $$$y$$$.</p><p>If there are multiple answers, print any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006993251531042616" id="id0012027942565263172" class="input-output-copier">Copy</div></div><pre id="id006993251531042616">5
1
161
67
1206
19
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0011258689804165811" id="id009204034761178933" class="input-output-copier">Copy</div></div><pre id="id0011258689804165811">1 0
67 94
60 7
1138 68
14 5</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the second test case, the sum of digits of $$$67$$$ and the sum of digits of $$$94$$$ are both $$$13$$$.</p><p>In the third test case, the sum of digits of $$$60$$$ is $$$6$$$, and the sum of digits of $$$7$$$ is $$$7$$$.</p></div>