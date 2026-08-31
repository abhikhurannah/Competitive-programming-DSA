<h2><a href="https://codeforces.com/contest/1288/problem/C" target="_blank" rel="noopener noreferrer">1288C — Two Arrays</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1288C](https://codeforces.com/contest/1288/problem/C) |

## Topics
`combinatorics` `dp`

---

## Problem Statement

<div class="header"><div class="title">C. Two Arrays</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two integers $$$n$$$ and $$$m$$$. Calculate the number of pairs of arrays $$$(a, b)$$$ such that:</p><ul> <li> the length of both arrays is equal to $$$m$$$; </li><li> each element of each array is an integer between $$$1$$$ and $$$n$$$ (inclusive); </li><li> $$$a_i \le b_i$$$ for any index $$$i$$$ from $$$1$$$ to $$$m$$$; </li><li> array $$$a$$$ is sorted in non-descending order; </li><li> array $$$b$$$ is sorted in non-ascending order. </li></ul><p>As the result can be very large, you should print it modulo $$$10^9+7$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains two integers $$$n$$$ and $$$m$$$ ($$$1 \le n \le 1000$$$, $$$1 \le m \le 10$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer – the number of arrays $$$a$$$ and $$$b$$$ satisfying the conditions described above modulo $$$10^9+7$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004851462386543477" id="id008995760880707908" class="input-output-copier">Copy</div></div><pre id="id004851462386543477">2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0006356427890325578" id="id008640071863249266" class="input-output-copier">Copy</div></div><pre id="id0006356427890325578">5
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0024412792102561065" id="id007848276348062787" class="input-output-copier">Copy</div></div><pre id="id0024412792102561065">10 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006570893993845474" id="id00248292772447693" class="input-output-copier">Copy</div></div><pre id="id006570893993845474">55
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001089745389332818" id="id001292187813524066" class="input-output-copier">Copy</div></div><pre id="id001089745389332818">723 9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005889703684173854" id="id0013248540152863608" class="input-output-copier">Copy</div></div><pre id="id005889703684173854">157557417
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test there are $$$5$$$ suitable arrays: </p><ul> <li> $$$a = [1, 1], b = [2, 2]$$$; </li><li> $$$a = [1, 2], b = [2, 2]$$$; </li><li> $$$a = [2, 2], b = [2, 2]$$$; </li><li> $$$a = [1, 1], b = [2, 1]$$$; </li><li> $$$a = [1, 1], b = [1, 1]$$$. </li></ul></div>