<h2><a href="https://codeforces.com/contest/1092/problem/F" target="_blank" rel="noopener noreferrer">1092F — Tree with Maximum Cost</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1092F](https://codeforces.com/contest/1092/problem/F) |

## Topics
`dfs and similar` `dp` `trees`

---

## Problem Statement

<div class="header"><div class="title">F. Tree with Maximum Cost</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a tree consisting exactly of $$$n$$$ vertices. Tree is a connected undirected graph with $$$n-1$$$ edges. Each vertex $$$v$$$ of this tree has a value $$$a_v$$$ assigned to it.</p><p>Let $$$dist(x, y)$$$ be the distance between the vertices $$$x$$$ and $$$y$$$. The distance between the vertices is the number of edges on the simple path between them.</p><p>Let's define the cost of the tree as the following value: firstly, let's fix some vertex of the tree. Let it be $$$v$$$. Then the cost of the tree is $$$\sum\limits_{i = 1}^{n} dist(i, v) \cdot a_i$$$.</p><p>Your task is to calculate the <span class="tex-font-style-bf">maximum possible cost</span> of the tree if you can choose $$$v$$$ arbitrarily.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$, the number of vertices in the tree ($$$1 \le n \le 2 \cdot 10^5$$$).</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 2 \cdot 10^5$$$), where $$$a_i$$$ is the value of the vertex $$$i$$$.</p><p>Each of the next $$$n - 1$$$ lines describes an edge of the tree. Edge $$$i$$$ is denoted by two integers $$$u_i$$$ and $$$v_i$$$, the labels of vertices it connects ($$$1 \le u_i, v_i \le n$$$, $$$u_i \ne v_i$$$).</p><p>It is guaranteed that the given edges form a tree.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the <span class="tex-font-style-bf">maximum possible cost</span> of the tree if you can choose any vertex as $$$v$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0024724885937869867" id="id001685442692731901" class="input-output-copier">Copy</div></div><pre id="id0024724885937869867">8
9 4 1 7 10 1 6 5
1 2
2 3
1 4
1 5
5 6
5 7
5 8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006849577631662477" id="id00575899708467596" class="input-output-copier">Copy</div></div><pre id="id006849577631662477">121
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005626855562216521" id="id0034160761678688245" class="input-output-copier">Copy</div></div><pre id="id005626855562216521">1
1337
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002123570107936047" id="id0038669689557516485" class="input-output-copier">Copy</div></div><pre id="id002123570107936047">0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Picture corresponding to the first example: <img class="tex-graphics" src="https://espresso.codeforces.com/dc7cad99433f72447843d5976ae7724b2f256d49.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p>You can choose the vertex $$$3$$$ as a root, then the answer will be $$$2 \cdot 9 + 1 \cdot 4 + 0 \cdot 1 + 3 \cdot 7 + 3 \cdot 10 + 4 \cdot 1 + 4 \cdot 6 + 4 \cdot 5 = 18 + 4 + 0 + 21 + 30 + 4 + 24 + 20 = 121$$$.</p><p>In the second example tree consists only of one vertex so the answer is always $$$0$$$.</p></div>