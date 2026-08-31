<h2><a href="https://codeforces.com/contest/1278/problem/B" target="_blank" rel="noopener noreferrer">1278B — A and B</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1278B](https://codeforces.com/contest/1278/problem/B) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. A and B</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two integers $$$a$$$ and $$$b$$$. You can perform a sequence of operations: during the first operation you choose one of these numbers and increase it by $$$1$$$; during the second operation you choose one of these numbers and increase it by $$$2$$$, and so on. You choose the number of these operations yourself.</p><p>For example, if $$$a = 1$$$ and $$$b = 3$$$, you can perform the following sequence of three operations: </p><ol> <li> add $$$1$$$ to $$$a$$$, then $$$a = 2$$$ and $$$b = 3$$$; </li><li> add $$$2$$$ to $$$b$$$, then $$$a = 2$$$ and $$$b = 5$$$; </li><li> add $$$3$$$ to $$$a$$$, then $$$a = 5$$$ and $$$b = 5$$$. </li></ol><p>Calculate the minimum number of operations required to make $$$a$$$ and $$$b$$$ equal. </p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>The only line of each test case contains two integers $$$a$$$ and $$$b$$$ ($$$1 \le a, b \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print one integer — the minimum numbers of operations required to make $$$a$$$ and $$$b$$$ equal. </p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007688466906228659" id="id005696159661928788" class="input-output-copier">Copy</div></div><pre id="id007688466906228659">3
1 3
11 11
30 20
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0029970667740628254" id="id00765394761878991" class="input-output-copier">Copy</div></div><pre id="id0029970667740628254">3
0
4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>First test case considered in the statement.</p><p>In the second test case integers $$$a$$$ and $$$b$$$ are already equal, so you don't need to perform any operations.</p><p>In the third test case you have to apply the first, the second, the third and the fourth operation to $$$b$$$ ($$$b$$$ turns into $$$20 + 1 + 2 + 3 + 4 = 30$$$).</p></div>