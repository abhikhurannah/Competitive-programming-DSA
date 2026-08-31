<h2><a href="https://codeforces.com/contest/1305/problem/C" target="_blank" rel="noopener noreferrer">1305C — Kuroni and Impossible Calculation</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1305C](https://codeforces.com/contest/1305/problem/C) |

## Topics
`brute force` `combinatorics` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Kuroni and Impossible Calculation</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>To become the king of Codeforces, Kuroni has to solve the following problem.</p><p>He is given $$$n$$$ numbers $$$a_1, a_2, \dots, a_n$$$. Help Kuroni to calculate $$$\prod_{1\le i \lt j\le n} |a_i - a_j|$$$. As result can be very big, output it modulo $$$m$$$.</p><p>If you are not familiar with short notation, $$$\prod_{1\le i \lt j\le n} |a_i - a_j|$$$ is equal to $$$|a_1 - a_2|\cdot|a_1 - a_3|\cdot$$$ $$$\dots$$$ $$$\cdot|a_1 - a_n|\cdot|a_2 - a_3|\cdot|a_2 - a_4|\cdot$$$ $$$\dots$$$ $$$\cdot|a_2 - a_n| \cdot$$$ $$$\dots$$$ $$$\cdot |a_{n-1} - a_n|$$$. In other words, this is the product of $$$|a_i - a_j|$$$ for all $$$1\le i  \lt  j \le n$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$, $$$m$$$ ($$$2\le n \le 2\cdot 10^5$$$, $$$1\le m \le 1000$$$) — number of numbers and modulo.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$0 \le a_i \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output the single number — $$$\prod_{1\le i \lt j\le n} |a_i - a_j| \bmod m$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0036788468460744783" id="id009379294101169804" class="input-output-copier">Copy</div></div><pre id="id0036788468460744783">2 10
8 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00036919762690746816" id="id008800614190494546" class="input-output-copier">Copy</div></div><pre id="id00036919762690746816">3</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0043222816884474813" id="id003144221192083585" class="input-output-copier">Copy</div></div><pre id="id0043222816884474813">3 12
1 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003403817171687459" id="id007074535199232573" class="input-output-copier">Copy</div></div><pre id="id003403817171687459">0</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002057355689029381" id="id00755095254089249" class="input-output-copier">Copy</div></div><pre id="id002057355689029381">3 7
1 4 9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005096856166082139" id="id006653169733777485" class="input-output-copier">Copy</div></div><pre id="id005096856166082139">1</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, $$$|8 - 5| = 3 \equiv 3 \bmod 10$$$.</p><p>In the second sample, $$$|1 - 4|\cdot|1 - 5|\cdot|4 - 5| = 3\cdot 4 \cdot 1 = 12 \equiv 0 \bmod 12$$$.</p><p>In the third sample, $$$|1 - 4|\cdot|1 - 9|\cdot|4 - 9| = 3 \cdot 8 \cdot 5 = 120 \equiv 1 \bmod 7$$$.</p></div>