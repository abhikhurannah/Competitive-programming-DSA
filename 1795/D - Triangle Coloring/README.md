<h2><a href="https://codeforces.com/contest/1795/problem/D" target="_blank" rel="noopener noreferrer">1795D — Triangle Coloring</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1795D](https://codeforces.com/contest/1795/problem/D) |

## Topics
`combinatorics` `math`

---

## Problem Statement

<div class="header"><div class="title">D. Triangle Coloring</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an undirected graph consisting of $$$n$$$ vertices and $$$n$$$ edges, where $$$n$$$ is divisible by $$$6$$$. Each edge has a weight, which is a positive (greater than zero) integer.</p><p>The graph has the following structure: it is split into $$$\frac{n}{3}$$$ triples of vertices, the first triple consisting of vertices $$$1, 2, 3$$$, the second triple consisting of vertices $$$4, 5, 6$$$, and so on. Every pair of vertices from the same triple is connected by an edge. There are no edges between vertices from different triples.</p><p>You have to paint the vertices of this graph into two colors, red and blue. Each vertex should have exactly one color, there should be exactly $$$\frac{n}{2}$$$ red vertices and $$$\frac{n}{2}$$$ blue vertices. The coloring is called valid if it meets these constraints.</p><p>The weight of the coloring is the sum of weights of edges connecting two vertices with different colors.</p><p>Let $$$W$$$ be the maximum possible weight of a valid coloring. Calculate the number of valid colorings with weight $$$W$$$, and print it modulo $$$998244353$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$6 \le n \le 3 \cdot 10^5$$$, $$$n$$$ is divisible by $$$6$$$).</p><p>The second line contains $$$n$$$ integers $$$w_1, w_2, \dots, w_n$$$ ($$$1 \le w_i \le 1000$$$) — the weights of the edges. Edge $$$1$$$ connects vertices $$$1$$$ and $$$2$$$, edge $$$2$$$ connects vertices $$$1$$$ and $$$3$$$, edge $$$3$$$ connects vertices $$$2$$$ and $$$3$$$, edge $$$4$$$ connects vertices $$$4$$$ and $$$5$$$, edge $$$5$$$ connects vertices $$$4$$$ and $$$6$$$, edge $$$6$$$ connects vertices $$$5$$$ and $$$6$$$, and so on.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the number of valid colorings with maximum possible weight, taken modulo $$$998244353$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009808919738750987" id="id002471294736336619" class="input-output-copier">Copy</div></div><pre id="id0009808919738750987">12
1 3 3 7 8 5 2 2 2 2 4 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0032702366773827396" id="id006130737535450804" class="input-output-copier">Copy</div></div><pre id="id0032702366773827396">36
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006415509808888743" id="id006954613681745154" class="input-output-copier">Copy</div></div><pre id="id006415509808888743">6
4 2 6 6 6 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007226372554296033" id="id005429306161368624" class="input-output-copier">Copy</div></div><pre id="id007226372554296033">2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The following picture describes the graph from the first example test.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/e6e4005b0df87f33b3aafa20244614c906413b24.png" style="zoom: 100.0%;max-width: 100.0%;max-height: 100.0%;"> </center><p>The maximum possible weight of a valid coloring of this graph is $$$31$$$.</p></div>