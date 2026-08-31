<h2><a href="https://codeforces.com/contest/1765/problem/N" target="_blank" rel="noopener noreferrer">1765N — Number Reduction</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1765N](https://codeforces.com/contest/1765/problem/N) |

## Topics
`greedy`

---

## Problem Statement

<div class="header"><div class="title">N. Number Reduction</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a positive integer $$$x$$$.</p><p>You can apply the following operation to the number: remove one occurrence of any digit in such a way that the resulting number <span class="tex-font-style-bf">does not contain any leading zeroes</span> and <span class="tex-font-style-bf">is still a positive integer</span>. For example, $$$10142$$$ can be converted to $$$1142$$$, $$$1042$$$, $$$1012$$$ or $$$1014$$$ (note that $$$0142$$$ is not a valid outcome); $$$10$$$ can be converted to $$$1$$$ (but not to $$$0$$$ since it is not positive).</p><p>Your task is to find the minimum positive integer that you can obtain from $$$x$$$ if you can apply the aforementioned operation exactly $$$k$$$ times.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^5$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$x$$$ ($$$1 \le x  \lt  10^{500000}$$$).</p><p>The second line contains a single integer $$$k$$$ ($$$0 \le k  \lt  |x|$$$), where $$$|x|$$$ is the length of the number $$$x$$$.</p><p>The sum of $$$|x|$$$ over all test cases does not exceed $$$5 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the minimum positive number that you can obtain from $$$x$$$ if you can apply the operation exactly $$$k$$$ times.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0031418810905694716" id="id004354168031159483" class="input-output-copier">Copy</div></div><pre id="id0031418810905694716"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">10000</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-even test-example-line-2">1337</div><div class="test-example-line test-example-line-even test-example-line-2">0</div><div class="test-example-line test-example-line-odd test-example-line-3">987654321</div><div class="test-example-line test-example-line-odd test-example-line-3">6</div><div class="test-example-line test-example-line-even test-example-line-4">66837494128</div><div class="test-example-line test-example-line-even test-example-line-4">5</div><div class="test-example-line test-example-line-odd test-example-line-5">7808652</div><div class="test-example-line test-example-line-odd test-example-line-5">3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0010695924601586893" id="id005747590572470661" class="input-output-copier">Copy</div></div><pre id="id0010695924601586893">1
1337
321
344128
7052
</pre></div></div></div>