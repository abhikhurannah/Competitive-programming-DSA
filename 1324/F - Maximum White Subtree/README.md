<h2><a href="https://codeforces.com/contest/1324/problem/F" target="_blank" rel="noopener noreferrer">1324F — Maximum White Subtree</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1324F](https://codeforces.com/contest/1324/problem/F) |

## Topics
`dfs and similar` `dp` `graphs` `trees`

---

## Problem Statement

<div class="header"><div class="title">F. Maximum White Subtree</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a tree consisting of $$$n$$$ vertices. A tree is a connected undirected graph with $$$n-1$$$ edges. Each vertex $$$v$$$ of this tree has a color assigned to it ($$$a_v = 1$$$ if the vertex $$$v$$$ is white and $$$0$$$ if the vertex $$$v$$$ is black).</p><p>You have to solve the following problem for each vertex $$$v$$$: what is the maximum difference between the number of white and the number of black vertices you can obtain if you choose some subtree of the given tree that <span class="tex-font-style-bf">contains</span> the vertex $$$v$$$? The subtree of the tree is the connected subgraph of the given tree. More formally, if you choose the subtree that contains $$$cnt_w$$$ white vertices and $$$cnt_b$$$ black vertices, you have to maximize $$$cnt_w - cnt_b$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$) — the number of vertices in the tree.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$0 \le a_i \le 1$$$), where $$$a_i$$$ is the color of the $$$i$$$-th vertex.</p><p>Each of the next $$$n-1$$$ lines describes an edge of the tree. Edge $$$i$$$ is denoted by two integers $$$u_i$$$ and $$$v_i$$$, the labels of vertices it connects $$$(1 \le u_i, v_i \le n, u_i \ne v_i$$$).</p><p>It is guaranteed that the given edges form a tree.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$n$$$ integers $$$res_1, res_2, \dots, res_n$$$, where $$$res_i$$$ is the maximum possible difference between the number of white and black vertices in some subtree that contains the vertex $$$i$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006315097730523184" id="id008418677822896937" class="input-output-copier">Copy</div></div><pre id="id006315097730523184">9
0 1 1 1 0 0 0 0 1
1 2
1 3
3 4
3 5
2 6
4 7
6 8
5 9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0027216262533302626" id="id0012073706105872584" class="input-output-copier">Copy</div></div><pre id="id0027216262533302626">2 2 2 2 2 1 1 0 2 
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016693357648964346" id="id00923944091147321" class="input-output-copier">Copy</div></div><pre id="id0016693357648964346">4
0 0 1 0
1 2
1 3
1 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004213173958456691" id="id005463123058324307" class="input-output-copier">Copy</div></div><pre id="id004213173958456691">0 -1 1 -1 
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first example is shown below:</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/c9bf2c6663342bfd7b533a049ca2ba27b9f4b4df.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p>The black vertices have bold borders.</p><p>In the second example, the best subtree for vertices $$$2, 3$$$ and $$$4$$$ are vertices $$$2, 3$$$ and $$$4$$$ correspondingly. And the best subtree for the vertex $$$1$$$ is the subtree consisting of vertices $$$1$$$ and $$$3$$$.</p></div>