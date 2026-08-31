<h2><a href="https://codeforces.com/contest/1416/problem/A" target="_blank" rel="noopener noreferrer">1416A — k-Amazing Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1416A](https://codeforces.com/contest/1416/problem/A) |

## Topics
`binary search` `data structures` `implementation` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">A. k-Amazing Numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ consisting of $$$n$$$ integers numbered from $$$1$$$ to $$$n$$$.</p><p>Let's define the $$$k$$$-amazing number of the array as the minimum number that occurs in all of the subsegments of the array having length $$$k$$$ (recall that a subsegment of $$$a$$$ of length $$$k$$$ is a contiguous part of $$$a$$$ containing exactly $$$k$$$ elements). If there is no integer occuring in all subsegments of length $$$k$$$ for some value of $$$k$$$, then the $$$k$$$-amazing number is $$$-1$$$.</p><p>For each $$$k$$$ from $$$1$$$ to $$$n$$$ calculate the $$$k$$$-amazing number of the array $$$a$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The first line of each test case contains one integer $$$n$$$ ($$$1 \le n \le 3 \cdot 10^5$$$) — the number of elements in the array. The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le n$$$) — the elements of the array. </p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$3 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print $$$n$$$ integers, where the $$$i$$$-th integer is equal to the $$$i$$$-amazing number of the array.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0007678495707147126" id="id006456796055583265" class="input-output-copier">Copy</div></div><pre id="id0007678495707147126">3
5
1 2 3 4 5
5
4 4 4 4 2
6
1 3 1 5 3 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004745520347792348" id="id007362131850539103" class="input-output-copier">Copy</div></div><pre id="id004745520347792348">-1 -1 3 2 1 
-1 4 4 4 2 
-1 -1 1 1 1 1 
</pre></div></div></div>