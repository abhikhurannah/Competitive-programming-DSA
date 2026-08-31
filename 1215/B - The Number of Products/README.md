<h2><a href="https://codeforces.com/contest/1215/problem/B" target="_blank" rel="noopener noreferrer">1215B — The Number of Products</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1215B](https://codeforces.com/contest/1215/problem/B) |

## Topics
`combinatorics` `dp` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. The Number of Products</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a sequence $$$a_1, a_2, \dots, a_n$$$ consisting of $$$n$$$ non-zero integers (i.e. $$$a_i \ne 0$$$). </p><p>You have to calculate two following values:</p><ol> <li> the number of pairs of indices $$$(l, r)$$$ $$$(l \le r)$$$ such that $$$a_l \cdot a_{l + 1} \dots a_{r - 1} \cdot a_r$$$ is negative; </li><li> the number of pairs of indices $$$(l, r)$$$ $$$(l \le r)$$$ such that $$$a_l \cdot a_{l + 1} \dots a_{r - 1} \cdot a_r$$$ is positive; </li></ol></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ $$$(1 \le n \le 2 \cdot 10^{5})$$$ — the number of elements in the sequence.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ $$$(-10^{9} \le a_i \le 10^{9}; a_i \neq 0)$$$ — the elements of the sequence.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two integers — the number of subsegments with negative product and the number of subsegments with positive product, respectively.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00855585808690434" id="id005070924042575397" class="input-output-copier">Copy</div></div><pre id="id00855585808690434">5
5 -3 3 -1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006774071858198983" id="id003969570795341647" class="input-output-copier">Copy</div></div><pre id="id006774071858198983">8 7
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005729136536456001" id="id008293039052736237" class="input-output-copier">Copy</div></div><pre id="id005729136536456001">10
4 2 -4 3 1 2 -4 3 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003224859402260647" id="id0011750845043900637" class="input-output-copier">Copy</div></div><pre id="id003224859402260647">28 27
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006518219290716479" id="id0038651969042673295" class="input-output-copier">Copy</div></div><pre id="id006518219290716479">5
-1 -2 -3 -4 -5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0032049905998413175" id="id00173441042680058" class="input-output-copier">Copy</div></div><pre id="id0032049905998413175">9 6
</pre></div></div></div>