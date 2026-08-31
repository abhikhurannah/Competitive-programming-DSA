<h2><a href="https://codeforces.com/contest/1324/problem/D" target="_blank" rel="noopener noreferrer">1324D — Pair of Topics</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1324D](https://codeforces.com/contest/1324/problem/D) |

## Topics
`binary search` `data structures` `sortings` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">D. Pair of Topics</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The next lecture in a high school requires two topics to be discussed. The $$$i$$$-th topic is interesting by $$$a_i$$$ units for the teacher and by $$$b_i$$$ units for the students.</p><p>The pair of topics $$$i$$$ and $$$j$$$ ($$$i  \lt  j$$$) is called <span class="tex-font-style-bf">good</span> if $$$a_i + a_j  \gt  b_i + b_j$$$ (i.e. it is more interesting for the teacher).</p><p>Your task is to find the number of <span class="tex-font-style-bf">good</span> pairs of topics.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10^5$$$) — the number of topics.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$), where $$$a_i$$$ is the interestingness of the $$$i$$$-th topic for the teacher.</p><p>The third line of the input contains $$$n$$$ integers $$$b_1, b_2, \dots, b_n$$$ ($$$1 \le b_i \le 10^9$$$), where $$$b_i$$$ is the interestingness of the $$$i$$$-th topic for the students.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the number of <span class="tex-font-style-bf">good</span> pairs of topic.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008496391292767719" id="id006098019972914482" class="input-output-copier">Copy</div></div><pre id="id008496391292767719">5
4 8 2 6 2
4 5 4 1 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0041954490258075006" id="id007672294402150975" class="input-output-copier">Copy</div></div><pre id="id0041954490258075006">7
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0005826651560542062" id="id0027776546856422146" class="input-output-copier">Copy</div></div><pre id="id0005826651560542062">4
1 3 2 4
1 3 2 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0014337769360286412" id="id0024782287136663617" class="input-output-copier">Copy</div></div><pre id="id0014337769360286412">0
</pre></div></div></div>