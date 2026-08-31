<h2><a href="https://codeforces.com/contest/1582/problem/F1" target="_blank" rel="noopener noreferrer">1582F1 — Korney Korneevich and XOR (easy version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1582F1](https://codeforces.com/contest/1582/problem/F1) |

## Topics
`bitmasks` `dp` `greedy`

---

## Problem Statement

<div class="header"><div class="title">F1. Korney Korneevich and XOR (easy version)</div><div class="time-limit"><div class="property-title">time limit per test</div>1.5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">This is an easier version of the problem with smaller constraints.</span></p><p>Korney Korneevich dag up an array $$$a$$$ of length $$$n$$$. Korney Korneevich has recently read about the operation <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR</a>, so he wished to experiment with it. For this purpose, he decided to find all integers $$$x \ge 0$$$ such that there exists an <span class="tex-font-style-bf">increasing</span> subsequence of the array $$$a$$$, in which the bitwise XOR of numbers is equal to $$$x$$$.</p><p>It didn't take a long time for Korney Korneevich to find all such $$$x$$$, and he wants to check his result. That's why he asked you to solve this problem!</p><p>A sequence $$$s$$$ is a subsequence of a sequence $$$b$$$ if $$$s$$$ can be obtained from $$$b$$$ by deletion of several (possibly, zero or all) elements.</p><p>A sequence $$$s_1, s_2, \ldots , s_m$$$ is called increasing if $$$s_1  \lt  s_2  \lt  \ldots  \lt  s_m$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$1 \le n \le 10^5$$$).</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \le a_i \le 500$$$) — the elements of the array $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the first line print a single integer $$$k$$$ — the number of found $$$x$$$ values.</p><p>In the second line print $$$k$$$ integers in <span class="tex-font-style-bf">increasing</span> order $$$x_1, x_2, \ldots x_k$$$ ($$$0 \le x_1  \lt  \ldots  \lt  x_k$$$) — found $$$x$$$ values.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005916193786858908" id="id0020668718561767685" class="input-output-copier">Copy</div></div><pre id="id005916193786858908">4
4 2 2 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006558642184645052" id="id002313594570501819" class="input-output-copier">Copy</div></div><pre id="id006558642184645052">4
0 2 4 6 
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0028127442686446513" id="id00695126183354009" class="input-output-copier">Copy</div></div><pre id="id0028127442686446513">8
1 0 1 7 12 5 3 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003818172770942776" id="id0037401868638652513" class="input-output-copier">Copy</div></div><pre id="id003818172770942776">12
0 1 2 3 4 5 6 7 10 11 12 13 
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case:</p><ul> <li> To get value $$$x = 0$$$ it is possible to choose and empty subsequence </li><li> To get value $$$x = 2$$$ it is possible to choose a subsequence $$$[2]$$$ </li><li> To get value $$$x = 4$$$ it is possible to choose a subsequence $$$[4]$$$ </li><li> To get value $$$x = 6$$$ it is possible to choose a subsequence $$$[2, 4]$$$ </li></ul></div>