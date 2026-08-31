<h2><a href="https://codeforces.com/contest/1907/problem/E" target="_blank" rel="noopener noreferrer">1907E — Good Triples</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1907E](https://codeforces.com/contest/1907/problem/E) |

## Topics
`brute force` `combinatorics` `number theory`

---

## Problem Statement

<div class="header"><div class="title">E. Good Triples</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given a non-negative integer number $$$n$$$ ($$$n \ge 0$$$). Let's say a triple of non-negative integers $$$(a, b, c)$$$ is good if $$$a + b + c = n$$$, and $$$digsum(a) + digsum(b) + digsum(c) = digsum(n)$$$, where $$$digsum(x)$$$ is the sum of digits of number $$$x$$$.</p><p>For example, if $$$n = 26$$$, then the pair $$$(4, 12, 10)$$$ is good, because $$$4 + 12 + 10 = 26$$$, and $$$(4) + (1 + 2) + (1 + 0) = (2 + 6)$$$.</p><p>Your task is to find the number of good triples for the given number $$$n$$$. The order of the numbers in a triple matters. For example, the triples $$$(4, 12, 10)$$$ and $$$(10, 12, 4)$$$ are two different triples.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Descriptions of test cases follow.</p><p>The first and only line of the test case contains one integer $$$n$$$ ($$$0 \le n \le 10^7$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output one integer, the number of good triples for the given integer $$$n$$$. Order of integers in a triple matters.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0004311944063071482" id="id007417532684375258" class="input-output-copier">Copy</div></div><pre id="id0004311944063071482"><div class="test-example-line test-example-line-even test-example-line-0">12</div><div class="test-example-line test-example-line-odd test-example-line-1">11</div><div class="test-example-line test-example-line-even test-example-line-2">0</div><div class="test-example-line test-example-line-odd test-example-line-3">1</div><div class="test-example-line test-example-line-even test-example-line-4">2</div><div class="test-example-line test-example-line-odd test-example-line-5">3</div><div class="test-example-line test-example-line-even test-example-line-6">4</div><div class="test-example-line test-example-line-odd test-example-line-7">5</div><div class="test-example-line test-example-line-even test-example-line-8">3141</div><div class="test-example-line test-example-line-odd test-example-line-9">999</div><div class="test-example-line test-example-line-even test-example-line-10">2718</div><div class="test-example-line test-example-line-odd test-example-line-11">9999999</div><div class="test-example-line test-example-line-even test-example-line-12">10000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00614930466730285" id="id0020457004170501236" class="input-output-copier">Copy</div></div><pre id="id00614930466730285">9
1
3
6
10
15
21
1350
166375
29160
1522435234375
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the good triples are $$$(0, 0, 11)$$$, $$$(0, 1, 10)$$$, $$$(0, 10, 1)$$$, $$$(0, 11, 0)$$$, $$$(1, 0, 10)$$$, $$$(1, 10, 0)$$$, $$$(10, 0, 1)$$$, $$$(10, 1, 0)$$$, $$$(11, 0, 0)$$$.</p><p>In the second example, there is only one good triple $$$(0, 0, 0)$$$.</p></div>