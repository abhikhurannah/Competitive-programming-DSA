<h2><a href="https://codeforces.com/contest/1899/problem/C" target="_blank" rel="noopener noreferrer">1899C — Yarik and Array</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1899C](https://codeforces.com/contest/1899/problem/C) |

## Topics
`dp` `greedy` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">C. Yarik and Array</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A <span class="tex-font-style-it">subarray</span> is a continuous part of array.</p><p>Yarik recently found an array $$$a$$$ of $$$n$$$ elements and became very interested in finding the maximum sum of a <span class="tex-font-style-bf">non empty</span> subarray. However, Yarik doesn't like consecutive integers with the same parity, so the subarray he chooses must have alternating parities for adjacent elements.</p><p>For example, $$$[1, 2, 3]$$$ is acceptable, but $$$[1, 2, 4]$$$ is not, as $$$2$$$ and $$$4$$$ are both even and adjacent.</p><p>You need to help Yarik by finding the maximum sum of such a subarray.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ $$$(1 \le t \le 10^4)$$$ — number of test cases. Each test case is described as follows.</p><p>The first line of each test case contains an integer $$$n$$$ $$$(1 \le n \le 2 \cdot 10^5)$$$ — length of the array.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ $$$(-10^3 \le a_i \le 10^3)$$$ — elements of the array.</p><p>It is guaranteed that the sum of $$$n$$$ for all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the answer to the problem.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009046736076496573" id="id00652465127858177" class="input-output-copier">Copy</div></div><pre id="id009046736076496573"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2 3 4 5</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-even test-example-line-2">9 9 8 8</div><div class="test-example-line test-example-line-odd test-example-line-3">6</div><div class="test-example-line test-example-line-odd test-example-line-3">-1 4 -1 0 5 -4</div><div class="test-example-line test-example-line-even test-example-line-4">4</div><div class="test-example-line test-example-line-even test-example-line-4">-1 2 4 -3</div><div class="test-example-line test-example-line-odd test-example-line-5">1</div><div class="test-example-line test-example-line-odd test-example-line-5">-1000</div><div class="test-example-line test-example-line-even test-example-line-6">3</div><div class="test-example-line test-example-line-even test-example-line-6">101 -99 101</div><div class="test-example-line test-example-line-odd test-example-line-7">20</div><div class="test-example-line test-example-line-odd test-example-line-7">-10 5 -8 10 6 -10 7 9 -2 -6 7 2 -4 6 -1 7 -6 -7 4 1</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00446208952345851" id="id007437996452627866" class="input-output-copier">Copy</div></div><pre id="id00446208952345851">15
17
8
4
-1000
101
10
</pre></div></div></div>