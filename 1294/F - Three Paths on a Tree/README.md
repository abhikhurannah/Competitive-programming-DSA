<h2><a href="https://codeforces.com/contest/1294/problem/F" target="_blank" rel="noopener noreferrer">1294F — Three Paths on a Tree</a></h2>

| | |
|---|---|
| **Difficulty** | 2000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1294F](https://codeforces.com/contest/1294/problem/F) |

## Topics
`dfs and similar` `dp` `greedy` `trees`

---

## Problem Statement

<div class="header"><div class="title">F. Three Paths on a Tree</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an unweighted tree with $$$n$$$ vertices. Recall that a tree is a connected undirected graph without cycles.</p><p>Your task is to choose <span class="tex-font-style-bf">three distinct</span> vertices $$$a, b, c$$$ on this tree such that the number of edges which belong to <span class="tex-font-style-bf">at least</span> one of the simple paths between $$$a$$$ and $$$b$$$, $$$b$$$ and $$$c$$$, or $$$a$$$ and $$$c$$$ is the maximum possible. See the notes section for a better understanding.</p><p>The simple path is the path that visits each vertex at most once.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer number $$$n$$$ ($$$3 \le n \le 2 \cdot 10^5$$$) — the number of vertices in the tree. </p><p>Next $$$n - 1$$$ lines describe the edges of the tree in form $$$a_i, b_i$$$ ($$$1 \le a_i$$$, $$$b_i \le n$$$, $$$a_i \ne b_i$$$). It is guaranteed that given graph is a tree.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In the first line print one integer $$$res$$$ — the maximum number of edges which belong to <span class="tex-font-style-bf">at least</span> one of the simple paths between $$$a$$$ and $$$b$$$, $$$b$$$ and $$$c$$$, or $$$a$$$ and $$$c$$$.</p><p>In the second line print three integers $$$a, b, c$$$ such that $$$1 \le a, b, c \le n$$$ and $$$a \ne, b \ne c, a \ne c$$$.</p><p>If there are several answers, you can print any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007673083585153933" id="id008448418610286351" class="input-output-copier">Copy</div></div><pre id="id007673083585153933">8
1 2
2 3
3 4
4 5
4 6
3 7
3 8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002361657711541557" id="id007006905378019115" class="input-output-copier">Copy</div></div><pre id="id002361657711541557">5
1 8 6
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The picture corresponding to the first example (and <span class="tex-font-style-bf">another one correct answer</span>):</p><p><img class="tex-graphics" src="https://espresso.codeforces.com/b2da45545f804a6446ef485575565b90d1955674.png" style="max-width: 100.0%;max-height: 100.0%;"></p><p>If you choose vertices $$$1, 5, 6$$$ then the path between $$$1$$$ and $$$5$$$ consists of edges $$$(1, 2), (2, 3), (3, 4), (4, 5)$$$, the path between $$$1$$$ and $$$6$$$ consists of edges $$$(1, 2), (2, 3), (3, 4), (4, 6)$$$ and the path between $$$5$$$ and $$$6$$$ consists of edges $$$(4, 5), (4, 6)$$$. The union of these paths is $$$(1, 2), (2, 3), (3, 4), (4, 5), (4, 6)$$$ so the answer is $$$5$$$. It can be shown that there is no better answer.</p></div>