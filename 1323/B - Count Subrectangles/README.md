<h2><a href="https://codeforces.com/contest/1323/problem/B" target="_blank" rel="noopener noreferrer">1323B — Count Subrectangles</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1323B](https://codeforces.com/contest/1323/problem/B) |

## Topics
`binary search` `greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Count Subrectangles</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ of length $$$n$$$ and array $$$b$$$ of length $$$m$$$ both consisting of only integers $$$0$$$ and $$$1$$$. Consider a matrix $$$c$$$ of size $$$n \times m$$$ formed by following rule: $$$c_{i, j} = a_i \cdot b_j$$$ (i.e. $$$a_i$$$ multiplied by $$$b_j$$$). It's easy to see that $$$c$$$ consists of only zeroes and ones too.</p><p>How many <span class="tex-font-style-it">subrectangles</span> of size (area) $$$k$$$ consisting only of ones are there in $$$c$$$?</p><p>A <span class="tex-font-style-it">subrectangle</span> is an intersection of a consecutive (subsequent) segment of rows and a consecutive (subsequent) segment of columns. I.e. consider four integers $$$x_1, x_2, y_1, y_2$$$ ($$$1 \le x_1 \le x_2 \le n$$$, $$$1 \le y_1 \le y_2 \le m$$$) a subrectangle $$$c[x_1 \dots x_2][y_1 \dots y_2]$$$ is an intersection of the rows $$$x_1, x_1+1, x_1+2, \dots, x_2$$$ and the columns $$$y_1, y_1+1, y_1+2, \dots, y_2$$$.</p><p>The size (area) of a subrectangle is the total number of cells in it.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains three integers $$$n$$$, $$$m$$$ and $$$k$$$ ($$$1 \leq n, m \leq 40\,000, 1 \leq k \leq n \cdot m$$$), length of array $$$a$$$, length of array $$$b$$$ and required size of subrectangles.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \leq a_i \leq 1$$$), elements of $$$a$$$.</p><p>The third line contains $$$m$$$ integers $$$b_1, b_2, \ldots, b_m$$$ ($$$0 \leq b_i \leq 1$$$), elements of $$$b$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output single integer — the number of subrectangles of $$$c$$$ with size (area) $$$k$$$ consisting only of ones.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005947291927769248" id="id008850515581776699" class="input-output-copier">Copy</div></div><pre id="id005947291927769248">3 3 2
1 0 1
1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0043250006529875795" id="id009564290001668013" class="input-output-copier">Copy</div></div><pre id="id0043250006529875795">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0003169715701633269" id="id0017749032122412411" class="input-output-copier">Copy</div></div><pre id="id0003169715701633269">3 5 4
1 1 1
1 1 1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0018338021310298125" id="id003632284610978034" class="input-output-copier">Copy</div></div><pre id="id0018338021310298125">14
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In first example matrix $$$c$$$ is:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/35b2bc45087e60e1115fbd2111b69f6ff53f2173.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>There are $$$4$$$ subrectangles of size $$$2$$$ consisting of only ones in it:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/cbda98d27be828f909212a98cb5025f01d5af623.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>In second example matrix $$$c$$$ is:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/a04c6c01a1c02ac4c50895091ce0e09144c3cb81.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div>