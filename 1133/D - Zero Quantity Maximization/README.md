<h2><a href="https://codeforces.com/contest/1133/problem/D" target="_blank" rel="noopener noreferrer">1133D — Zero Quantity Maximization</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1133D](https://codeforces.com/contest/1133/problem/D) |

## Topics
`hashing` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">D. Zero Quantity Maximization</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two arrays $$$a$$$ and $$$b$$$, each contains $$$n$$$ integers.</p><p>You want to create a new array $$$c$$$ as follows: choose some real (i.e. not necessarily integer) number $$$d$$$, and then for every $$$i \in [1, n]$$$ let $$$c_i := d \cdot a_i + b_i$$$.</p><p>Your goal is to maximize the number of zeroes in array $$$c$$$. What is the largest possible answer, if you choose $$$d$$$ optimally?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of elements in both arrays.</p><p>The second line contains $$$n$$$ integers $$$a_1$$$, $$$a_2$$$, ..., $$$a_n$$$ ($$$-10^9 \le a_i \le 10^9$$$).</p><p>The third line contains $$$n$$$ integers $$$b_1$$$, $$$b_2$$$, ..., $$$b_n$$$ ($$$-10^9 \le b_i \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the maximum number of zeroes in array $$$c$$$, if you choose $$$d$$$ optimally.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009450564149531279" id="id009851121551269595" class="input-output-copier">Copy</div></div><pre id="id009450564149531279">5
1 2 3 4 5
2 4 7 11 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000813203874908982" id="id007872333634432661" class="input-output-copier">Copy</div></div><pre id="id000813203874908982">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005674416175323238" id="id008166984421668899" class="input-output-copier">Copy</div></div><pre id="id005674416175323238">3
13 37 39
1 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005741083482354014" id="id009055366108644212" class="input-output-copier">Copy</div></div><pre id="id005741083482354014">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0019855653888746327" id="id009707738716811082" class="input-output-copier">Copy</div></div><pre id="id0019855653888746327">4
0 0 0 0
1 2 3 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007154700318224336" id="id0020989090732879034" class="input-output-copier">Copy</div></div><pre id="id007154700318224336">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0012721811652234905" id="id006190573957738071" class="input-output-copier">Copy</div></div><pre id="id0012721811652234905">3
1 2 -1
-6 -12 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005972724917461326" id="id00027672865302322602" class="input-output-copier">Copy</div></div><pre id="id005972724917461326">3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, we may choose $$$d = -2$$$.</p><p>In the second example, we may choose $$$d = -\frac{1}{13}$$$.</p><p>In the third example, we cannot obtain any zero in array $$$c$$$, no matter which $$$d$$$ we choose.</p><p>In the fourth example, we may choose $$$d = 6$$$.</p></div>