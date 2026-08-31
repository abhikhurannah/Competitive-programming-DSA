<h2><a href="https://codeforces.com/contest/1400/problem/D" target="_blank" rel="noopener noreferrer">1400D — Zigzags</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1400D](https://codeforces.com/contest/1400/problem/D) |

## Topics
`brute force` `combinatorics` `data structures` `math` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">D. Zigzags</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a_1, a_2 \dots a_n$$$. Calculate the number of tuples $$$(i, j, k, l)$$$ such that: </p><ul> <li> $$$1 \le i  \lt  j  \lt  k  \lt  l \le n$$$; </li><li> $$$a_i = a_k$$$ and $$$a_j = a_l$$$; </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$4 \le n \le 3000$$$) — the size of the array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le n$$$) — the array $$$a$$$.</p><p>It's guaranteed that the sum of $$$n$$$ in one test doesn't exceed $$$3000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the number of described tuples.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004686017802008947" id="id0030852887682103625" class="input-output-copier">Copy</div></div><pre id="id004686017802008947">2
5
2 2 2 2 2
6
1 3 3 1 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0007979383433485188" id="id005914756816560036" class="input-output-copier">Copy</div></div><pre id="id0007979383433485188">5
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, for any four indices $$$i  \lt  j  \lt  k  \lt  l$$$ are valid, so the answer is the number of tuples.</p><p>In the second test case, there are $$$2$$$ valid tuples: </p><ul> <li> $$$(1, 2, 4, 6)$$$: $$$a_1 = a_4$$$ and $$$a_2 = a_6$$$; </li><li> $$$(1, 3, 4, 6)$$$: $$$a_1 = a_4$$$ and $$$a_3 = a_6$$$. </li></ul></div>