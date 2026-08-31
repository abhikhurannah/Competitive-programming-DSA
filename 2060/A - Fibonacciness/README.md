<h2><a href="https://codeforces.com/contest/2060/problem/A" target="_blank" rel="noopener noreferrer">2060A — Fibonacciness</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2060A](https://codeforces.com/contest/2060/problem/A) |

## Topics
`brute force`

---

## Problem Statement

<div class="header"><div class="title">A. Fibonacciness</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There is an array of $$$5$$$ integers. Initially, you only know $$$a_1,a_2,a_4,a_5$$$. You may set $$$a_3$$$ to any positive integer, negative integer, or zero. The <span class="tex-font-style-it">Fibonacciness</span> of the array is the number of integers $$$i$$$ ($$$1 \leq i \leq 3$$$) such that $$$a_{i+2}=a_i+a_{i+1}$$$. Find the maximum <span class="tex-font-style-it">Fibonacciness</span> over all integer values of $$$a_3$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 500$$$) — the number of test cases.</p><p>The only line of each test case contains four integers $$$a_1, a_2, a_4, a_5$$$ ($$$1 \leq a_i \leq 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the maximum <span class="tex-font-style-it">Fibonacciness</span> on a new line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009191558588399048" id="id007503679011775913" class="input-output-copier">Copy</div></div><pre id="id009191558588399048"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1 3 5</div><div class="test-example-line test-example-line-even test-example-line-2">1 3 2 1</div><div class="test-example-line test-example-line-odd test-example-line-3">8 10 28 100</div><div class="test-example-line test-example-line-even test-example-line-4">100 1 100 1</div><div class="test-example-line test-example-line-odd test-example-line-5">1 100 1 100</div><div class="test-example-line test-example-line-even test-example-line-6">100 100 100 100</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0014099034478406602" id="id007118582289371442" class="input-output-copier">Copy</div></div><pre id="id0014099034478406602">3
2
2
1
1
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, we can set $$$a_3$$$ to $$$2$$$ to achieve the maximal <span class="tex-font-style-it">Fibonacciness</span> of $$$3$$$.</p><p>In the third test case, it can be shown that $$$2$$$ is the maximum <span class="tex-font-style-it">Fibonacciness</span> that can be achieved. This can be done by setting $$$a_3$$$ to $$$18$$$.</p></div>