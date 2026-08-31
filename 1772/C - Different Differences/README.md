<h2><a href="https://codeforces.com/contest/1772/problem/C" target="_blank" rel="noopener noreferrer">1772C — Different Differences</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1772C](https://codeforces.com/contest/1772/problem/C) |

## Topics
`constructive algorithms` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Different Differences</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>An array $$$a$$$ consisting of $$$k$$$ integers is <span class="tex-font-style-bf">strictly increasing</span> if $$$a_1  \lt  a_2  \lt  \dots  \lt  a_k$$$. For example, the arrays $$$[1, 3, 5]$$$, $$$[1, 2, 3, 4]$$$, $$$[3, 5, 6]$$$ are strictly increasing; the arrays $$$[2, 2]$$$, $$$[3, 7, 5]$$$, $$$[7, 4, 3]$$$, $$$[1, 2, 2, 3]$$$ are not.</p><p>For a strictly increasing array $$$a$$$ of $$$k$$$ elements, let's denote the <span class="tex-font-style-bf">characteristic</span> as the number of different elements in the array $$$[a_2 - a_1, a_3 - a_2, \dots, a_k - a_{k-1}]$$$. For example, the characteristic of the array $$$[1, 3, 4, 7, 8]$$$ is $$$3$$$ since the array $$$[2, 1, 3, 1]$$$ contains $$$3$$$ different elements: $$$2$$$, $$$1$$$ and $$$3$$$.</p><p>You are given two integers $$$k$$$ and $$$n$$$ ($$$k \le n$$$). Construct an increasing array of $$$k$$$ integers from $$$1$$$ to $$$n$$$ with <span class="tex-font-style-bf">maximum possible</span> characteristic.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 819$$$) — the number of test cases.</p><p>Each test case consists of one line containing two integers $$$k$$$ and $$$n$$$ ($$$2 \le k \le n \le 40$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print $$$k$$$ integers — the elements of the strictly increasing array $$$a$$$ with the maximum possible characteristic. If there are multiple answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009620745616460524" id="id008031244146088214" class="input-output-copier">Copy</div></div><pre id="id009620745616460524"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">5 9</div><div class="test-example-line test-example-line-even test-example-line-2">4 12</div><div class="test-example-line test-example-line-odd test-example-line-3">3 3</div><div class="test-example-line test-example-line-even test-example-line-4">3 4</div><div class="test-example-line test-example-line-odd test-example-line-5">4 4</div><div class="test-example-line test-example-line-even test-example-line-6">4 6</div><div class="test-example-line test-example-line-odd test-example-line-7">8 11</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007073335462531403" id="id005778011115582238" class="input-output-copier">Copy</div></div><pre id="id007073335462531403">1 3 4 7 8
2 4 7 12
1 2 3
1 3 4
1 2 3 4
2 4 5 6
1 2 3 5 6 7 8 11
</pre></div></div></div>