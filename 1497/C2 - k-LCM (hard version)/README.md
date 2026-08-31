<h2><a href="https://codeforces.com/contest/1497/problem/C2" target="_blank" rel="noopener noreferrer">1497C2 — k-LCM (hard version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1497C2](https://codeforces.com/contest/1497/problem/C2) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">C2. k-LCM (hard version)</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">It is the hard version of the problem. The only difference is that in this version $$$3 \le k \le n$$$.</span></p><p>You are given a positive integer $$$n$$$. Find $$$k$$$ positive integers $$$a_1, a_2, \ldots, a_k$$$, such that:</p><ul> <li> $$$a_1 + a_2 + \ldots + a_k = n$$$ </li><li> $$$LCM(a_1, a_2, \ldots, a_k) \le \frac{n}{2}$$$ </li></ul><p>Here $$$LCM$$$ is the <a href="https://en.wikipedia.org/wiki/Least_common_multiple">least common multiple</a> of numbers $$$a_1, a_2, \ldots, a_k$$$.</p><p>We can show that for given constraints the answer always exists.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ $$$(1 \le t \le 10^4)$$$  — the number of test cases.</p><p>The only line of each test case contains two integers $$$n$$$, $$$k$$$ ($$$3 \le n \le 10^9$$$, $$$3 \le k \le n$$$).</p><p>It is guaranteed that the sum of $$$k$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print $$$k$$$ positive integers $$$a_1, a_2, \ldots, a_k$$$, for which all conditions are satisfied.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005651107278326218" id="id005429791878175761" class="input-output-copier">Copy</div></div><pre id="id005651107278326218">2
6 4
9 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006054685092620403" id="id006209175404857582" class="input-output-copier">Copy</div></div><pre id="id006054685092620403">1 2 2 1 
1 3 3 1 1 
</pre></div></div></div>