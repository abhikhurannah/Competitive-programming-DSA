<h2><a href="https://codeforces.com/contest/1648/problem/A" target="_blank" rel="noopener noreferrer">1648A — Weird Sum</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1648A](https://codeforces.com/contest/1648/problem/A) |

## Topics
`combinatorics` `data structures` `geometry` `math` `matrices` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Weird Sum</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Egor has a table of size $$$n \times m$$$, with lines numbered from $$$1$$$ to $$$n$$$ and columns numbered from $$$1$$$ to $$$m$$$. Each cell has a color that can be presented as an integer from $$$1$$$ to $$$10^5$$$.</p><p>Let us denote the cell that lies in the intersection of the $$$r$$$-th row and the $$$c$$$-th column as $$$(r, c)$$$. We define the <span class="tex-font-style-underline">manhattan distance</span> between two cells $$$(r_1, c_1)$$$ and $$$(r_2, c_2)$$$ as the length of a shortest path between them where each consecutive cells in the path must have a common side. The path can go through cells of any color. For example, in the table $$$3 \times 4$$$ the manhattan distance between $$$(1, 2)$$$ and $$$(3, 3)$$$ is $$$3$$$, one of the shortest paths is the following: $$$(1, 2) \to (2, 2) \to (2, 3) \to (3, 3)$$$. </p><p>Egor decided to calculate the sum of manhattan distances between each pair of cells of the same color. Help him to calculate this sum.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \leq n \le m$$$, $$$n \cdot m \leq 100\,000$$$) — number of rows and columns in the table.</p><p>Each of next $$$n$$$ lines describes a row of the table. The $$$i$$$-th line contains $$$m$$$ integers $$$c_{i1}, c_{i2}, \ldots, c_{im}$$$ ($$$1 \le c_{ij} \le 100\,000$$$) — colors of cells in the $$$i$$$-th row.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the the sum of manhattan distances between each pair of cells of the same color.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004547971190526384" id="id0039236435577775364" class="input-output-copier">Copy</div></div><pre id="id004547971190526384">2 3
1 2 3
3 2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0018691712839326013" id="id006460074998625775" class="input-output-copier">Copy</div></div><pre id="id0018691712839326013">7
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001260260902379532" id="id002868832884289291" class="input-output-copier">Copy</div></div><pre id="id001260260902379532">3 4
1 1 2 2
2 1 1 2
2 2 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006296394477104809" id="id00885099046107059" class="input-output-copier">Copy</div></div><pre id="id006296394477104809">76
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007316559692889959" id="id009095492256327867" class="input-output-copier">Copy</div></div><pre id="id007316559692889959">4 4
1 1 2 3
2 1 1 2
3 1 2 1
1 1 2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000452927697256198" id="id00038441282092957274" class="input-output-copier">Copy</div></div><pre id="id000452927697256198">129
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample there are three pairs of cells of same color: in cells $$$(1, 1)$$$ and $$$(2, 3)$$$, in cells $$$(1, 2)$$$ and $$$(2, 2)$$$, in cells $$$(1, 3)$$$ and $$$(2, 1)$$$. The manhattan distances between them are $$$3$$$, $$$1$$$ and $$$3$$$, the sum is $$$7$$$.</p></div>