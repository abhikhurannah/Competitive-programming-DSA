<h2><a href="https://codeforces.com/contest/1114/problem/D" target="_blank" rel="noopener noreferrer">1114D — Flood Fill</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1114D](https://codeforces.com/contest/1114/problem/D) |

## Topics
`dp`

---

## Problem Statement

<div class="header"><div class="title">D. Flood Fill</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a line of $$$n$$$ colored squares in a row, numbered from $$$1$$$ to $$$n$$$ from left to right. The $$$i$$$-th square initially has the color $$$c_i$$$.</p><p>Let's say, that two squares $$$i$$$ and $$$j$$$ belong to the same connected component if $$$c_i = c_j$$$, and $$$c_i = c_k$$$ for all $$$k$$$ satisfying $$$i  \lt  k  \lt  j$$$. In other words, all squares on the segment from $$$i$$$ to $$$j$$$ should have the same color.</p><p>For example, the line $$$[3, 3, 3]$$$ has $$$1$$$ connected component, while the line $$$[5, 2, 4, 4]$$$ has $$$3$$$ connected components.</p><p>The game "flood fill" is played on the given line as follows: </p><ul> <li> At the start of the game you pick any starting square (this is not counted as a turn). </li><li> Then, in each game turn, change the color of the connected component containing the starting square to any other color. </li></ul><p>Find the minimum number of turns needed for the entire line to be changed into a single color.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$1 \le n \le 5000$$$) — the number of squares.</p><p>The second line contains integers $$$c_1, c_2, \ldots, c_n$$$ ($$$1 \le c_i \le 5000$$$) — the initial colors of the squares.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer — the minimum number of the turns needed.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0003836549049581939" id="id00005514181594994838" class="input-output-copier">Copy</div></div><pre id="id0003836549049581939">4
5 2 2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009027690777958167" id="id0015044293953143173" class="input-output-copier">Copy</div></div><pre id="id009027690777958167">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006560647724898189" id="id007191024292624377" class="input-output-copier">Copy</div></div><pre id="id006560647724898189">8
4 5 2 2 1 3 5 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0048873463440390585" id="id003796812066046671" class="input-output-copier">Copy</div></div><pre id="id0048873463440390585">4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id000917541319271572" id="id00033895792317634954" class="input-output-copier">Copy</div></div><pre id="id000917541319271572">1
4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004961429806594919" id="id009476163900907586" class="input-output-copier">Copy</div></div><pre id="id004961429806594919">0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, a possible way to achieve an optimal answer is to pick square with index $$$2$$$ as the starting square and then play as follows:</p><ul> <li> $$$[5, 2, 2, 1]$$$ </li><li> $$$[5, 5, 5, 1]$$$ </li><li> $$$[1, 1, 1, 1]$$$ </li></ul><p>In the second example, a possible way to achieve an optimal answer is to pick square with index $$$5$$$ as the starting square and then perform recoloring into colors $$$2, 3, 5, 4$$$ in that order.</p><p>In the third example, the line already consists of one color only.</p></div>