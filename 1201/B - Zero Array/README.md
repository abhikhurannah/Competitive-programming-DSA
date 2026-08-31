<h2><a href="https://codeforces.com/contest/1201/problem/B" target="_blank" rel="noopener noreferrer">1201B — Zero Array</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1201B](https://codeforces.com/contest/1201/problem/B) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Zero Array</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a_1, a_2, \ldots, a_n$$$.</p><p>In one operation you can choose two elements $$$a_i$$$ and $$$a_j$$$ ($$$i \ne j$$$) and decrease each of them by one.</p><p>You need to check whether it is possible to make all the elements equal to zero or not.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$2 \le n \le 10^5$$$) — the size of the array.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — the elements of the array.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print "<span class="tex-font-style-tt">YES</span>" if it is possible to make all elements zero, otherwise print "<span class="tex-font-style-tt">NO</span>".</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004746279531608798" id="id009289963135262516" class="input-output-copier">Copy</div></div><pre id="id004746279531608798">4
1 1 2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007348280381681114" id="id003972890546672583" class="input-output-copier">Copy</div></div><pre id="id007348280381681114">YES</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0049072113941055095" id="id009550439855236288" class="input-output-copier">Copy</div></div><pre id="id0049072113941055095">6
1 2 3 4 5 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0022371364023321727" id="id0008885527911537483" class="input-output-copier">Copy</div></div><pre id="id0022371364023321727">NO</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, you can make all elements equal to zero in $$$3$$$ operations: </p><ul> <li> Decrease $$$a_1$$$ and $$$a_2$$$, </li><li> Decrease $$$a_3$$$ and $$$a_4$$$, </li><li> Decrease $$$a_3$$$ and $$$a_4$$$ </li></ul><p>In the second example, one can show that it is impossible to make all elements equal to zero.</p></div>