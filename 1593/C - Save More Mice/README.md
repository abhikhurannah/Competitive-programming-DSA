<h2><a href="https://codeforces.com/contest/1593/problem/C" target="_blank" rel="noopener noreferrer">1593C — Save More Mice</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1593C](https://codeforces.com/contest/1593/problem/C) |

## Topics
`binary search` `greedy`

---

## Problem Statement

<div class="header"><div class="title">C. Save More Mice</div><div class="time-limit"><div class="property-title">time limit per test</div>4 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are one cat, $$$k$$$ mice, and one hole on a coordinate line. The cat is located at the point $$$0$$$, the hole is located at the point $$$n$$$. All mice are located between the cat and the hole: the $$$i$$$-th mouse is located at the point $$$x_i$$$ ($$$0  \lt  x_i  \lt  n$$$). At each point, many mice can be located.</p><p>In one second, the following happens. First, <span class="tex-font-style-bf">exactly one</span> mouse moves to the right by $$$1$$$. If the mouse reaches the hole, it hides (i.e. the mouse will not any more move to any point and will not be eaten by the cat). Then (<span class="tex-font-style-bf">after that</span> the mouse has finished its move) the cat moves to the right by $$$1$$$. If at the new cat's position, some mice are located, the cat eats them (they will not be able to move after that). The actions are performed until any mouse hasn't been hidden or isn't eaten.</p><p>In other words, the first move is made by a mouse. If the mouse has reached the hole, it's saved. Then the cat makes a move. The cat eats the mice located at the pointed the cat has reached (if the cat has reached the hole, it eats nobody).</p><p>Each second, you can select a mouse that will make a move. What is the maximum number of mice that can reach the hole without being eaten?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>Each test case consists of two lines. The first line contains two integers $$$n$$$ and $$$k$$$ ($$$2 \le n \le 10^9$$$, $$$1 \le k \le 4 \cdot 10^5$$$). The second line contains $$$k$$$ integers $$$x_1, x_2, \dots x_k$$$ ($$$1 \le x_i  \lt  n$$$) — the initial coordinates of the mice.</p><p>It is guaranteed that the sum of all $$$k$$$ given in the input doesn't exceed $$$4 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output on a separate line an integer $$$m$$$ ($$$m \ge 0$$$) — the maximum number of mice that can reach the hole without being eaten.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004412924041665206" id="id003065630928931642" class="input-output-copier">Copy</div></div><pre id="id004412924041665206">3
10 6
8 7 5 4 9 4
2 8
1 1 1 1 1 1 1 1
12 11
1 2 3 4 5 6 7 8 9 10 11
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00763936998040269" id="id0006215786573701454" class="input-output-copier">Copy</div></div><pre id="id00763936998040269">3
1
4
</pre></div></div></div>